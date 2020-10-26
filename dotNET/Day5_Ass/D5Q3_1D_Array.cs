//Q3. Accept data in an array and print sum  also store square of each element in new array.
using System;
class TwoD
{
    static void Main()
    {
        int i,j = 0;
        int sum = 0;
        int[] table = new int[3];
        int[] sqr = new int[3];
        Console.WriteLine("Enter Number:\n");

        
            for (j = 0; j < 3; j++)
            {
                table[j] = Convert.ToInt16(Console.ReadLine());
                sum = sum + table[j];
            } 
        Console.WriteLine("\n");
        Console.Write("sum is:" + sum);
        Console.WriteLine("\n");
        Console.WriteLine("printing square of each elements ");
        
            for (j = 0; j < 3; j++)
            {
                sqr[j] = table[j] * table[j];
                Console.Write(sqr[j] + "  ");
            } Console.WriteLine("\n");
        
        Console.ReadLine();
 }
}
