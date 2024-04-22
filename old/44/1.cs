//1.cs
//07-03-2023
using System;
class  consleprogram{
  static void creatematrix(int n){ 
      int[,] a = new int[n+3,n+3];
      for (int i = 1 ; i <= n; i++) {
          for (int j = 1; j <= n; j++) {
              if (i+j==n+1) {
                  a[i,j] = j;
              }
              else if ((i+j>n+1)&(i==j)) {
                  a[i,j] = 3;
              }
              else if (i+j<n+1) {
                  a[i,j] = 2;
              }
              else if ((i<j)&(i+j>n+1)) {
                  a[i,j] = 1;
              }
              else if ((i>j)&(i+j>n+1)) {
                  a[i,j] = 4;
              }
          }   
      }   
      for (int i = 1 ; i <= n; i++) {
          for (int j = 1; j <= n; j++) {
              Console.Write($"{a[i,j]}  ");
          }
          Console.WriteLine();
      }
  }
  static void Main() {
      int a, b, c;
      Console.WriteLine("Введите a, b, c");
      a = int.Parse(Console.ReadLine());
      b = int.Parse(Console.ReadLine());
      c = int.Parse(Console.ReadLine());
      consleprogram.creatematrix(a);
      Console.WriteLine();
      consleprogram.creatematrix(b);
      Console.WriteLine();
      consleprogram.creatematrix(c);
      Console.WriteLine();
  }
}
