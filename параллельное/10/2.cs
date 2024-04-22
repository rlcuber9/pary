//1.cs
//22 03 2024
using System;
using System.Threading;
using System.Threading.Tasks;
using System.Diagnostics;

public class Example {
    static string up(string str) {
        return str.ToUpper();
    }
    public static void Main() {
        string strinput = Console.ReadLine();
        Task <string> t1 =new Task <string> (mes=>up((string)mes), strinput);
        t1.Start();
        Console.WriteLine($"сообщение: {t1.Result}");
        Task <string> t2 =t1.ContinueWith(task=> $"продолжение еще раз: {t1.Result}");
        Console.WriteLine(t2.Result);
    }
}
