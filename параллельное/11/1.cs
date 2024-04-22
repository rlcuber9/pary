//1.cs
//22 03 2024
using System;
using System.Threading;
using System.Threading.Tasks;
using System.Diagnostics;

public class Example {
    static float summa(float a, float b) {
        return a+b;
    }
    static float avg(float a, float b, float c) {
        return (a+b+c)/3;
    }
    static float sumsqr(float a, float b){
        return a*a+b*b;
    }
    public static void Main() {
        Console.Write($"a = ");
        float a = float.Parse(Console.ReadLine());
        Console.Write($"b = ");
        float b = float.Parse(Console.ReadLine());
        Console.Write($"c = ");
        float c = float.Parse(Console.ReadLine());
        Task <float> t1 = new Task <float> (()=>summa(a, b));
        Task <float> t2 = new Task <float> (()=>avg(a, b, c));
        Task <float> t3 = new Task <float> (()=>sumsqr(a, b));
        t1.Start();
        t2.Start();
        t3.Start();
        float res1 = t1.Result;
        float res2 = t2.Result;
        float res3 = t2.Result;
        Console.WriteLine($"a + b = {a} + {b} = {t1.Result}");
        Console.WriteLine($"(a + b + c)/3 = ({a} + {b} + {c})/3= {t2.Result}");
        Console.WriteLine($"a^2 + b^2 = {a}^2 + {b}^2 = {t3.Result}");
    }
}
