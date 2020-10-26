//Accept name and marks of 5 students and print average of the marks.
//Solve above code using Parse(), ToSingle() and TryPrase() method.
//Also observe exception if you do not enter valid data

using System;
namespace ConsoleApplication26
{
    class Program
    {
        static void Main(string[] args)
        {
            string x, y,z,q,p;
            string a,b,c,d,e;
            float f, g,h,i,j;
            Console.WriteLine("Enter name and Marks");
             x = Console.ReadLine();
             a = Console.ReadLine();
              bool a1 = float.TryParse(a, out  f);

         Console.WriteLine("Enter name and Mark");
             y = Console.ReadLine();
             b = Console.ReadLine();
              bool a2 = float.TryParse(b, out  g);

 Console.WriteLine("Enter name and Mark");
             z = Console.ReadLine();
             c = Console.ReadLine();
              bool a3 = float.TryParse(c, out  h);

 Console.WriteLine("Enter name and Mark");
             q = Console.ReadLine();
            d = Console.ReadLine();
              bool a4 = float.TryParse(d, out  i);

 Console.WriteLine("Enter name and Mark");
             p = Console.ReadLine();
             e = Console.ReadLine();
              bool a5 = float.TryParse(e, out j );




              if (a1 == true && a2 == true && a3 == true && a4 == true && a5 == true)
                  //Console.WriteLine("Average --");
                Console.WriteLine("Average --"+((f + g+h+i+j)/5));
            Console.ReadLine();


        }
    }
}