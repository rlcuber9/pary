//5.cpp
//08-02-2024
#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "input N\n";
    cin >> N;
    int P = 1;
    int x = 1;
    while (x < N){ 
        P = P * x;
        x += 2;
    }
    cout<<"P="<<P;
    return 0;
}
