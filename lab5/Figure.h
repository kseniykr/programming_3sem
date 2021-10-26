#ifndef FIGURE_H
#define FIGURE_H


class Figure
{
public:
    Figure();
    virtual double Space();
    virtual double Perimeter();
};

class Circle : public Figure{

private:

    double r;

public:

    Circle();

    Circle(double new_r){
        r=new_r;
    };

    virtual double Space();
    virtual double Perimeter();

};

class Triangle : public Figure{

private:

    double a,b,c;

public:
    Triangle(double a_new, double b_new, double c_new){

        a=a_new;
        b=b_new;
        c=c_new;

    };

    virtual double Space();
    virtual double Perimeter();

};

class Trapezoid : public Figure {
private:
    
    double a1, a2, b1, b2, h; //а1, а2 - основания, b1, b2 - боковые стороны, h - высота

public:
    Trapezoid(double a1_new, double a2_new, double b1_new, double b2_new, double h_new) {
        a1 = a1_new;
        a2 = a2_new;
        b1 = b1_new;
        b2 = b2_new;
        h = h_new;

    };

    virtual double Space();
    virtual double Perimeter();
};

class Prism{
private:

    Figure* base;
    double h;

public:
    Prism();

    ~Prism() {
        delete base;
    }

    virtual double Volume();


};


#endif // FIGURE_H
