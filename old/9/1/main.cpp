// var 9
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
	srand(time(0));
    int n =13, p = 1, k = 0;
    cout << "h  " << endl;
    int *h = new int[n];
    for (int i = 0; i < 13; i++) {
        h[i] = rand()% 11 - 9;
        cout << h[i] << " ";
    }
    for (int i = 1; i <= n-1; i+=2) {
        if (h[i] > 0) {
            p *= h[i];
        }
    }
    ZZ
    for (int i = 0; i < n; i+=1) {
        if (h[i] < 3) {
            k++;
        }
    }
    cout << endl << "p = " << p << endl;
    cout << "k = " << k << endl;
    return 0;
}
