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
        // фабрика
        TaskFactory tf = new TaskFactory();
        Task t1 = tf.StartNew(hello);
        Task t2 = Task.Factory.StartNew(hello);
        Task t3 = Task.Factory.StartNew(()=>hello());
        Task t4 = Task.Factory.StartNew(() => {Console.WriteLine("The annihilator cannon");});

        Console.WriteLine(Task.WaitAny(t1, t2, t3, t4));
        // t1.Start();
        // Console.WriteLine(Task.WaitAny(t1));
        // t2.Start();
        // Console.WriteLine(Task.WaitAny(t2));
        // t3.Start();
        // Console.WriteLine(Task.WaitAny(t3));
        // Console.WriteLine(Task.WaitAny(t4));

        Console.WriteLine("главный метод завершён");
    }
}
