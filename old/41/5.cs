//5.cs
//15-02-2023
using System;
class  consleprogram{
  static void Main() {    
      int s = 0;
      int a;
      int i = 0;
      do {
          Console.WriteLine($"Введите число намбэ {++i}");
          a = int.Parse(Console.ReadLine());
          s += a;
      } while (a%5 != 0);
      Console.WriteLine($"сумма {i}х чисел = {s}");
 }
}
