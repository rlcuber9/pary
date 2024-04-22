//main.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(int argc, const char *argv[]){
    double min, max, a;
    cout<<"Программа находит попадает ли введенное число в заданный пользователем диапазон\n"; 
    cout<<"Введите min "; cin>>min;
    cout<<"Введите max "; cin>>max;
    if(min>max){
    cout<<"Вы неверно ввели диапазон";
    }
    else{
        cout<<"\n";
        cout<<"Введите число "; cin>>a;
        if (min<=a && a<=max){
            cout<<"Да"; 
        }
        else { 
            cout<<"Нет"; 
        }
    }
    // return 0;
}
