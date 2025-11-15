using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int[] save = new int[10];
        string[] input = Console.ReadLine().Split();

        for(int i = 0; i < 10; i++) {
            save[i] = int.Parse(input[i]);
        }
        int sum = 0;
        double avg = 0.0;
        int count = 0;

        for(int i = 0; i < 10; i++) {
            if(save[i] == 0) {
                break;
            }
            sum += save[i];
            count++;
        }
        avg = (double)sum / (count);
        Console.Write($"{sum} {avg:F1}");
    }
}
