//1.cs
//1 05 2024
using System;
using System.Threading;
using System.Threading.Tasks;

class Program
{
    static int sum(int a, int b){
        return a*a+b*b;
    }
    static void Main() {
        Console.Write($"a? ");
        int a = int.Parse(Console.ReadLine());
        Console.Write($"b? ");
        int b = int.Parse(Console.ReadLine());
        Task <int> t1 =new Task <int> (()=>sum(a, b));
        t1.Start();
        int res1 = t1.Result;
        Console.WriteLine($"{a}^2 + {b}^2 = {res1}");
        Task <string> t2 =t1.ContinueWith(task=> $"вычисления закончены");
        string res2 = t2.Result;
        Console.WriteLine($"{res2}");
    }
}
