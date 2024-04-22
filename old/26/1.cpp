float a[4][6];

int **A;
A = new int *[4];
for (int i = 0; i < 4; i++) {
   A[i] = new int [6];
}   

for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout << a[i][j] << '\t';
    }
    cout << endl;
}

for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
        if ((i+j>6-1)and(j%2==1)){
            cout << a[i][j] << '\t';
        }
    }
}

int min= 2147483647;
for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 4; j++) {
        if ((a[i][j]< 3)and(min > a[i][j])){
            min = a[i][j]
        }
    }
}
if (min == 2147483647) {
    cout << "минимальное число не было найдено";
}
else {
    cout << "min = " << min;
}
