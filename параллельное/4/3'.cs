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
    static double nok(double a, double b){
        return (a*b)/nod(a,b);
    }
    // static void A(){
    //     Console.WriteLine("цифера a1?");
    //     double a = double.Parse(Console.ReadLine());
    //     Console.WriteLine("цифера b1?");
    //     double b = double.Parse(Console.ReadLine());
    //     Console.WriteLine($"NOK({a},{b}) = {nok(a,b)}");
    // }
    // static void B(){
    //     Console.WriteLine("цифера a2?");
    //     double a = double.Parse(Console.ReadLine());
    //     Console.WriteLine("цифера b2?");
    //     double b = double.Parse(Console.ReadLine());
    //     Console.WriteLine($"NOK({a},{b}) = {nok(a,b)}");
    // }
    static void Main() {
        double r1 = 0;
        double r2 = 0;
        double r3 = 0;

        double[,] masab = new double[3,2];
        double[] r = new double[3];
        Thread[] t = new Thread[3];


        for (int i = 0; i < 3; i++) {
            r[i]=0;
        }

        for (int i = 0; i < 3; i++) {
            Console.WriteLine("цифера a?");
            masab[i,0] = double.Parse(Console.ReadLine());
            Console.WriteLine("цифера b?");
            masab[i,1] = double.Parse(Console.ReadLine());
        }

        for (int i = 0; i < 3; i++) {
            t[i] = new Thread(()=>{r[i]=nok(masab[i,0],masab[i,1]);});
            t[i].Name=$"поток {i}";
            t[i].Start();
        }

        for (int i = 0; i < 3; i++) {
            t[i].Join();
        }

        // Console.WriteLine("цифера a1?");
        // double a1 = double.Parse(Console.ReadLine());
        // Console.WriteLine("цифера b1?");
        // double b1 = double.Parse(Console.ReadLine());
        // Console.WriteLine($"NOK({a1},{b1}) = {nok(a1,b1)}");
        //
        // Console.WriteLine("цифера a2?");
        // double a2 = double.Parse(Console.ReadLine());
        // Console.WriteLine("цифера b2?");
        // double b2 = double.Parse(Console.ReadLine());
        // Console.WriteLine($"NOK({a2},{b2}) = {nok(a2,b2)}");
        //
        // Console.WriteLine("цифера a3?");
        // double a3 = double.Parse(Console.ReadLine());
        // Console.WriteLine("цифера b3?");
        // double b3 = double.Parse(Console.ReadLine());
        // Console.WriteLine($"NOK({a3},{b3}) = {nok(a3,b3)}");

        // Thread thr1 = new Thread(()=>(r1=nok(a1,b1)));
        // Thread thr2 = new Thread(()=>(r2=nok(a2,b2)));
        // Thread thr3 = new Thread(()=>(r3=nok(a3,b3)));

        // thr1.Start();
        // thr2.Start();
        // thr3.Start();
        //
        // thr1.Join();
        // thr2.Join();
        // thr3.Join();

        r1=r[0];
        r2=r[1];
        r3=r[2];
        Console.WriteLine($"r1 = {r1}");
        Console.WriteLine($"r2 = {r2}");
        Console.WriteLine($"r3 = {r3}");
    }
}
