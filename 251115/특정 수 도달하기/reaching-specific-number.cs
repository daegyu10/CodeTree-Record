using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int[] arr = new int[10];
        int sum = 0;
        double avg = 0.0;
        int count = 0;
        
        string[] input = Console.ReadLine().Split();

        for(int i = 0; i < 10; i++) {
            arr[i] = int.Parse(input[i]);
        }


        for(int i = 0; i < 10; i++) {
            if(arr[i] >= 250) {
                break;
            } 
            sum += arr[i];
            count++;
        }

        avg = (double)sum / count;
        Console.Write($"{sum} {avg:F1}");
    }
}

