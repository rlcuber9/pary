//1.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
class marka {
private:
public:
    string markaname;
    marka (){
        markaname = "Ford ";
    }
    ~marka (){
        
    };
    void print(){
        cout << "Поехали, ";
    }
};
class model: public marka{
private:
public:
    string modelname;
    model (){
        modelname = "Mustang";
    }
    ~model (){
        
    };
};
int main(int argc, const char *argv[]){
    model a;
    a.print();
    cout<< a.markaname << a.modelname;
    return 0;
}
