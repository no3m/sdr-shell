#ifndef SDXCVR_FREQSCALE_H
#define SDXCVR_FREQSCALE_H

#include <qwidget.h>
#include <QMouseEvent>
#include <QApplication>

class Spectrum : public QWidget
{
    Q_OBJECT

    public:
        Spectrum(QWidget *parent = 0);

    private:
        int x0;
        int x_last;
        int button_pressed;

    protected:
        void mousePressEvent( QMouseEvent * );
        void mouseMoveEvent( QMouseEvent * );
        void wheelEvent(QWheelEvent *event);
        void mouseReleaseEvent( QMouseEvent * );

    signals:
        void pan ( int );
        void movement ( int );
        void resetZoom ( int );
        void scale ( int );
        void tune ( int );
        void zoom ( int );
        void tunewheel ( int );
        void centerPB ( int );
        void resetPan ( int );
        void dummy ( int );
};
#endif
