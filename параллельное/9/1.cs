//1.cs
//20-03-2024
using System;
using System.Threading;
using System.Threading.Tasks;
using System.Diagnostics;

public class Example {
    static void hello() {
        Console.WriteLine("Анигиляторная пушка");
    }
    public static void Main() {
        // обычны
        Task t1 = new Task(hello);
        // делегат экшин
        Task t2 = new Task(new Action(hello));
        // делегат аноним делегат
        Task t3 = new Task(delegate {Console.WriteLine("Анигиляторная пушка 2");});
        // лямбда 1
        Task t4 = new Task(() =>hello());
        // лямбда 2
        Task t5 = new Task(() =>{Console.WriteLine("Анигиляторная пушка 4");});

        // t1.Start();
        // t2.Start();
        // t3.Start();
        // t4.Start();
        // t5.Start();

        // t1.Start();
        // t2.Start();
        // t3.Start();
        // t4.Start();
        // t5.Start();
        // Task.WaitAll(t1, t2, t3, t4, t5);

        t1.Start();
        Task.WaitAll(t1);
        t2.Start();
        Task.WaitAll(t2);
        t3.Start();
        Task.WaitAll(t3);
        t4.Start();
        Task.WaitAll(t4);
        t5.Start();

        Console.WriteLine("главный метод завершён");
    }
}
