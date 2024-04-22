//3.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class class1 {
public:
    void print1(){
        cout << "1 \n";
    }
};
class class2 {
public:
    void print2(){
        cout << "2 \n";
    }
};
class child : public class1, public class2 {
};
int main(int argc, const char *argv[]){
    child a;
    a.print1();
    a.print2();
    return 0;
}
