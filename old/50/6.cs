//6.cs
//19-04-2023
using System;
class  consleprogram{
    static void Main() {
        try
{  int x = 5;    
   int y = x / 0;    
   Console.WriteLine($"Результат: {y}");
}
catch(DivideByZeroException ex)
{   Console.WriteLine($"Возникло исключение {ex.Message}");
}
    }
}
