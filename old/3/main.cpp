#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(){
    int x1, y1, x2, y2, x3, y3, d;
    double a, b, c, p;
    setlocale(LC_ALL, "Russian");
    cout << "Первая вершина";
    cin >> x1 >> y1;
    cout << "Вторая вершина";
    cin >> x2 >> y2;
    cout << "Третья вершина";
    cin >> x3 >> y3;
    a = pow(pow((x1-x2),2.) + pow((y1-y2),2.), .5);
    b = pow(pow((x2-x3),2.) + pow((y2-y3),2.), .5);
    c = pow(pow((x3-x1),2.) + pow((y3-y1),2.), .5);
    cout << "Выберете действие:"<< endl;
    cout << "1. Вычислить длины сторон треугольников"<< endl;
    cout << "2. Определить существование треугольника"<< endl;
    cout << "3. Вычислить прощадь треугольника"<< endl;
    cout << "4. Выяснить вид треугольника"<< endl;
    cout << "Ваш выбор:"<< endl;
    cin >> d;
    switch(d)
    {
        case 1: 
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
            cout << "c = " << c << endl;
        break;
        case 2:
            if ((a+b>c) && (c+b>a) && (a+c>b)){
                cout << "Треугольник существует" << endl;
            }
            else cout << "Треугольник не существует" << endl;
        break;
        case 3:
            p = (a+b+c)/2;
            cout << "S = " << pow(p*(p-a)*(p-b)*(p-c), .5) << endl;
        break;
        case 4:
            if ((a==b)&&(b==c)&&(a==c)){
                cout << "Треугольник равносторонний" << endl;
            }
            else if ((a==b)||(b==c)||(a==c)){
                cout << "Треугольник равнобедренный" << endl;
            }
            else if ((pow(a,2)+pow(b,2)==pow(c,2))||(pow(a,2)+pow(c,2)==pow(b,2))||(pow(b,2)+pow(c,2)==pow(a,2))){
                cout << "Треугольник прямоугольный" << endl;
            }
            else cout << "Треугольник произвольный" << endl;
        break;

    }
    return 0;
}
