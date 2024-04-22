//1.cs
//14-03-2023
using System;
class  consleprogram{
    static void metod(int n, out int sum, out int[] p, out int min){
        sum=0;
        min=31;
        Random rand = new Random();
        int[,] a = new int[n+3,n+3];
        p = new int[n];
        for (int i = 0; i < n; i++) {
            p[i] = 1;
        }
        for (int i = 0 ; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i,j] = rand.Next(-30,30);
            }
        }
        Console.WriteLine("Исходная матрица:");
        for (int i = 0 ; i < n; i++) {
            for (int j = 0; j < n; j++) {
                Console.Write($"{a[i,j]} ");
            }
            Console.WriteLine($"");
        }
        Console.WriteLine($"");
        for (int i = 0 ; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((i+j<n-1)&(a[j,i]<0)) {
                    sum+=a[j,i];
                }
                if ((a[j,i]%2==0)&(a[j,i]>0)) {
                    p[i]=p[i]*a[j,i];
                }
                if ((min>a[j,i])&(a[j,i]%2==0)) {
                    min = a[j,i];
                }
            }
        }
    }
    static void Main() {
    int sum, min;
    int[] p;
    Console.Write("n1 = ");
    int n = int.Parse(Console.ReadLine());
    Console.WriteLine();
    consleprogram.metod(n, out sum, out p, out min);
    Console.WriteLine($"sum = {sum}");
    for (int i = 0; i < n; i++) {
        Console.Write($"{p[i]} ");
    }
    Console.WriteLine();
    Console.WriteLine($"min = {min}");
    Console.WriteLine();
    Console.WriteLine();
    Console.Write("n2 = ");
    n = int.Parse(Console.ReadLine());
    Console.WriteLine();
    consleprogram.metod(n, out sum, out p, out min);
    Console.WriteLine($"sum = {sum}");
    for (int i = 0; i < n; i++) {
        Console.Write($"{p[i]} ");
    }
    Console.WriteLine();
    Console.WriteLine($"min = {min}");
    }
}
