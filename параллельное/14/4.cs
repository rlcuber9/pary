//1.cs
//3 04 2024
 
using System;
using System.Diagnostics;
using System.Threading.Tasks;

class Program {
    static void Main(string[] args) {
        int A = 5;
        int B = 15;

        long resultSequential = SequentialProduct(A, B);
        Console.WriteLine($"Произведение (последовательный цикл): {resultSequential}");

        long resultParallel = ParallelProduct(A, B);
        Console.WriteLine($"Произведение (параллельный цикл): {resultParallel}");
    }

    static long SequentialProduct(int A, int B) {
        long product = 1;
        for (int i = A; i <= B; i++) {
            product *= i;
        }
        return product;
    }

    static long ParallelProduct(int A, int B) {
        long product = 1;
        Parallel.For(A, B + 1, () => 1, (i, loopState, localProduct) => {
            return localProduct * i;
        },
        localProduct => {
            lock (typeof(Program))
            {
                product *= localProduct;
            }
        });
        return product;
    }
}
