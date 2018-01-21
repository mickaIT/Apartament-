#ifndef PREMISE_H
#define PREMISE_H

class Premise
{
    protected:
    double area_in_meters;
    double rate_per_meter;

    public:
    Premise(double area, double rate);
    double area();
    double rate();
    virtual double rent()=0;
};

#endif
