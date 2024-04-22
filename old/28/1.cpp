//main.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class avto {
    public:
    string name;
    int year;
    void hello (){
        cout << "Hello world!"<<endl;
        cout << name +" - " << year<<endl;
    }
};
int main(int argc, const char *argv[]){
    avto avto1;
    avto1.name = "Volvo";
    avto1.year = 2015; 
    avto1.hello();
    cout << "Марка - " << avto1.name<<endl;
    cout << "Год выпуска - " << avto1.year<<endl;
    return 0;
}
