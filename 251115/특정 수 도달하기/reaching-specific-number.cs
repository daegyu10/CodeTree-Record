using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int[] arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        int sum = 0;
        double avg = 0.0;
        int count = 10;

        for(int i = 0; i < 10; i++) {
            if(arr[i] >= 250) {
                count = i;
                break;
            } 
            //Console.Write(i);
            sum += arr[i];
            avg += (double)arr[i];
        }

        Console.Write($"{sum} {avg/count:F1}");
    }
}

