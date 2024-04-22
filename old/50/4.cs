//4.cs
//19-04-2023
using System;
class  consleprogram{
    static void Main(string[] args)
{   Console.WriteLine("Введите число");
    int x;
    string input = Console.ReadLine();
 if (Int32.TryParse(input, out x))
 {  x *= x;
    Console.WriteLine("Квадрат числа: " + x);
  }
 else   {  Console.WriteLine("Некорректный ввод");  }
}
}
