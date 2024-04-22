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
        Random rnd = new Random();
        int[] nums = new int[10000];
        for (int i = 0; i <10000; i++) {
           nums[i] = rnd.Next(0,11);
           // nums[i] = 2;
        }
        for (int i = 0; i <10000; i++) {
            Console.Write($"{nums[i]} ");
        }
        // Console.WriteLine($"\n{sum(0, 999, nums)}");
        int[] sums = new int[2];
        int[] mids = new int[2];
        mids[0] = 0;
        mids[1] = 10000/2;
        for (int i = 2; i < mids.Length; i++) {
            mids[i]= mids[i-1] + mids[0];
        }
        sw1.Start();
        Console.WriteLine($"\n{sum(0,sums.Length-1, sums)}");
        sw1.Stop();
        TimeSpan ts = sw1.Elapsed;
        Console.WriteLine($"ts = {ts.TotalMilliseconds}");
    }
}
