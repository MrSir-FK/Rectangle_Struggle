#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle 
{
    private:
        int Width;
        int Length;
    public:
        Rectangle (double, double);
        void setWidth (double);
        void setLength (double);
        double getWidth ();
        double getLength ();
        void area();
       
};
#endif