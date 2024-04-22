using System;
using System.Threading;

class Program
{
    static Semaphore stolSemaphore;
    static Semaphore kabinkaSemaphore;

    static void Main(string[] args)
    {
        int n = 5;
        int k = 1;
        int m = 2;

        stolSemaphore = new Semaphore(k, k);
        kabinkaSemaphore = new Semaphore(m, m);

        for (int i = 1; i <= n; i++)
        {
            Thread t = new Thread(new ParameterizedThreadStart(Izbiratel));
            t.Start(i);
        }

        Console.ReadLine();
    }

    static void Izbiratel(object obj)
    {
        int izbiratelNumber = (int)obj;
        stolSemaphore.WaitOne();
        Console.WriteLine($"Избиратель #{izbiratelNumber} попросил бюллетеню.");
        Thread.Sleep(1000);
        stolSemaphore.Release();
        Console.WriteLine($"Избиратель #{izbiratelNumber} получил бюллетеню и идет к кабинке.");
        Thread.Sleep(1000);
        kabinkaSemaphore.WaitOne();
        Console.WriteLine($"Избиратель #{izbiratelNumber} зашел в кабинку, голосует.");
        Thread.Sleep(2000);
        Console.WriteLine($"Избиратель #{izbiratelNumber} вышел из кабинки.");
        kabinkaSemaphore.Release();
    }
}
