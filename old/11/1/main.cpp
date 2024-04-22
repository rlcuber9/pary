//var22
//1
int a[16];
//2
float *b = new [n];
//3
for (int i = 0; i < 9; i++) {
    cin >> a[i];
}
//4
for (int i = 0; i < 12; i++) {
    a[i] = rand() % 23 -11;
}
//5
for (int i = 0; i < 8; i++) {
    cout << a[i] << endl;
}
//6
p = 1;
for (int i = 0; i < 12; i++) {
    if (i%2 == 0) {
        p*=r[i];
    }
}
//7
max = INT_MIN;
for (int i = 0; i < 8; i++) {
    if ((max < t[i]) && (t[i] < 10)){
        max = t[i];
    }
}
