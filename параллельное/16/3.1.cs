//1.cs
//1 05 2024
using System;
using System.Threading;

class ParallelApp
{
    private int num1;
    private int num2;

    public ParallelApp(int num1, int num2)
    {
        this.num1 = num1;
        this.num2 = num2;
    }

    public void Process()
    {
        if (num1 == num2)
        {
            Console.WriteLine("Числа равны");
        }

        num1 += 2;
        Thread.Sleep(200); // Приостановка потока на 200 мс
        num2 += 2;

        Console.WriteLine($"Значение первой переменной: {num1}, Значение второй переменной: {num2}");
    }
}

class Program
{
    static void Main()
    {
        ParallelApp app = new ParallelApp(0, 0);

        for (int i = 0; i < 10; i++)
        {
            Thread thread = new Thread(new ThreadStart(app.Process));
            thread.Start();
            Thread.Sleep(100); // Интервал между запусками потоков
        }
    }
}
