using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());

        double[] save = new double[a];
        double[] input = Array.ConvertAll(Console.ReadLine().Split(), double.Parse);
        double sum = 0.0;
        

        for(int i = 0; i < a; i++) {
            save[i] = input[i];
            sum += save[i];
        }

        double avg = sum / a;
        if(avg >= 4.0) {
            Console.WriteLine($"{avg:F1}");
            Console.WriteLine("Perfect");
        } else if(avg >= 3.0) {
            Console.WriteLine($"{avg:F1}");
            Console.WriteLine("Good");
        } else if(avg < 3.0) {
            Console.WriteLine($"{avg:F1}");
            Console.WriteLine("Poor");
        }
    }
}
