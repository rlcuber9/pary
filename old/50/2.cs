//2.cs
//19-04-2023
using System;
class Program
{    static void Main(string[] args)
     {   try
         { int x = 5;
           int y = x / 0;
           Console.WriteLine($"Результат: {y}");
          }
          catch
          {    Console.WriteLine("Возникло исключение!");   }
          finally
          {    Console.WriteLine("Блок finally");     }
          Console.WriteLine("Конец программы");
     }
}
