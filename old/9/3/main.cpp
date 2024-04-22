// var 9
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
	srand(time(0));
    int n =12, k = 0, min = 32000, imin;
    cout << "a" << endl;
    int *a = new int[n+1];
    for (int i = 0; i < n; i++) {
        a[i] = rand()% 101 -50;
        cout << a[i] << " ";
    }
    a[n+1] = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            imin = i;
        }
        if (a[i]%4==0) {
            k++;
        }
    }
    cout << endl << "k = " << k << endl;
    for(int i= n-1; i >=imin; i--) a[i + 1]= a[i];
    a[imin] = k;
    cout << "a'" << endl;
    for (int i = 0; i < n+1; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
