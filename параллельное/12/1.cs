//1.cs
//3 04 2024
 
using System;
using System.Threading;
using System.Threading.Tasks;

class Program
{
    static void print(string str){
        Console.WriteLine($"{str}");
    }
    static void Main(string[] args)
    {
        Task parentTask = Task.Factory.StartNew(() =>
        {
            print("parent");

            Task t1 = new Task(()=>print($"{1}-я вложенная задача"));
            t1.Start();
            Thread.SpinWait(1000);

            Task t2 = new Task(()=>print($"{2}-я вложенная задача"));
            t2.Start();
            Thread.SpinWait(1000);

            Task t3 = new Task(()=>print($"{3}-я вложенная задача"));
            t3.Start();
            Thread.SpinWait(1000);

            Task.WaitAll(t1, t2, t3);

            print("parent end");
        });

        parentTask.Wait();
        print("Задача действительно завершена");
    }
}
