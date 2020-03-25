#include "freqscale.h"

FrequencyScale::FrequencyScale(QWidget *parent) : QWidget(parent) 
{
	setMouseTracking( true );
        mouseMoving = 0;
}

void FrequencyScale::mouseMoveEvent( QMouseEvent *e )
{
        emit movement( e->x() );
}

void FrequencyScale::mousePressEvent( QMouseEvent *e )
{

}

void FrequencyScale::wheelEvent(QWheelEvent *event)
{
    int numDegrees = event->delta() / 8;
    int numSteps = numDegrees / 15;
    char orientation = '?';
    int orient = 0, shift = 0, ctl = 0, alt = 0;

    if (event->orientation() == Qt::Horizontal) {
                orientation = 'h';
                orient = 100;
    } else {
                orientation = 'v';
                orient = 1000;
    }

#if 0
   if (event->state() & Qt::ShiftButton)
        shift = 1;
   if (event->state() & Qt::AltButton)
        alt = 1;
   if (event->state() & Qt::ControlButton)
        ctl = 1;
#endif

//    printf("wheelEvent degrees %d steps %d orientation %c %c %c %c\n",
//                numDegrees, numSteps, orientation, shift, ctl, alt);

//    if (event->orientation() == Qt::Horizontal) {
//        emit tune2( orient * numSteps +  10000 * shift + 100000 * alt);
//        } else {
        emit zoom( numSteps );
//        }
}

