#include <QCoreApplication>
#include <QDebug>
#include <QTextCodec>
#include <QTextStream>
#include <QString>

#include "iostream"
#include "math.h"
using namespace std;
#define PI 3.14159265


int main() {

    double a;
    double b;
    double c;

    cout << "Enter lenght of side A: " ;
    cin >> a;
    cout << "Enter lenght of side B: " ;
    cin >> b;
    cout << "Enter lenght of side C: " ;
    cin >> c;

    do
    {
        cout << "This triangle is impossible. Please enter adequate values!\n";
        cout << "Enter lenght of side A: " ;
        cin >> a;
        cout << "Enter lenght of side B: " ;
        cin >> b;
        cout << "Enter lenght of side C: " ;
        cin >> c;
    } while ((a >= (b + c)) || (b >= (a + c)) || (c >= (a + b)));

    double par =(b*b + c*c - a*a) / (2 * b * c);
    double angA = acos((b*b + c*c - a*a) / (2 * b * c)) * 180.0 / PI;

    par =(a*a + c*c - b*b) / (2 * a * c);
    double angB = acos((a*a + c*c - b*b) / (2 * a * c)) * 180.0 / PI;

    par =(b*b + a*a - c*c) / (2 * b * a);
    double angC = acos((b*b + a*a - c*c) / (2 * b * a)) * 180.0 / PI;

    if ((angA < 90) && (angB < 90)  && (angC < 90)) {
        cout << "Your triangle is an acute triangle" << endl;
    } else if ((angA > 90) || (angB > 90)  || (angC > 90)) {
        cout << "Your triangle is an obtuse triangle" << endl;
    } else if ((a == b) && (b == c) && (a == c)) {
        cout << "Your triangle is equilateral" << endl;
    } else if ((a == b) || (a == c) || (b == c)) {
        cout << "Your triangle is isosceles" << endl;
    } else if ((a == sqrt(b*b + c*c)) || (b == sqrt(a*a + c*c)) || (c == sqrt(a*a + b*b))) {
        cout << "Your triangle is rectangular (Right triangle)" << endl;
    } else if ((a != b) && (b != c) && (a != c)) cout << "Your triangle is scalene" << endl; cout << endl;

    double semiperimeter = (a + b + c)/2;
    double area = sqrt(semiperimeter*(semiperimeter - a) * (semiperimeter - b) * (semiperimeter - c));
    cout << "Area of the triangle is " << area << endl;



}
