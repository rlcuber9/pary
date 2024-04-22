//1.cs
//3 04 2024
 
using System;
using System.Threading;
using System.Threading.Tasks;

class Program
{
    static string Up(string str){
        return str.ToUpper();
    }
    static void print(string str){
        Console.WriteLine($"{str}");
    }
    static void Main(string[] args)
    {
        Task parentTask = Task.Factory.StartNew(() =>
        {
            print("parent");

            Task[] childTasks = new Task[3];

            for (int i = 0; i < childTasks.Length; i++){
                int index = i;
                childTasks[i] = Task.Factory.StartNew(() =>{
                    print(Up($"{index + 1}-я дочерняя задача "));
                    Thread.SpinWait(500);
                }, TaskCreationOptions.AttachedToParent);
            }

            Task.WaitAll(childTasks);

            print("parent end");
        });

        parentTask.Wait();
        print("Задача действительно завершена");
    }
}
