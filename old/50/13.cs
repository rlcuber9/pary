//13.cs
//19-04-2023
using System;
class  consleprogram{
    static void Main(string[] args)
{   try 
    {  Console.Write("Введите строку: ");       
       string message = Console.ReadLine();        
       if (message.Length > 6)        
       { throw new Exception("Длина строки больше 6 символов"); 
        }   
     }    
     catch (Exception  e)    
     {   Console.WriteLine($"Ошибка: {e.Message}");   
      }    
}
}
