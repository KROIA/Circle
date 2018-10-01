#ifndef CIRCLE_H
#define CIRCLE_H
//Autor                 Alex Krieg
//Datum                 01.10.2018
#define CIRCLE_VERSION  "00.00.00"

#include "circle_global.h"
#include <geometry.h>

class CIRCLESHARED_EXPORT Circle : private QObject
{
    Q_OBJECT
    public:
        Circle(QPainter *p);
        ~Circle();

        void        color(QColor col);
        QColor      color();
        void        frameColor(QColor col);
        QColor      frameColor();
        void        frameSize(unsigned int size);
        unsigned int frameSize();
        void        pos(QPoint pos);
        QPoint      pos();
        void        drawPos(QPoint pos);
        QPoint      drawPos();
        void        radius(unsigned int radius);
        unsigned int radius();
        void        diameter(unsigned int diameter);
        unsigned int diameter();

        void        frame(bool enable);
        bool        frame();
        void        infill(bool enable);
        bool        infill();

    signals:

    public slots:
        void draw();
    private slots:

    private:
        QPainter *painter;
        QColor _color;
        QColor _frameColor;
        QPoint _pos;
        QPoint _drawPos;
        unsigned int _radius;
        unsigned int _frameSize;
        bool         _frameEnable;
        bool         _infillEnable;
};

#endif // CIRCLE_H
