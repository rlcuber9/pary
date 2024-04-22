//4.cs
//09-02-2024
using System;
using System.Threading;
class  consleprogram{
    static void first(){
        Console.WriteLine("Имя?");
        string name = Console.ReadLine();
        Console.WriteLine($"Здарова {name}");
    }
    static void Main() {
        Thread thr1 = new Thread(first);

        second thrclass = new second();
        Thread thr2 = new Thread(thrclass.fun_second);

        Thread thr3 = new Thread(()=>{
            Console.WriteLine($"Текст?");
            string text = Console.ReadLine();
            Console.WriteLine($"{text}");
        });
        thr1.Start();
        thr1.Join();

        thr2.Start();
        thr2.Join();

        thr3.Start();
    }
}
class second{
    public void fun_second(){
        Console.WriteLine("цифера?");
        double n = double.Parse(Console.ReadLine());
        Console.WriteLine($"квадрат циферы {n*n}");
    }
}
