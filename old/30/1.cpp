//1.cpp
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
class student {
private:
    int ocenki[4];
    string fio;
public:
    student(){
        cin.ignore();
    	cout << "Введите ФИО студента\n";   
        getline(cin,fio);
    	cout << "Введите оценки студента\n"; 
        cin >> ocenki[0]>> ocenki[1]>> ocenki[2]>> ocenki[3];
    }
    void print(){
    	cout << "\nФИО\n";
    	cout << fio;
    	cout << "\nОценки\n";   
        cout << ocenki[0]<<""<< ocenki[1]<<""<< ocenki[2]<<""<< ocenki[3];
    }
    bool stipendiya(){
        if ((ocenki[0]>3)and(ocenki[1]>3)and(ocenki[2]>3)and(ocenki[3]>3)) {
            return true;
        }
        else {
            return false;
        }
    }
    string getfio(){
        return fio;
    }
};
int main(int argc, const char *argv[]){
    int n;
    cout << "размерность массива?\n";
    cin >> n;
    student *mass = new student[n];
    cout << "список студентов получающих стипендию: \n";
    for (int i = 0; i < n; i++) {
        if (mass[i].stipendiya()) {
            cout << mass[i].getfio();
            cout << "\n";
        }
    }
    return 0;
}
