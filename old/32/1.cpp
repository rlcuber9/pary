//1.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class paral {
public:
    int a;
    int b;
    int c;
    paral (int a_, int b_, int c_){
        a = a_;
        b = b_;
        c = c_;
    };
    ~paral (){
        
    };
    virtual void print(){
        cout <<"ширина = " << a<< ", длина = " <<b<< ", высота = " <<c<< "";
    }
    int v(){
        return a*b*c;
    }
};
class myparal : public paral {
public:
    string metka;
    myparal(int a, int b, int c): 
    paral (a, b, c){
        // metka = metka1;
        //     metka = "Низкий ";
        if (a==b and b==c){
            metka = "Куб";
        }
        else if ((c > a)or(c > b)) {
            metka = "Высокий";
        }
        else if ((c < a)or(c < b)) {
            metka = "Низкий ";
        }
    }
    ~myparal (){
        
    };
    void print() {
        paral::print();
        cout << ", Метка = " << metka;
    }
};
int main(int argc, const char *argv[]){
    int w, l, h;
    string m;
    cout << "ширина, ";
    cout << "длина, ";
    cout << "высота?" << endl;
    cin >> w;
    cin >> l;
    cin >> h;
    // if (w==l and l==h){
    //     m = "Куб";
    // }
    // if ((h > l)or(h > w)) {
    //     m = "Высокий";
    // }
    // if ((h < l)or(h < w)) {
    //     m = "Низкий ";
    // }
    myparal a1 = myparal(w, l, h);
    a1.print();
    cout << endl << "v = "<< a1.v();
    return 0;
}
