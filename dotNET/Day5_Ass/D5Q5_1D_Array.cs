//Q5. Accept data in an array and print average.
using System;
class TwoD
{
    static void Main()
    {
        int i;
        double sum = 0;
        int[] arr = new int[3];
        Console.WriteLine("Enter data in array");
        for ( i = 0; i < 3; i++)
        {
            arr[i] = int.Parse(Console.ReadLine());
            sum = sum + arr[i];
        }
        Console.WriteLine("Sum is:{0}", sum);
        
        double avg = (double)(sum/3);
        Console.WriteLine("avg is:{0}",avg);
        Console.ReadLine();

    }
}
