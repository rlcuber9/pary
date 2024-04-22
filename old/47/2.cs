//2.cs
//28-03-2023
using System;
class  consleprogram{
    class publication{
        public string title_name;
        public int year_publicaton;
    	public publication(string title_name_, int year_publicaton_){
            title_name = title_name_;
            year_publicaton = year_publicaton_;
        }
        public int age(){
            return 2023-year_publicaton;
        }
        public virtual void print(){
            Console.WriteLine($"title_name = {title_name}");
            Console.WriteLine($"year_publicaton = {year_publicaton}");
        }
    }
    class magazin:publication{
        public string period;
        public int kolnum;
        public magazin(string title_name_, int year_publicaton_, string period_, int kolnum_):base(title_name_, year_publicaton_){
            period = period_;
            kolnum = kolnum_;
        }
        public override void print(){
            base.print();
            Console.WriteLine($"period = {period}");
            Console.WriteLine($"kolnum = {kolnum}");
        }
    }
    class book:publication{
        public string name_author;
        public string genre;
        public int pages;
        public book(string title_name_, int year_publicaton_, string name_author_, string genre_, int pages_):base(title_name_, year_publicaton_){
            name_author = name_author_;
            genre = genre_;
            pages = pages_;
        }
        public override void print(){
            base.print();
            Console.WriteLine($"name_author = {name_author}");
            Console.WriteLine($"genre = {genre}");
            Console.WriteLine($"pages = {pages}");
        }
    }
    class educational_book:book{
        public string orientation;
        public educational_book(string title_name_, int year_publicaton_, string name_author_, string genre_, int pages_, string orientation_):base(title_name_, year_publicaton_, name_author_, genre_, pages_){
            orientation = orientation_;
        }
        public override void print(){
            base.print();
            Console.WriteLine($"orientation = {orientation}");
        }
    }
    static void Main() {
        publication publ1     = new publication("publ1", 1900);
        magazin mag1          = new magazin("mag1", 1900, "каждую неделю", 20);
        book book1            = new book("book1", 1900, "name_author1", "genre1", 250);
        educational_book edu1 = new educational_book("edu1", 1900, "name_author1", "genre1", 250, "для вузов");

        Console.WriteLine("publ1");
        publ1.print();
        Console.WriteLine();

        Console.WriteLine("publ1");
        Console.WriteLine($"title_name = {publ1.title_name}");
        Console.WriteLine($"year_publicaton = {publ1.year_publicaton}");
        Console.WriteLine();

        Console.WriteLine("mag1");
        mag1.print();
        Console.WriteLine();

        Console.WriteLine("book1");
        book1.print();
        Console.WriteLine();

        Console.WriteLine("edu1");
        edu1.print();
        Console.WriteLine();
    }
}
