using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int sum = 0;
        int count = 0;
        int a;
        double avg;

        while(true) {
            a = int.Parse(Console.ReadLine());
            if((a < 20) || (a >= 30)) {
                Console.WriteLine($"{(double)sum/count:F2}");
                break;
            }

            sum += a;
            count++;
        }
    }
}
