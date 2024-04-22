//1.cs
//09-02-2024
using System;
using System.Threading;
class  consleprogram{
    static void A(){
        // for (int i = 0; i < 10; i++) {
        for (int i = 0; i < 1000; i++) {
            Console.Write("A");
        }
    }
    static void B(){
        // for (int i = 0; i < 10; i++) {
        for (int i = 0; i < 1000; i++) {
            Console.Write("B");
        }
    }
    static void C(){
        // for (int i = 0; i < 10; i++) {
        for (int i = 0; i < 1000; i++) {
            Console.Write("C");
        }
    }
    static void D(){
        // for (int i = 0; i < 10; i++) {
        for (int i = 0; i < 1000; i++) {
            Console.Write("D");
        }
    }
    static void Main() {
        Thread thr1 = new Thread(A);
        Thread thr2 = new Thread(B);
        Thread thr3 = new Thread(C);
        Thread thr4 = new Thread(D);
        thr1.Start();
        thr1.Join();
        thr2.Start();
        thr3.Start();
        thr2.Join();
        thr3.Join();
        thr4.Start();
        thr4.Join();
    }
}
