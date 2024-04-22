//7.cs
//19-04-2023
using System;
class  consleprogram{
    static void Main() {
        int x = 0;
int y = 0; 
try
{   int result = x / y; Console.WriteLine(result );
}
catch(DivideByZeroException) when (y==0 && x == 0)
{   Console.WriteLine("y не должен быть равен 0");
}
catch(DivideByZeroException ex)
{   Console.WriteLine(ex.Message);
}
    }
}
