//1.cs
//09-02-2024
using System;
using System.Threading;
class  consleprogram{
    static void Print(){
        int x=0;
        for (int i = 0; i < 10; i++) {
            x++;
            Console.WriteLine($"{Thread.CurrentThread.Name} x={x}");
        }
        Thread.Sleep(500);
    }
    static void Main() {
        Thread[] t = new Thread[5];
        for (int i = 0; i < 5; i++) {
            t[i] = new Thread(Print);
            t[i].Name=$"поток {i}";
        }
        for (int i = 0; i < 5; i++) {
            t[i].Start();
        }
    }
}
