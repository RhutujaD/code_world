//Q5. Accept data in an array and print average.
using System;
class TwoD
{
    static void Main()
    {
        int i, j = 0;
        int sum = 0;
        int[,] table = new int[3, 3];
        int[,] sqr = new int[3, 3];
        Console.WriteLine("Enter Number:\n");

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                table[i, j] = Convert.ToInt16(Console.ReadLine());
                sum = sum + table[i, j];
            } Console.WriteLine("\n");
        }

        Console.Write("sum is:" + sum);
        Console.Write(" \n");
        Console.Write("avg is:" + sum/9);
        Console.WriteLine("\n");

       
        Console.ReadLine();

    }
}
