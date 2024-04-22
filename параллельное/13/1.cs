//1.cs
//11 04 2024
 
using System;
using System.Threading;
using System.Threading.Tasks;

class Program
{
    static void plus(){
        Console.WriteLine($"Сумма: ф+и");
    }
    static void minus(){
        Console.WriteLine($"Разность: ф-и");
    }
    static void mult(){
        Console.WriteLine($"Произведение: ф*и");
    }
    static void div(){
        Console.WriteLine($"Частное: ф/и");
    }
    static void Main(string[] args) {
        Parallel.Invoke(
            () => minus(),
            () => plus(),
            () => mult(),
            () => div()
        );
    }
}
