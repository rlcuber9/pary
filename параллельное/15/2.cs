//1.cs
//11 04 2024
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Threading.Tasks;
using System.Linq;

class Avto{
    public string gos_znak;
    public string mark;
    public string model;
    public int year;
    public int doors;
    public double rashod;
    public Avto(
        string gos_znak_,
        string mark_,
        string model_,
        int year_,
        int doors_,
        double rashod_
    ){
        gos_znak = gos_znak_;
        mark     = mark_;
        model    = model_;
        year     = year_;
        doors    = doors_;
        rashod   = rashod_;
    } 
    public void print(){
        Console.WriteLine($"{gos_znak}\t{mark}\t{model}\t{year}\t{doors}\t{rashod}");
    }
} 
class Program {
    static void Main(string[] args) {
        List <Avto> avtos = new List <Avto>{
            new Avto("O535OP", "Mitsubishi", "Lancer", 2005, 5, 10),
            new Avto("B381AH", "Toyota", "Corolla", 2008, 4, 8),
            new Avto("X777KO", "Honda", "Civic", 2010, 4, 7),
            new Avto("M246AB", "Ford", "Focus", 2006, 5, 9),
            new Avto("E999MM", "Chevrolet", "Cruze", 2012, 4, 8),
            new Avto("T123TT", "Nissan", "Sentra", 2009, 4, 8),
            new Avto("P555AH", "Volkswagen", "Jetta", 2011, 4, 7),
            new Avto("K888HC", "Hyundai", "Elantra", 2007, 4, 8),
            new Avto("O642OM", "Kia", "Rio", 2013, 4, 7),
            new Avto("A111AA", "Subaru", "Impreza", 2004, 5, 10)
        };
        var query1 = avtos.AsParallel().Where(n => n.year < 2012);
        var query2 = avtos.AsParallel().Where(n => n.mark == "Mitsubishi");
        var query3 = avtos.AsParallel().Where(n => n.doors == 4);
        var query4 = avtos.AsParallel().Where(n => n.year < 2019);
        var query5 = avtos.AsParallel().Where(n => (7 <= n.rashod) && (n.rashod<= 8));

        Console.WriteLine($"1");
        foreach(var n in query1){
            Console.WriteLine($"{n.gos_znak}\t{n.mark}\t{n.model}\t{n.year}\t{n.doors}\t{n.rashod}");
        }
        Console.WriteLine($"2");
        foreach(var n in query2){
            Console.WriteLine($"{n.gos_znak}\t{n.mark}\t{n.model}\t{n.year}\t{n.doors}\t{n.rashod}");
        }
        Console.WriteLine($"3");
        foreach(var n in query3){
            Console.WriteLine($"{n.gos_znak}\t{n.mark}\t{n.model}\t{n.year}\t{n.doors}\t{n.rashod}");
        }
        Console.WriteLine($"4");
        foreach(var n in query4){
            Console.WriteLine($"{n.gos_znak}\t{n.mark}\t{n.model}\t{n.year}\t{n.doors}\t{n.rashod}");
        }
        Console.WriteLine($"5");
        foreach(var n in query5){
            Console.WriteLine($"{n.gos_znak}\t{n.mark}\t{n.model}\t{n.year}\t{n.doors}\t{n.rashod}");
        }
        // query2.print();
        // query3.print();
        // query4.print();
        // query5.print();
    }
}
