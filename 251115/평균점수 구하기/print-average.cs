using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        double[] save = new double[8];
        double[] input = Array.ConvertAll(Console.ReadLine().Split(), double.Parse);
        double avg = 0;

        for(int i = 0; i < 8; i++) {
            save[i] = input[i];
            avg += save[i];
        }

        Console.Write($"{avg/8:F1}");
    }
}
