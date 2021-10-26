#include "Figure.h"
#include <cmath>
#include <iostream>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;

Figure::Figure(){}

double Figure::Space() { return 0; };
double Figure::Perimeter() { return 0; };

double Triangle::Space(){
    double temp, p; // p - perimetr/2
    p = (a+b+c) / 2;
    temp = sqrt(p * (p - a) * (p - b) * (p - c));
    return temp;
}

double Circle::Space() {
    double temp;
    temp = M_PI * r * r;
    return temp;
}

double Triangle::Perimeter() {
    return (a + b + c);
}

double Circle::Perimeter() {
    return (2 * M_PI * r);
}

double Trapezoid::Perimeter() {
    return(a1 + a2 + b1 + b2);
}

double Trapezoid::Space() {
    return ((a1 + a2) * h / 2);
}

Prism::Prism() {
    cout << "Select Prism base:" << endl;
    cout << "1) Triangle" << endl;
    cout << "2) Circle" << endl;
    cout << "3) Trapezoid" << endl;
    cout << "Your choice: "; int temp; cin >> temp;

    if (temp == 1) {
        
        double a, b, c;
        cout << "Inser a,b,c (sides of triangle): "; cin >> a >> b >> c;

        base = new Triangle(a, b, c);
    }

    if (temp == 2) {
        double r;
        cout << "Insert radius: "; cin >> r;

        base = new Circle(r);
    }

    if(temp == 3) {
        
        double a1, a2, b1, b2, h;

        cout << "Insert 1st base: "; cin >> a1;
        cout << "Insert 2nd base: "; cin >> a2;
        cout << "Insert 1st side: "; cin >> b1;
        cout << "Insert 2nd side: "; cin >> b2;
        cout << "Insert height: "; cin >> h;

        base = new Trapezoid(a1, a2, b1, b2, h);
    }

    cout << "Insert height of the prism: "; cin >> h;
}

double Prism::Volume() {
    return (base->Space()) * h;
}