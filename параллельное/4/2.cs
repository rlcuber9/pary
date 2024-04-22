//1.cs
//09-02-2024
using System;
using System.Threading;
class  consleprogram{
    static double nod(double a, double b){
        while((a!=0)&&(b!=0)) {
            if (a>b) {
                a=a%b;
            }
            else {
                b=b%a;
            }
        }
        return a+b;
    }
    static void Main() {
        double r1 = 0;
        double r2 = 0;
        Console.WriteLine("цифера a1?");
        double a1 = double.Parse(Console.ReadLine());
        Console.WriteLine("цифера b1?");
        double b1 = double.Parse(Console.ReadLine());

        Console.WriteLine("цифера a2?");
        double a2 = double.Parse(Console.ReadLine());
        Console.WriteLine("цифера b2?");
        double b2 = double.Parse(Console.ReadLine());

        Thread thr1 = new Thread(()=>{r1=nod(a1,b1);});
        Thread thr2 = new Thread(()=>{r2=nod(a2,b2);});
        thr1.Start();
        thr2.Start();
        thr1.Join();
        thr2.Join();
        Console.WriteLine($"NOD({a1},{b1}) = {r1}");
        Console.WriteLine($"NOD({a2},{b2}) = {r2}");
    }
}
