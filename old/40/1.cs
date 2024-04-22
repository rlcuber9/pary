//1.cs
//09-02-2023
using System;
class  consleprogram{
  static void Main() {
      int n;
      float p = 1;
      // n = 10;
      // Random rand = new Random();
      // for (int i = 0; i < n; i++) {
      //     nums[i] = rand.Next(-30,30);
      // }
      // Console.WriteLine();
      // foreach (float i in nums) {
      //     Console.Write($"{i} ");
      // }
      // Console.WriteLine();

      Console.WriteLine("Скока нада цифер?");
      n = int.Parse(Console.ReadLine());
      float[] nums = new float[n];
      for (int i = 0; i < n; i++) {
          Console.WriteLine($"цифера намбе {i+1}");
          nums[i] = float.Parse(Console.ReadLine());
      }
      foreach (float i in nums) {
          if (i%5 == 0) {
              p *= i;
          }
      }
      Console.WriteLine($"Произведение цифер кратных пяти = {p}");
  }
}
