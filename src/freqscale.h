#ifndef SDXCVR_FREQSCALE_H
#define SDXCVR_FREQSCALE_H

#include <qwidget.h>
#include <QMouseEvent>

class FrequencyScale : public QWidget
{
    Q_OBJECT
    
    public:
        FrequencyScale(QWidget *parent = 0);
    
    private:
        int x0;
        int mouseMoving;

    protected:
        void mousePressEvent( QMouseEvent * );
        void mouseMoveEvent( QMouseEvent * );
        void wheelEvent(QWheelEvent *event);

    signals:
//	void set_offset( int );
//	void set_pan( int );
//	void movement( int );
//        void tune2( int );
//        void tune3( int );
        void zoom( int );
        void movement( int );
};
#endif
