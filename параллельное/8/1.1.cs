//1.cs
//14-03-2024
using System;
using System.Threading;
using System.Diagnostics;

public class Example {
    private static Semaphore _pool;


    public static void Main() {
        int n = 5;
        int m = 1;
        _pool = new Semaphore(initialCount: 0, maximumCount: m);

        for(int i = 1; i <= n; i++) {
            Thread t = new Thread(new ParameterizedThreadStart(Worker));
            t.Start(i);
        }

        Thread.Sleep(500);
        _pool.Release(releaseCount: m);

    }

    private static void Worker(object num) {
        _pool.WaitOne();


        Console.WriteLine("предмет {0} поднят.", num);
        
        Thread.Sleep(1000);

        Console.WriteLine("предмет {0} поклад", num);
        _pool.Release();
    }
}
