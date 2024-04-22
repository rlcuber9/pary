//1.cpp
#include <iostream>
#include <string.h>
#include <math.h>
#include <ctime>
using namespace std;
int** sozdanie(int n, int m){
    int **A;
    A = new int *[n];
    for (int i = 0; i < n; i++) {
       A[i] = new int [m];
    }
    return A;
}
void initialize(int** A, int n, int m){
    srand(time(0));
    for(int i = 0; i < n; i++){
	    for(int j = 0; j < m; j++){
		    A[i][j] = rand()%11 - 5 ;
		    cout.width(3);
		    cout << A[i][j];
		}
    cout << endl;
	}
}
void print(int** A, int n, int m){
    for(int i = 0; i < n; i++){
	    for(int j = 0; j < m; j++){
		    cout.width(3);
		    cout << A[i][j];
		}
    cout << endl;
	}
}
int summa (int** A, int n, int m){
	int result=0;
	for(int j = 0; j < m; j++){
        if (j<3) {
            for(int i = 0; i < n; i++){
                if(A[i][j]%3 == 0){
                    result += 1;
                }
            }
        }
        else if (j > m-4) {
            for(int i = 0; i < n; i++){
                if(A[i][j]%3 == 0){
                    result += 1;
                }
            }
        }
	}
	return result;
}
void zamena (int** A, int n, int m, int res){
    for(int i = 0; i < n; i++){
	    for(int j = 0; j < m; j++){
            if (A[i][j] == 0) {
                A[i][j] = res;
            }
        }
    }
}

int main(int argc, const char *argv[]){
 	int n=0, m=0, sum=0;
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
    if (n<6)
        n = 6;
    if (m<6)
        m = 6;
    int **X;
    X = sozdanie(n,m);
    initialize(X, n, m);
	sum=summa(X, n, m);
    zamena(X, n, m, sum);
    cout << endl;
    print(X, n, m);
    cout << sum;
    return 0;
}
