//14.cs
//19-04-2023
using System;
class  consleprogram{
    static void Main() {
        try
{   try
    {   Console.Write("Введите строку: ");
        string message = Console.ReadLine();
        if (message.Length > 6)
        {  throw new Exception("Длина строки больше 6 символов");
        }
    }
catch    
         {  Console.WriteLine("Возникло исключение");        
            throw;    
          }
      }
     catch (Exception ex)
     {    Console.WriteLine(ex.Message);
     }
}
}
