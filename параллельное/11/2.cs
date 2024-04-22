//1.cs
//22 03 2024
using System;
using System.Threading;
using System.Threading.Tasks;
using System.Diagnostics;

public class Example {
    static double sqr(double a){
        return a*a;
    }
    static double abssin(double a){
        return Math.Abs(Math.Sin(a));
    }
    static double exp(double a){
        return Math.Exp(a);
    }
    public static void Main() {
        Console.Write($"x = ");
        double x = double.Parse(Console.ReadLine());
        Console.Write($"y = ");
        double y = double.Parse(Console.ReadLine());
        Task <double> t1 = Task.Factory.StartNew ((imya)=>{return sqr((double)imya);}, x);
        Task <double> t2 = Task.Factory.StartNew ((imya)=>{return abssin((double)imya);}, x);
        Task <double> t3 = Task.Factory.StartNew ((imya)=>{return exp((double)imya);}, x);
        Task <double> t4 = Task.Factory.StartNew ((imya)=>{return exp((double)imya);}, y);
        // t1.Start();
        t1.Wait();
        t2.Wait();
        t3.Wait();
        t4.Wait();
        double res1 = t1.Result;
        double res2 = t2.Result;
        double res3 = t3.Result + t4.Result;
        Console.WriteLine($"x^2 = {x}^2 = {res1}");
        Console.WriteLine($"|sin(x)| = |sin({x})| = {res2}");
        Console.WriteLine($"e^x + e^y = e^{x} + e^{y} = {res3}");
    }
}
