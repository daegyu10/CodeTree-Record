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
        int sum = save[1] + save[3] + save[5] + save[7] + save[9];
        double avg = (double)(save[2] + save[5] + save[8])/3;
        Console.Write($"{sum} {avg:F1}");
    }
}
