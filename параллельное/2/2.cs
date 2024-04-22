//main.cs
//07-02-2024
using System;
using System.Threading;
class  consleprogram{
    static void write1(){
        for (int i = 0; i < 10; i++) {
            Console.WriteLine("1");
        }
        Console.WriteLine("усё1");
        Thread.Sleep(20);
    }
    static void write2(){
        for (int i = 0; i < 10; i++) {
            Console.WriteLine("22");
        }
        Console.WriteLine("усё2");
        Thread.Sleep(100);
    }
    static void write3(){
        for (int i = 0; i < 10; i++) {
            Console.WriteLine("333");
        }
        Console.WriteLine("усё3");
        Thread.Sleep(90);
    }
    static void Main() {
        Thread thr1 = new Thread(write1);
        Thread thr2 = new Thread(write2);
        Thread thr3 = new Thread(write3);
        thr1.Start();
        thr2.Start();
        thr3.Start();
        // Thread.Sleep(90);
    }
}
