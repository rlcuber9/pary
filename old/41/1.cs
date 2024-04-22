//1.cs
//15-02-2023
using System;
class  consleprogram{
  static void Main() {
      Console.WriteLine("Введите K");
      int k = int.Parse(Console.ReadLine());
      int kol = 0;
      for (int i = k+1; i < 20; i++) {
          kol++;
      }
      Console.WriteLine($"kol = {kol}");
  }
}
