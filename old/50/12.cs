//12.cs
//19-04-2023
using System;
class PersonException : ArgumentException
{   public int Value { get;}   
    public PersonException(string message, int val)  : base(message)   
    {  Value = val;  }
}
class Person
{   public string Name { get; set; }
    private int age;
    public int Age
    {   get { return age; }
        set
        {  if (value < 18) throw new PersonException("Лицам до 18 регистрация запрещена", value);
            else
                age = value;
        }
    }
}
class Program
{   static void Main(string[] args)
    {   try
        { Person p = new Person { Name = "Tom", Age = 13 };
         }
        catch (PersonException ex)
        {   Console.WriteLine($"Ошибка: {ex.Message}");
            Console.WriteLine($"Некорректное значение: {ex.Value}");
        }
     }
}
