//1.cs
//05-04-2023
//18%4+1=3
using System;
abstract class threeDshape{
    string name;
    public threeDshape(string n){
        name = n;
    }
    public threeDshape(){
        name = "None";
    }
    public abstract double surface_area();
    public virtual void print(){
        Console.WriteLine($"название: {name}");
    }
}

class parallelepiped:threeDshape{
    double a;
    double b;
    double c;
    public parallelepiped(
        double a_,
        double b_,
        double c_
        ):base("Параллелепипед"){
            a = a_;
            b = b_;
            c = c_;
        }
    public override double surface_area(){
        return 2*(a*b+a*c+c*b);
    }
    public override void print(){
        base.print();
        Console.WriteLine($"a = {a}");
        Console.WriteLine($"b = {b}");
        Console.WriteLine($"c = {c}");
    }
}
class tetrahedron:threeDshape{
    double a;
    public tetrahedron(
        double a_
        ):base("Тетраэдр"){
            a = a_;
        }
    public override double surface_area(){
        return Math.Pow(a,2)*Math.Pow(3,1/3);
    }
    public override void print(){
        base.print();
        Console.WriteLine($"a = {a}");
    }
}
class sphere:threeDshape{
    double r;
    public sphere(
        double r_
        ):base("Сфера"){
            r = r_;
        }
    public override double surface_area(){
        return 4*Math.PI*r*r;
    }
    public override void print(){
        base.print();
        Console.WriteLine($"r = {r}");
    }
}
class  consleprogram{
    static void Main() {
        threeDshape [] shapes = new threeDshape[3];
        shapes[0] = new parallelepiped(4.1, 3.0, 5.9);
        shapes[1] = new tetrahedron(1.5);
        shapes[2] = new sphere(1);
        foreach (threeDshape i in shapes) {
            i.print();
            Console.WriteLine($"S = {i.surface_area()}");
            Console.WriteLine();
        }
    }
}
