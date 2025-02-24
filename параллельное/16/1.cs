//1.cs
//25 04 2024
using System.Threading.Tasks;
using System;
using System.Linq;

class Program {
    static void kvd() {
        // double n = 5;
        Console.Write($"ну? ");
        double n = double.Parse(Console.ReadLine());
        Console.WriteLine($"{n*n}");
    }
    static void Main() {
        Task t1 = new Task(kvd);
        Task t2 = new Task(() =>{Console.WriteLine("Анигиляторная пушка");});

        t1.Start();
        Task.WaitAll(t1);
        t2.Start();
        Task.WaitAll(t2);
    }
}

