//Q1. Declare 2 variable of a type short and store sum of it in a variable and print it.

using System;
namespace ConsoleApplication26
{
    class Program
    {
        static void Main(string[] args)
        {
            byte x = 10, y = 20;
                              //byte z;Error Cannot implicitly convert type 'int' to 'byte'. An explicit conversion exists (are you missing a cast?)
            int z;	
            z = x * y;

            Console.WriteLine("Product=" + z);
           // Console.ReadLine();
            Console.WriteLine("Typecast");
            byte q = (byte)(x + y);
            Console.WriteLine("Typecast resule=" + q);

            Console.ReadLine();

        }
    }
}
