//1.cs
//21-02-2024
using System;
using System.Threading;
using System.Diagnostics;
class  consleprogram{
    static int sum(int a, int b,int[] arr){
        int s = 0;
        for (int i = a; i <= b; i++) {
            s+=arr[i];
        }
        return s;
    }
    static void Main() {
        Stopwatch sw1 = new Stopwatch();
        Stopwatch sw2 = new Stopwatch();

        Random rnd = new Random();
        int[] nums = new int[100000];
        for (int i = 0; i <100000; i++) {
           nums[i] = rnd.Next(0,11);
           // nums[i] = 2;
        }
        for (int i = 0; i <100000; i++) {
            Console.Write($"{nums[i]} ");
        }
        // Console.WriteLine($"\n{sum(0, 999, nums)}");
        int[] sums = new int[2];
        int[] mids = new int[3];
        mids[0] = 0;
        mids[1] = 10000/2;
        for (int i = 2; i < mids.Length; i++) {
            mids[i]= mids[i-1] + mids[1];
        }
        Thread thr1 = new Thread(()=>{
            sw1.Start();
            sums[0]=sum(mids[0], mids[1], nums);
            sw1.Stop();
        });
        Thread thr2 = new Thread(()=>{
            sw2.Start();
            sums[1]=sum(mids[1]+1, mids[2]-1, nums);
            sw2.Stop();
        });
        thr1.Start();
        thr2.Start();
        thr1.Join();
        thr2.Join();
        // Console.WriteLine($"\n{mids[0]}");
        // Console.WriteLine($"\n{mids[1]}");
        // Console.WriteLine($"\n{mids[2]}");
        // Console.WriteLine($"\n{sums[0]}");
        // Console.WriteLine($"\n{sums[1]}");
        Console.WriteLine($"\n{sum(0,sums.Length-1, sums)}");
        TimeSpan ts = sw1.Elapsed;
        Console.WriteLine($"ts = {ts.TotalMilliseconds}");
        ts = sw2.Elapsed;
        Console.WriteLine($"ts = {ts.TotalMilliseconds}");
    }
}
