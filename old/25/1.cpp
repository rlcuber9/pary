//1.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

struct proc{
  string name;
  int chast;
  proc *next;
};
proc *root=0;
void add(string name, int chast){
    proc *c=new proc;
    c->name=name;
    c->chast=chast;
    c->next=root;
    root = c;
}
void del(){
     proc *c=root;
     root=root->next;
     delete c;
}
void print(){
    proc *c=root;
    while (c!=0){
        cout << c->name << " " << c->chast << endl;
        c=c->next;
    }
    cout<<endl;
}
void min(){
    int min = 10000000;
    string namemin;
    proc *c=root;
    while (c!=0){
        if (min > c->chast) {
            min = c->chast;
            namemin = c->name;
        }
        c=c->next;
    }
    cout << "min = "<< namemin << " " << min;
}
int main(int argc, const char *argv[]){
    add("hkugkj", 4);
    add("hkgkj", 3);
    add("hugkj", 2);
    add("hkugj", 8);
    print();
    del();
    print();
    min();
    return 0;
}
