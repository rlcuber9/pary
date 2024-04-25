//1.cs
//25 04 2024
using System.Threading.Tasks;
using System;
using System.Linq;

class Program
{
    static void Main()
    {
        int A = 1;
        int B = 100;

        var query1 = Enumerable.Range(A, B - A + 1).AsParallel().Where(n => n % 11 == 0);
        var query2 = Enumerable.Range(A, B - A + 1).AsParallel().WithExecutionMode(ParallelExecutionMode.ForceParallelism).Where(n => n % 11 == 0);
        var query3 = Enumerable.Range(A, B - A + 1).AsParallel().WithDegreeOfParallelism(1).Where(n => n % 11 == 0);
        var query4 = Enumerable.Range(A, B - A + 1).AsParallel().WithDegreeOfParallelism(2).Where(n => n % 11 == 0);
        var query5 = Enumerable.Range(A, B - A + 1).AsParallel().AsOrdered().Where(n => n % 11 == 0);

        Console.WriteLine("Числа, кратные 11:");
        Console.WriteLine("Query 1 (AsParallel): " + string.Join(", ", query1));
        Console.WriteLine("Query 2 (WithExecutionMode): " + string.Join(", ", query2));
        Console.WriteLine("Query 3 (WithDegreeOfParallelism = 1): " + string.Join(", ", query3));
        Console.WriteLine("Query 4 (WithDegreeOfParallelism = 2): " + string.Join(", ", query4));
        Console.WriteLine("Query 5 (AsOrdered): " + string.Join(", ", query5));
    }
}

