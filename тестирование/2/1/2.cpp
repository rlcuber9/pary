//1.cpp
//08-02-2024
#include <iostream>
using namespace std;  
int main() {
    cout << "input x" << endl;// cout << 'input x' << endl;
    double x, y, z;
    cin >> x;
    if((x != -3)and(x != 3))// if (x != 3)
    { y = (3 * x * x + 1) / (x * x - 9);
    cout << "y=" << y;   
    }
    else { cout << "\nerror y";  }//этого небыло    
    if (x != 0)// if (x = 0)
    { z = (2 * x + 1) / (3 * x);// { z = (2 * x + 1) / 3 * x;
      cout << "\nz=" << z;   }
    else 
    { cout << "\nerror z";  }    
    return 0;
}
