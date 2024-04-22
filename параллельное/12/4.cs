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
            Task<string[]> tp new Task<string[]>(() =>
            { 
                var mas new string[4];
                new Task(() => mas[0] = Up("1-я вложенная задача")).Start();
                new Task(() => mas[1] = Up("2-я вложенная задача")).Start();
                new Task(() => mas[2] = Up("3-я вложенная задача"), TaskCreationOptions.AttachedToParent).Start();
                new Task(() => mas[3] = Up("4-я вложенная задача"), TaskCreationOptions.AttachedToParent).Start();
                return массив;
            });

        parentTask.Wait();
        print("Задача действительно завершена");
    }
}
