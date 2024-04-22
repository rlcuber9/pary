//1.cpp
//08-02-2024
#include <iostream>
using namespace std;  
int main() {
    cout << "input x" << endl;
    double x, y, z;
    cin >> x;
    if((x != -3)and(x != 3)){
        y = (3 * x * x + 1) / (x * x - 9);
        cout << "y=" << y;   
    }
    else { cout << "\nerror y";  }
    if (x != 0) {
        z = (2 * x + 1) / (3 * x);
        cout << "\nz=" << z;   
    }
    else{ 
        cout << "\nerror z";  
    }    
    return 0;
}
