//day5Q2. Accept data in 3*3matrix and print row wise sum
using System;

class TwoD
{
    static void Main()
    {
        int i, j=0;
        int sum = 0;
        int[ , ] table = new int[3, 3];
        Console.WriteLine("Enter Number:");

        for (  i = 0; i < 3; i++)
        {
            for (  j = 0; j < 3; j++)
            {
                table[i, j] = Convert.ToInt16(Console.ReadLine());
            }
        }

        Console.WriteLine("Printing Matrix: ");
        for (  i = 0; i < 3; ++i)
        {
            sum = 0;
            for (  j = 0; j < 3; j++)
            {
               
                Console.Write(table[i, j] + "\t");


                sum = sum + table[i, j];
                
            } 
            Console.Write(sum);
            Console.ReadLine();
            
        } 
        
    }
}
