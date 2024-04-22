//2.cs
//29-02-2024
using System;
using System.Threading;
using System.Diagnostics;
class  consleprogram{
    static void Main() {
        int kP;
        int kPV;
        ThreadPool.GetMaxThreads(out kP, out kPV);
        Console.WriteLine("\nmaximum worker threads: \t{0} \nmaximum completion port threads: {1}", kP, kPV);
        for (int i = 0; i <5; i++) {
            ThreadPool.QueueUserWorkItem(Job);
            Thread.Sleep(500);
        }
    }
    static void Job(object state){
        for (int i = 1; i <= 7; i++) {
            Console.WriteLine($"i = {i} в потоке {Thread.CurrentThread.ManagedThreadId}");
            Thread.Sleep(1000);
        }
    }
}
