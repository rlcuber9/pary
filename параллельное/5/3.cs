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
        Stopwatch sw3 = new Stopwatch();
        Stopwatch sw4 = new Stopwatch();

        Random rnd = new Random();
        int[] nums = new int[100000];
        for (int i = 0; i <100000; i++) {
           nums[i] = rnd.Next(0,11);
           // nums[i] = 3;
        }
        for (int i = 0; i <100000; i++) {
            Console.Write($"{nums[i]} ");
        }
        // Console.WriteLine($"\n{sum(0, 999, nums)}");
        int[] sums = new int[4];
        int[] mids = new int[5];
        mids[0] = 0;
        mids[1] = 100000/4;
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
            sums[1]=sum(mids[1]+1, mids[2], nums);
            sw2.Stop();
        });
        Thread thr3 = new Thread(()=>{
            sw3.Start();
            sums[2]=sum(mids[2]+1, mids[3], nums);
            sw3.Stop();
        });
        Thread thr4 = new Thread(()=>{
            sw4.Start();
            sums[3]=sum(mids[3]+1, mids[4]-1, nums);
            sw4.Stop();
        });
        thr1.Start();
        thr2.Start();
        thr3.Start();
        thr4.Start();

        thr1.Join();
        thr2.Join();
        thr3.Join();
        thr4.Join();
        Console.WriteLine($"\n{sum(0,sums.Length-1, sums)}");
        TimeSpan ts = sw1.Elapsed;
        Console.WriteLine($"ts = {ts.TotalMilliseconds}");
        ts = sw2.Elapsed;
        Console.WriteLine($"ts = {ts.TotalMilliseconds}");
        ts = sw3.Elapsed;
        Console.WriteLine($"ts = {ts.TotalMilliseconds}");
        ts = sw4.Elapsed;
        Console.WriteLine($"ts = {ts.TotalMilliseconds}");
    }
}
