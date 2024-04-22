//1.cs
//29-02-2024
using System;
using System.Threading;
using System.Diagnostics;
class  consleprogram{
    static void Main() {
        string s;
        for (int i=0; i<7; i++){
            ThreadPool.QueueUserWorkItem(
                (object o)=> { 
                    Thread.CurrentThread.Name = $"Поток # {i}";
                    if (Thread.CurrentThread.IsThreadPoolThread) {
                        s="поток в пуле";
                    }
                    else{
                        s="поток НЕ в пуле";
                    }
                    Console.WriteLine($"{Thread.CurrentThread.Name}, Id: {Thread.CurrentThread.ManagedThreadId}, i^2={i*i} {s}");
                }
            );
        }
        Thread.Sleep(100);
    }
}
