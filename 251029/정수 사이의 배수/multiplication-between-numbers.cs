using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = 0;
        int b = 0;
        int sum = 0;
        int sum_num = 0;
        string[] input = Console.ReadLine().Split();

        a = int.Parse(input[0]);
        b = int.Parse(input[1]);
        for(int i = a; i <= b; i++) {
            if(i % 5 == 0 || i % 7 == 0) {
                sum += i;
                sum_num++;
            }
        }

        Console.Write($"{sum} {(double)sum/sum_num:F1}");
    }
}
