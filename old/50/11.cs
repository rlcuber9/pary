//11.cs
//19-04-2023
using System;
class Program
{   static void Main(string[] args)
    {   try
           {  Person p = new Person { Name = "Tom", Age = 17 }; }
           catch (PersonException ex)
           {  Console.WriteLine("Ошибка: " + ex.Message);    }
        }
   }
  class Person
  {   private int age;
      public string Name { get; set; }
      public int Age
      {   get  {  return age;  }
          set
          {   if (value < 18) throw new PersonException("Лицам до 18 регистрация запрещена");
            else age = value;
        }  } }
class PersonException : Exception
{  public PersonException(string message) : base(message)
   {     }
};
