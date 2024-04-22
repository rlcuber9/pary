//1.cpp
//08-02-2024
#include <iostream>
using namespace std; //using namespace std
int main() {
    cout << "input a, b" << endl;
    double a, b;
    cin >> a >> b;
    if (a > b)
    { a = a * a;}// { a = a * a}
    else 
    { b = b * b;};// { b = b * b};
    cout << "a=" << a << " b=" << b << endl;
    return 0;
}
