// var 9
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
	srand(time(0));
    int n =13, max = -51;
    cout << "b" << endl;
    int *b = new int[n];
    for (int i = 0; i < n; i++) {
        b[i] = rand()% 101 -50;
        cout << b[i] << " ";
    }
    for (int i = 0; i < n; i+=2) {
        if ((b[i] > max) && (b[i]%5==0)) {
            max = b[i];
        }
    }
    cout << endl << "max = " << max << endl;
    return 0;
}
