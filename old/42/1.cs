//1.cs
//21-02-2023
using System;
class  consleprogram{
  static void Main() {
     int n, k=0, s=0, max=-31, min=31, imin=-1, p;
     Console.WriteLine("Введите N");
     n = int.Parse(Console.ReadLine());
     int[] x = new int[n];
     Random rand = new Random();
     for (int i = 0; i < n; i++) {
         x[i] = rand.Next(-30,30);
     }
     Console.WriteLine("Исходный массив:");
     foreach (int i in x) {
         Console.Write($"{i} ");
     }
     Console.WriteLine("\n\nПункт 1");
     foreach (int i in x) {
         if (i>0) {
             k++;
         }
     }
     for (int i = 0; i < 5; i++) {
         s += x[i];
     }
     Console.WriteLine($"количество положительныех элементов = {k} ");
     Console.WriteLine($"сумма первых пяти элементов = {s} ");
     Console.WriteLine("\nПункт 2");
     foreach (int i in x) {
         if (i>max) {
             max = i;
         }
     }
     Console.WriteLine($"максимальный элемент = {max} ");
     Console.WriteLine($"его номер = {Array.IndexOf(x, max)} ");
     Console.WriteLine("\nПункт 3");
     for (int i = 0; i < n; i++) {
         if ((x[i]<0) && (x[i]%2!=0)) {
             x[i] *= 2;
         }
     }
     Console.WriteLine("полученный массив:");
     foreach (int i in x) {
         Console.Write($"{i} ");
     }
     Console.WriteLine("\n\nПункт 4");
     s = 0;
     k = 0;
     for (int i = 0; i < n; i++) {
         if (x[i] % 7 == 0) {
             s+=x[i];
         }
         if (x[i] % 2 != 0) {
             k++;
         }
         if ((x[i]%2==0) && (x[i] < min) && (i%2 == 0)) {
             min = x[i];
             imin = i;
         }
     }
     Console.WriteLine($"сумма элементов кратных семи = {s}");
     Console.WriteLine($"количество неченых элементов = {k}");
     Console.WriteLine($"минимум из элементов четных и на четных местаx = {min}");
     Console.WriteLine($"его индекс = {imin}");
     Console.WriteLine("\nПункт 5");
     Array.Sort(x);
     p = x[0] * x[1];
     Array.Reverse(x);
     Console.WriteLine("упорядоченный массив:");
     foreach (int i in x) {
         Console.Write($"{i} ");
     }
     Console.WriteLine($"\nпроизведение последних двух = {p}");
  }
}
