#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(){
    unsigned long int x;
    int d, n;
    setlocale(LC_ALL, "Russian");
    n = 1;
    while (n){
    cout << "x = ";
    cin >> x;
    cout << "Выберете действие:"<< endl;
    cout << "1. Произведение"<< endl;
    cout << "2. Количество"<< endl;
    cout << "3. Реверс"<< endl;
    cout << "4. Сколько четных и нечетных"<< endl;
    cout << "5. Сумма четных позиций"<< endl;
    cout << "6. Произведение нечетных позиций"<< endl;
    cout << "7. Сумма первой и второй половины"<< endl;
    cout << "Ваш выбор:"<< endl;
    cin >> d;
    cout << "x = " << x << endl;
    int p;
    int k;
    int k1, k2;
    int s;
    int x1;
    int s1;
    int s2;
    int i;
    switch(d)
    {
        case 1: 
            int p;
            p = 1;
            cout << "P = ";
            while (x){
                p *= x%10;
                cout << x%10 << "*";
                x /= 10;
            }
            cout << "1 = " << p;
        break;
        case 2: 
            k = 0;
            while (x){
                x /= 10;
                k++;
            }
            cout << "K = " << k;
        break;
        case 3: 
            while (x){
                cout << x%10;
                x /= 10;
            }
        break;
        case 4: 
            k1 = 0;
            k2 = 0;
            while (x){
                if ((x%10)%2==1){
                    k1++;
                    x /= 10;
                }
                else{
                    k2++;
                    x /= 10;
                }
            }
            cout << "Нечетные = " << k1 << endl;
            cout << "  Четные = " << k2;
        break;
        case 5: 
            k = 0;
            x1 = x;
            while (x){
                x /= 10;
                k++;
            }
            x = x1;
            s = 0;
            cout << "S = ";
            if (k%2 == 0){
                while (x){
                    s += x%10;
                    cout << x%10 << "+";
                    x /=100;
                }
            }
            else{
                x/=10;
                while (x){
                    s += x%10;
                    cout << x%10 << "+";
                    x /=100;
                }
            }
            cout << "0 = " << s;
        break;
        case 6: 
            k = 0;
            x1 = x;
            cout << "P = ";
            while (x){
                x /= 10;
                k++;
            }
            x = x1;
            p = 1;
            if (k%2 == 1){
                while (x){
                    p *= x%10;
                    cout << x%10 << "*";
                    x /=100;
                }
            }
            else{
                x/=10;
                while (x){
                    p *= x%10;
                    cout << x%10 << "*";
                    x /=100;
                }
            }
            cout << "1 = " << p;
        break;
        case 7: 
            k = 0;
            x1 = x;
            s1 = 0;
            s2 = 0;
            while (x){
                x /= 10;
                k++;
            }
            x = x1;
            k/=2;
            cout << "Где левая половина больше или если цифр четное колличество" << endl;
            for (i = 1; i<=k; i++){
                s1 += x%10;
                x /=10;
            }
            while(x){
                s2 += x%10;
                x /=10;
            }
            cout << "Левая= " << s2 << endl;
            cout << "Правая= " << s1;
            cout << endl << endl;
            cout << "Где правая половина больше" << endl;
            x = x1;
            s1 = 0;
            s2 = 0;
            for (i = 1; i<=k+1; i++){
                s1 += x%10;
                x /=10;
            }
            while(x){
                s2 += x%10;
                x /=10;
            }
            cout << "Левая= " << s2 << endl;
            cout << "Правая= " << s1;
        break;
        }
        cout << endl << endl;
    }
    return 0;
}
