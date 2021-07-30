#include"shapes.h"
#include"line.h"
#ifndef POLYGON_H_INCLUDED
#define POLYGON_H_INCLUDED
class Polygon : public shape{    //Base Class
    protected :
        int edges,length;
        float peri, interior, exterior;
    public:
        Polygon();
        Polygon(int s, int m);
        void perimeter();
        void int_ext();
        void draw_polygon(int x1,int y1,int x2,int y2);
};
class Rectangle : public Polygon, public line{
    protected:
        int dx1,dy1,dx2,dy2;
    public:
        Rectangle();
	void setp(int x1,int y1,int x2,int y2);
    void drawRectangle(int x1,int y1,int x2,int y2);
};
#endif
