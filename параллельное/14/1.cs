//1.cs
//17 04 2024

using System;
using System.Linq;
using System.Threading.Tasks;

class Program
{
    static void Main()
    {
        int[] numbers = Enumerable.Range(1, 100).Select(_ => new Random().Next(-10, 11)).ToArray();
        Console.WriteLine("массив: " + string.Join(", ", numbers));

        // LINQ запросы
        var multiplesOf3 = numbers.Where(n => n % 3 == 0);
        var negativeNumbers = numbers.Where(n => n < 0);
        var positiveEvenNumbers = numbers.Where(n => n > 0 && n % 2 == 0);
        var squaresOfPositiveNumbers = numbers.Where(n => n > 0).Select(n => n * n);

        // PLINQ запросы
        var multiplesOf5 = numbers.AsParallel().Where(n => n % 5 == 0);
        var positiveNumbers = numbers.AsParallel().Where(n => n > 0);
        var oddNegativeNumbers = numbers.AsParallel().Where(n => n < 0 && n % 2 != 0);

        // Выбор элементов больше заданного числа B с использованием различных методов PLINQ
        int B = 5;
        var query1 = numbers.AsParallel().Where(n => n > B);
        var query2 = numbers.AsParallel().WithExecutionMode(ParallelExecutionMode.ForceParallelism).Where(n => n > B);
        var query3 = numbers.AsParallel().WithDegreeOfParallelism(1).Where(n => n > B);
        var query4 = numbers.AsParallel().WithDegreeOfParallelism(2).Where(n => n > B);
        var query5 = numbers.AsParallel().WithDegreeOfParallelism(3).Where(n => n > B);
        var query6 = numbers.AsParallel().AsOrdered().Where(n => n > B);
        var query7 = numbers.AsParallel().AsUnordered().Where(n => n > B);
        var query8 = numbers.AsParallel().AsSequential().Where(n => n > B);
        var query9 = numbers.AsParallel().WithMergeOptions(ParallelMergeOptions.NotBuffered).Where(n => n > B);

        // Вывод результатов
        Console.WriteLine("LINQ запросы:");
        Console.WriteLine("Кратные 3: " + string.Join(", ", multiplesOf3));
        Console.WriteLine("Отрицательные числа: " + string.Join(", ", negativeNumbers));
        Console.WriteLine("Четные положительные числа: " + string.Join(", ", positiveEvenNumbers));
        Console.WriteLine("Квадраты положительных чисел: " + string.Join(", ", squaresOfPositiveNumbers));

        Console.WriteLine("\nPLINQ запросы:");
        Console.WriteLine("Кратные 5: " + string.Join(", ", multiplesOf5));
        Console.WriteLine("Положительные числа: " + string.Join(", ", positiveNumbers));
        Console.WriteLine("Нечетные отрицательные числа: " + string.Join(", ", oddNegativeNumbers));

        Console.WriteLine("\nВыбор элементов больше заданного числа B:");
        Console.WriteLine(string.Join(", ", query1));
        Console.WriteLine(string.Join(", ", query2));
        Console.WriteLine(string.Join(", ", query3));
        Console.WriteLine(string.Join(", ", query4));
        Console.WriteLine(string.Join(", ", query5));
        Console.WriteLine(string.Join(", ", query6));
        Console.WriteLine(string.Join(", ", query7));
        Console.WriteLine(string.Join(", ", query8));
        Console.WriteLine(string.Join(", ", query9));
        numbers.AsParallel()
            .Where(n => n > B)
            .Select(n => n).ForAll(Console.WriteLine);
    }
}

