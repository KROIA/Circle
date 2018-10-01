// Autor    Alex Krieg
// Version  00.00.00
// Datum    01.10.2018

#include "circle.h"



Circle::Circle(QPainter *p)
{
    painter = p;
    color(QColor(0,255,0));
    frameColor(color());
    frameSize(3);
    radius(50);
    drawPos(QPoint(0,0));
    frame(true);
    infill(true);
}
Circle::~Circle()
{

}

void        Circle::color(QColor col)
{
    _color = col;
}
QColor      Circle::color()
{
    return _color;
}
void        Circle::frameColor(QColor col)
{
    _frameColor = col;
}
QColor      Circle::frameColor()
{
    return _frameColor;
}
void        Circle::frameSize(unsigned int size)
{
    _frameSize = size;
}
unsigned int Circle::frameSize()
{
    return _frameSize;
}
void        Circle::pos(QPoint pos)
{
    _pos = pos;
}
QPoint      Circle::pos()
{
    return _pos;
}
void        Circle::drawPos(QPoint pos)
{
    _drawPos = pos;
}
QPoint      Circle::drawPos()
{
    return _drawPos;
}
void        Circle::radius(unsigned int radius)
{
    _radius = radius;
}
unsigned int Circle::radius()
{
    return _radius;
}
void        Circle::diameter(unsigned int diameter)
{
    radius(diameter/2);
}
unsigned int Circle::diameter()
{
    return radius()*2;
}

void        Circle::frame(bool enable)
{
    _frameEnable = enable;
}
bool        Circle::frame()
{
    return _frameEnable;
}
void        Circle::infill(bool enable)
{
    _infillEnable = enable;
}
bool        Circle::infill()
{
    return _infillEnable;
}

void Circle::draw()
{
    QBrush brush(_color);
    QPen circlePen(_frameColor);
    circlePen.setWidth(_frameSize);
    QRect rectangle(QPoint(_pos.x()-_radius,_pos.y()-_radius),QPoint(_pos.x()+_radius,_pos.y()+_radius));
    painter->setBrush(brush);
    painter->setPen(circlePen);
    painter->drawEllipse(rectangle);
}
