//1.cs
//11 04 2024
using System;
using System.Diagnostics;
using System.Threading.Tasks;

class Program
{
    static void Main(string[] args)
    {
        int n = 100;
        CalculateSquaresSequential(n);
        CalculateSquaresParallel(n);
    }

    static void CalculateSquaresSequential(int n)
    {
        Stopwatch sw = new Stopwatch();
        sw.Start();

        for (int i = 1; i <= n; i++)
        {
            int square = i * i;
            Console.WriteLine(square);
        }

        sw.Stop();
        TimeSpan ts = sw.Elapsed;
        Console.WriteLine($"Время выполнения обычного цикла: {ts.TotalMilliseconds} мс");
    }
    static void CalculateSquaresParallel(int n)
    {
        Stopwatch sw = new Stopwatch();
        sw.Start();

        Parallel.For(1, n + 1, (i, state) =>
        {
            if (i == n/2) state.Break();
            int square = i * i;
            Console.WriteLine(square);
        });

        sw.Stop();
        TimeSpan ts = sw.Elapsed;
        Console.WriteLine($"Время выполнения параллельного цикла: {ts.TotalMilliseconds} мс");
    }
}
