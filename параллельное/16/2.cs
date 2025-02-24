//1.cs
//11 04 2024
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Threading.Tasks;
using System.Threading;
using System.Linq;

class Program {
    static int range(int a, int n, int m) {
        int res = 0;
        for(int i = 0; i<m; i++){
            res += a+ n*(i);
        }
        return res;
    }
    static void Main(string[] args) {
        int r1 = 0;
        int r2 = 0;
        int r3 = 0;
        int r4 = 0;

        Console.Write($"a? ");
        int a1 = int.Parse(Console.ReadLine());
        Console.Write($"n? ");
        int n1 = int.Parse(Console.ReadLine());

        Console.Write($"a? ");
        int a2 = int.Parse(Console.ReadLine());
        Console.Write($"n? ");
        int n2 = int.Parse(Console.ReadLine());

        Thread thr1 = new Thread(()=>{r1 = range(a1, n1, 4);});
        Thread thr2 = new Thread(()=>{r2 = range(a1, n1, 5);});
        Thread thr3 = new Thread(()=>{r3 = range(a2, n2, 4);});
        Thread thr4 = new Thread(()=>{r4 = range(a2, n2, 5);});

        thr1.Start();
        thr2.Start();
        thr3.Start();
        thr4.Start();
        Console.WriteLine($"range({a1}, {n1}, 4) = {r1}");
        Console.WriteLine($"range({a1}, {n1}, 5) = {r2}");
        Console.WriteLine($"range({a2}, {n2}, 4) = {r3}");
        Console.WriteLine($"range({a2}, {n2}, 5) = {r4}");
    }
}
