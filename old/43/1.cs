//1.cs
//28-02-2023
using System;
class  consleprogram{
    static void punkt3(ref int n, ref int[] x){
        for (int i = n-1 ; i > -1; i--) {
            if (x[i]%2!=0) {
                for (int j = i; j < n-1; j++) {
                    x[j] = x[j+1];
                }
                n--;
                break;
            }
        }   
        Console.WriteLine("новый массив");
        for (int i = 0; i< n; i++) {
            Console.Write($"{x[i]} ");
        }
    }
    static void punkt4(ref int n, ref int[] x){
        int o;
        Console.WriteLine("Введите o");
        o = int.Parse(Console.ReadLine());
        int ii = 0;
        while (ii<n) {
            if (x[ii]<o) {
                for (int j = ii; j < n-1; j++) {
                    x[j] = x[j+1];
                }
                n--;
            }
            else {
                ii++;
            }
        }   
        Console.WriteLine("новый массив");
        for (int i = 0; i< n; i++) {
            Console.Write($"{x[i]} ");
        }
    }
    static void Main() {
        int n;
        int max = -31, imax=0;
        Console.WriteLine("Введите N");
        n = int.Parse(Console.ReadLine());
        int[] x = new int[n+3];
        Random rand = new Random();
        for (int i = 0; i < n; i++) {
            x[i] = rand.Next(-30,30);
        }   
        Console.WriteLine("Исходный массив:");
        foreach (int i in x) {
            Console.Write($"{i} ");
        }   
        Console.WriteLine("\n\nПункт 3");
        consleprogram.punkt3(ref n, ref x);
        Console.WriteLine("\n\nПункт 4");
        consleprogram.punkt4(ref n, ref x);
        Console.WriteLine("\n\nПункт 5");
        for (int i = 0; i < n; i++) {
            if ((max<x[i])&&(i%2!=0)) {
                max = x[i];
                imax = i;
            }
        }
        n++;
        for (int i = n-1; i > imax-1; i--) {
            x[i+1] = x[i];
        }
        x[imax] = 200;
        Console.WriteLine("новый массив");
        for (int i = 0; i< n; i++) {
            Console.Write($"{x[i]} ");
        }
        Console.WriteLine("\n\nПункт 6");
        int b;
        Console.WriteLine("Введите b");
        b = int.Parse(Console.ReadLine());
        int ii = 0;
        while (ii<n) {
            if (x[ii]<0) {
                n++;
                for (int j = n-1; j > ii; j--) {
                    x[j+1] = x[j];
                }
                x[ii+1] = b;
                ii+=2;
            }
            else {
                ii++;
            }
        }
        Console.WriteLine("новый массив");
        for (int i = 0; i< n; i++) {
            Console.Write($"{x[i]} ");
        }
    }
}
