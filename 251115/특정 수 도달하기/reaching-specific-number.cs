using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int[] arr = new int[10];
        var input = Console.ReadLine().Split(' ');

        arr = Array.ConvertAll(input, int.Parse);

        int sum = 0;
        double avg = 0.0;
        int count = 0;

        for(int i = 0; i < 10; i++) {
            if(arr[i] >= 250) {
                break;
            } 
            //Console.Write(i);
            sum += arr[i];
            avg += (double)arr[i];
            count++;
        }

        Console.Write($"{sum} {avg/count:F1}");
    }
}

