//1.cs
//09-02-2024
using System;
using System.Threading;
class  consleprogram{
    static double factr(double x){
        if ((x==1)||(x==0)) {
            return 1;
        }
        return factr(x-1)*x;
    }
    static void Main() {
        double r1 = 0;
        double r2 = 0;
        double r3 = 0;
        Thread thr1 = new Thread(()=>(r1=factr(5)));
        Thread thr2 = new Thread(()=>(r2=factr(7)));
        Thread thr3 = new Thread(()=>(r3=factr(4)));
        thr1.Start();
        thr2.Start();
        thr3.Start();

        thr1.Join();
        thr2.Join();
        thr3.Join();
        Console.WriteLine($"r1={r1}");
        Console.WriteLine($"r2={r2}");
        Console.WriteLine($"r3={r3}");
    }
}
