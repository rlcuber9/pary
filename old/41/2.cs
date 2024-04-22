//2.cs
//15-02-2023
using System;
class  consleprogram{
  static void Main() {
      Console.WriteLine("Введите a");
      int a = int.Parse(Console.ReadLine());
      int k = 0;
      for (int i = 0; i < 5; i++) {
          k+=a+i;
      }
      Console.WriteLine($"k = {k}");
  }
}
