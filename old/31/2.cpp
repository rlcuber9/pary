//2.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class avto {
private:
public:
    string vid;
    avto (){
        vid = "Иномарка ";
    }
    ~avto (){
        
    };
    void print(){
        cout << "Мой автомобиль: ";
    }
};

class marka: public avto{
private:
public:
    string markaname;
    marka (){
        markaname = "Ford ";
    }
    ~marka (){
        
    };
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
    string getmodelname(){
        return modelname;
    }
    string getmarkaname(){
        return markaname;
    }
    string getvid(){
        return vid;
    }
};
int main(int argc, const char *argv[]){
    model a;
    // a.vid = "Иномарка "
    // a.markaname = "Ford "
    // a.modelname = "Mustang"
    a.print();
    cout<< a.getvid() << a.getmarkaname() << a.getmodelname();
    return 0;
}
