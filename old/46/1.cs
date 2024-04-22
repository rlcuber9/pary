//1.cs
//21-03-2023
using System;
    class date{
        int d;
        int m;
        int y;
        public date(int d_, int m_, int y_){
            d = d_;
            m = m_;
            y = y_;
        }
        public date(){
            d = 1;
            m = 1;
            y = 1;
        }
        public date(date obj){
             this.d = obj.d;
             this.m = obj.m;
             this.y = obj.y;
        }
        public void print(){
            Console.WriteLine();
            Console.WriteLine($"{d:d2}.{m:d2}.{y:d4}");
        }
        public void printw(){
            int xx = y%100;
            int yy = y/100;
            if (m<3) {
                m+=12;
                xx-=1;
            }
            int z = (((m+1)*26/10)+d+xx+(xx/4)+(yy/4)-2*yy)%(7);
            Console.Write("день недели -- ");
            switch (z) {
            case 1:
                Console.WriteLine("ПН");
                break;
            case 2:
                Console.WriteLine("ВТ ");
                break;
            case 3:
                Console.WriteLine("СР ");
                break;
            case 4:
                Console.WriteLine("ЧТ ");
                break;
            case 5:
                Console.WriteLine("ПТ ");
                break;
            case 6:
                Console.WriteLine("СБ ");
                break;
            case 7:
                Console.WriteLine("ВС ");
                break;
            }
        }
    }
class  consleprogram{
    static void Main() {
        Console.WriteLine("Введите день, месяц, год");
        int d = int.Parse(Console.ReadLine());
        int m = int.Parse(Console.ReadLine());
        int y = int.Parse(Console.ReadLine());
        if (y<0 || m<1 || m>12 || d>31 || d<1) {
            Console.WriteLine("Вы -- дурак!");
        }
        date date1 = new date();
        date date2 = new date(d,m,y);
        date date3 = new date(date1);
        date date4 = new date(1,1,2000);
        Console.Write("\ndate1");
        date1.print();
        date1.printw();
        Console.Write("\ndate2");
        date2.print();
        date2.printw();
        Console.Write("\ndate3");
        date3.print();
        date3.printw();
        Console.Write("\ndate4");
        date4.print();
        date4.printw();
    }
}
