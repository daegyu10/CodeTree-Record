using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        double[] save = new double[8];
        string[] input = Console.ReadLine().Split();

        double avg = 0;

        for(int i = 0; i < 8; i++) {
            save[i] = double.Parse(input[i]);
            avg += save[i];
        }

        Console.Write($"{avg/8:F1}");
    }
}
