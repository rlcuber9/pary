//main.cs
//07-02-2024
using System;
using System.Threading;
class  consleprogram{
    static void print(){
        for (int i = 0; i < 4; i++) {
            Console.WriteLine($"Второй:{i+1}");
            Thread.Sleep(500);
        }
    }
    static void Main() {
        Thread thr2 = new Thread(print);
        thr2.Start();
        for (int i = 0; i < 4; i++) {
            Console.WriteLine($"Главный поток:{i+1}");
            Thread.Sleep(1000);
        }
    }
}
