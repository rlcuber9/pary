//10.cs
//19-04-2023
using System;
class Program
{    static void Main(string[] args)    
     {  try       
        {  Person p = new Person { Name = "Tom", Age = 17}; 
         }        
        catch (Exception ex) 
        {  Console.WriteLine($"Ошибка: {ex.Message}");  
        }        
     }
};
class Person
{  private int age;    
   public string Name { get; set; }    
   public int Age   
   {  get { return age; }        
      set        
      {  if (value < 18)           
         {  throw new Exception("Лицам до 18 регистрация запрещена"); 
          }            
          else            
          {  age = value;            
           }        
       }    
   }
}
