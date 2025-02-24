//1.cs
//1 05 2024
using System;
using System.Linq;

class Program
{
    static void Main()
    {
        // Генерация массива случайных чисел в диапазоне [-10; 10]
        Random random = new Random();
        int[] numbers = Enumerable.Range(1, 20).Select(i => random.Next(-10, 11)).ToArray();
        Console.WriteLine("Сами числа");
        foreach (var num in numbers)
        {
            Console.Write($"{num}, ");
        }
        Console.WriteLine();

        // Положительные элементы, кратные 4
        var positiveMultiplesOf4 = numbers.AsParallel()
                                           .Where(n => n > 0 && n % 4 == 0)
                                           .ToArray();

        Console.WriteLine("Положительные элементы, кратные 4:");
        foreach (var num in positiveMultiplesOf4)
        {
            Console.Write($"{num}, ");
        }
        Console.WriteLine();

        // Определение заданного числа X
        int X = 5;

        // Отрицательные элементы, большие X
        var negativeGreaterThanX = numbers.AsParallel()
                                          .Where(n => n < 0 && n > X)
                                          .ToArray();

        Console.WriteLine("\nОтрицательные элементы, большие " + X + ":");
        foreach (var num in negativeGreaterThanX)
        {
            Console.Write($"{num}, ");
        }
        Console.WriteLine();
    }
}
