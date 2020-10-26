//Q5. create a class demomaths having method Square , cube which will take float value and return square and cube of a number.
using System; //it is a name space
namespace ConsoleApplicationDemo
{
    class Demomath
    {    //public instance method - you can call this method through object of this class
        public float square(float x)
        { return x * x; }

        public float cube(float x)
        { return x * x * x; }
    }
    class Program //Entry point class
    {
        static void Main(string[] args)
        {

            Demomath myobj = new Demomath(); //new is same as malloc
            //calling method using object reference
            float result1 = myobj.square(3.3f);
            float result2 = myobj.cube(3.3f);
            // + operator is overloaded it will concat

            Console.WriteLine("Square={0},cube={1}", result1, result2);
            Console.ReadLine();
        }
    }
}

