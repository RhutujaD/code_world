using System;
namespace ConsoleApplication26
{
    class Program
    {
        static void Main(string[] args)
        {
            string x, y;
            float f, g;
            Console.WriteLine("Enter a two number");
            x = Console.ReadLine();
            y = Console.ReadLine();

            bool a1 = float.TryParse(x, out  f);
            bool a2 = float.TryParse(y, out  g);

            if (a1 == true && a2 == true)
                Console.WriteLine(f + g);
            Console.ReadLine();


        }
    }
}
