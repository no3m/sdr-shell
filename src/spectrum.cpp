#include "spectrum.h"

Spectrum::Spectrum(QWidget *parent) : QWidget(parent) 
{
	setMouseTracking( true );
        x0 = 0;
        x_last = 0;
        button_pressed = Qt::NoButton;
}

void Spectrum::mouseMoveEvent( QMouseEvent *e )
{
    if (button_pressed == Qt::LeftButton) {
       emit pan( x_last - e->x() );
    }
    x_last = e->x();

    emit movement( e->x() );
}

void Spectrum::mousePressEvent( QMouseEvent *e )
{
    button_pressed = e->button();
    x0 = e->x();
}

void Spectrum::mouseReleaseEvent( QMouseEvent *e )
{

    if (QApplication::keyboardModifiers().testFlag(Qt::ControlModifier) == true) {
       if ( e->button() == Qt::MidButton )
          emit resetPan ( e->x() );
       if ( e->button() == Qt::RightButton )
          emit dummy ( e->x() );
       if ( e->button() == Qt::LeftButton && e->x() == x0)
          emit centerPB ( e->x() );
    } else if (QApplication::keyboardModifiers().testFlag(Qt::ShiftModifier) == true) {
       if ( e->button() == Qt::MidButton )
          emit resetpbt ( e->x() );
    } else {
       if ( e->button() == Qt::MidButton )
          emit resetZoom ( e->x() );
       if ( e->button() == Qt::RightButton )
          emit scale ( e->x() );
       if ( e->button() == Qt::LeftButton && e->x() == x0)
          emit tune ( e->x() );
    }

    button_pressed = Qt::NoButton;
}

void Spectrum::wheelEvent(QWheelEvent *event)
{
    int numDegrees = event->delta() / 8;
    int numSteps = numDegrees / 15;

    if (QApplication::keyboardModifiers().testFlag(Qt::ControlModifier) == true)
       emit zoom ( numSteps );
    else if (QApplication::keyboardModifiers().testFlag(Qt::ShiftModifier) == true)
       emit pbt ( numSteps );
    else if (QApplication::keyboardModifiers().testFlag(Qt::AltModifier) == true)
       emit filter (numSteps);
    else
       emit tunewheel ( numSteps );
}

