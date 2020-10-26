using System;
namespace ConsoleApplication26
{
    class Program
    {
        static void Main(string[] args)
        {
            string x;
            float f;
            Console.WriteLine("Enter a number");
            x = Console.ReadLine();


            bool a1 = float.TryParse(x, out  f);
            // bool a2 = float.TryParse(y, out  g);

            if (a1 == true)
                Console.WriteLine(f * f);
            Console.ReadLine();


        }
    }
}
