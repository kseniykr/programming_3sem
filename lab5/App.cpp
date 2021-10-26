#include "App.h"
#include <iostream>

using namespace std;

void App::Start(){
    int choice = -1;

    do{
        Menu(choice);
        Action(choice);
    }while(choice != 0);

}

void App::Menu(int& choice){
    cout << endl;
    cout << "MENU:" << endl;
    cout << "1) Create figure" << endl;
    cout << "2) Create prism" << endl;
    cout << "Insert your choice: "; cin >> choice;
    cout << endl;
}

void App::Action(int& choice){

    if(choice == 1){

        cout << "Which figure you want to do?" << endl;
        cout << "1) Triangle" << endl;
        cout << "2) Circle" << endl;
        cout << "3) Trapezoid" << endl;
        cout << "Insert your choice: "; int temp; cin >> temp;

        if(temp == 1){

            Figure* figure;
            double a,b,c;
            cout << "Insert side a: "; cin >> a;
            
            while (a<=0){
                cout << "Error! Value should be greater than zero! Try again!";
                    cin >> a;
            }
            
            cout << "Insert side b: "; cin >> b;

            while (b <= 0) {
                cout << "Error! Value should be greater than zero! Try again!";
                    cin >> b;
            }

            cout << "Insert side c: "; cin >> c;

            while (c <= 0) {
                cout << "Error! Value should be greater than zero! Try again!";
                    cin >> c;
            }

            figure = new Triangle(a,b,c);

            cout << "Perimeter of figure is: " << figure->Perimeter() << endl;
            cout << "Space of figure is: " << figure->Space() << endl;

            delete figure;

        }else if(temp == 2){

            Figure* figure;
            double r;
            cout << "Insert radius: "; cin >> r;

            while (r <= 0) {
                cout << "Error! Value should be greater than zero! Try again!";
                    cin >> r;
            }

            figure = new Circle(r);

            cout << "Perimeter of figure is: " << figure->Perimeter() << endl;
            cout << "Space of figure is: " << figure->Space() << endl;

            delete figure;
        }
        else if (temp == 3) {
            
            Figure* figure;
            double a1, a2, b1, b2, h;

            cout << "Insert 1st base: "; cin >> a1;

            cout << "Insert 2nd base: "; cin >> a2;

            cout << "Insert 1st side: "; cin >> b1;

            cout << "Insert 2nd side: "; cin >> b2;

            cout << "Insert height: "; cin >> h;

            figure = new Trapezoid(a1, a2, b1, b2, h);

            cout << "Perimeter of figure is: " << figure->Perimeter() << endl;
            cout << "Space of figure is: " << figure->Space() << endl;

            delete figure;
        }
    }

    if (choice == 2) {
        Prism* New_prism = new Prism;
        cout << "Volume of prism: " << New_prism->Volume() << endl;
        delete New_prism;

    }
}
