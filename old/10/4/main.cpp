//main.cpp
#include <iostream>
#include <string.h>
#include <math.h>
#include <climits>
using namespace std;

int main(int argc, const char *argv[]){
    srand(time(0));
    int n;
    int *a = new int[n];
    cin >> n;
    cout << "a = " << endl;
	for (int i = 0; i < n; i++) {
	    a[i] = rand()% 199 - 99;
        cout << a[i] << " ";
	}
    int i = 0;
    // for (int i = 0; i < n; i++) {
    while (i < n) {
        if (a[i]%5 == 0) {
            n++;
            for (int j = n-1; j > i-1; j--) {
                a[j+1] = a[j];
            }
            a[i] = 100;
            i+=2;
        }
        else {
            i++;
        }
    }
    cout << endl << "a' = " << endl;
	for (i = 0; i < n; i++) {
        cout << a[i] << " ";
	}
    return 0;
}
