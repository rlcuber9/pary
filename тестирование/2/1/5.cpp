//5.cpp
//08-02-2024
#include <iostream>
using namespace std;
int main()
{      int N;
        cout<<"input N\n";// cout<<"input N";
        cin>>N;
        int P = 1;// int P = 0;
        int x = 1;
        while (x < N)
        { P = P * x;// { P = P + x;
        x+=2;}// }
        cout<<"P="<<P;
        return 0;
}
