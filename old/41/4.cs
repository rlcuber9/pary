//4.cs
//15-02-2023
using System;
class  consleprogram{
  static void Main() {
      Console.WriteLine("Введите k");
      int k = int.Parse(Console.ReadLine());
      int a = 2;
      int p = 1;
      while (a<k) {
          p*=a;
          a+=3;
      }
      Console.WriteLine($"сумма ={p}");
  }
}
