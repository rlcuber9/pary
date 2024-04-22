//4.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class animal {
public:
    animal (){
        
    }
    ~animal (){
        
    };
    void rech(){
        cout << "Животное издает звук\n";
    }
};
class cat: public animal {
public:
    void rechcat(){
        cout << "Кошка говорит: мяяяяяяу\n";
    }

};
class dog: public animal {
public:
    void rechdog(){
        cout << "Собака говорит: гаф-гаф\n";
    }

};
int main(int argc, const char *argv[]){
    animal animal1;
    cat cat1;
    dog dog1;
    animal1.rech();
    cout << "---------------------\n";
    cat1.rech();
    cat1.rechcat();
    dog1.rech();
    dog1.rechdog();
    return 0;
}
