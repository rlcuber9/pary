//main.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(int argc, const char *argv[]){
    double a, b, c;
    cout<<"Программа находит значение максимального из трех введенных чисел \n";
    cout<<"Введите первое число "; cin>>a;
    cout<<"Введите второе число "; cin>>b;
    cout<<"Введите третье число "; cin>>c;
    if (a>b && a>c){ // if (a>b && a>c) then { 
        cout<<"Наибольшим оказалось первое число "<<a; }
        else if (b>a && b>c) {// else if (b>a && a>c) then  
            cout<<"Наибольшим оказалось второе число "<<b; 
        } 
    else { 
        cout<<"Наибольшим оказалось третье число "<<c; //cout<<"Наибольшим оказалось третье число "<<b; 
    }
    return 0;
}
