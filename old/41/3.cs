//3.cs
//15-02-2023
using System;
class  consleprogram{
  static void Main() {
      Console.WriteLine("Введите m");
      int m = int.Parse(Console.ReadLine());
      int s = 0;
      for (int i = -2; i <= -2+6*(m-1); i+=6) {
          s+=i;
      }
      Console.WriteLine($"s = {s}");
  }
}
