//main.cs
//07-02-2024
using System;
using System.Threading;
class  consleprogram{
    static void my(){
        Console.Write("Мой");
    }
    static void first(){
        Console.Write(" первый");
    }
    static void example(){
        Console.WriteLine(" пример");
    }
    static void Main() {
        thr1.Start();
        thr2.Start();
        thr3.Start();
        Console.WriteLine("Главный поток молчит");
        Console.WriteLine("Завершение главного потока");
        Thread.ZZ 
    }
}
