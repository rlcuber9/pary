//1.cs
//3 04 2024
//
using System;
using System.Diagnostics;
using System.Threading.Tasks;

class Program
{
    static void Main(string[] args)
    {
        int n = 100;
        int[] array = GenerateRandomArray(n);

        CalculateSumSequential(array);
        CalculateSumParallel(array);
    }

    static int[] GenerateRandomArray(int n)
    {
        Random rand = new Random();
        int[] array = new int[n];
        for (int i = 0; i < n; i++)
        {
            array[i] = rand.Next(100);
        }
        return array;
    }

    static void CalculateSumSequential(int[] array)
    {
        Stopwatch sw = new Stopwatch();
        sw.Start();

        int sum = 0;
        for (int i = 0; i < array.Length; i++)
        {
            sum += array[i];
            Console.WriteLine($"Элемент {i}: {array[i]}");
        }

        sw.Stop();
        TimeSpan ts = sw.Elapsed;
        Console.WriteLine($"Сумма элементов массива (обычный цикл): {sum}");
        Console.WriteLine($"Время выполнения обычного цикла: {ts.TotalMilliseconds} мс");
    }

    static void CalculateSumParallel(int[] array)
    {
        Stopwatch sw = new Stopwatch();
        sw.Start();

        long sum = 0;
        Parallel.ForEach(array, (item, state, index) =>
        {
            if (index == 50) state.Break();
            sum += item;
            Console.WriteLine($"Элемент {index}: {item}");
        });

        sw.Stop();
        TimeSpan ts = sw.Elapsed;
        Console.WriteLine($"Сумма элементов массива (параллельный цикл): {sum}");
        Console.WriteLine($"Время выполнения параллельного цикла: {ts.TotalMilliseconds} мс");
    }
}
 
