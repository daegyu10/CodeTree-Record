using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int sum = 0;
        int sum_num = 0;
        int a = 0;

        for(int i = 1; i <= 10; i++) {
            a = int.Parse(Console.ReadLine());
            if(0 <= a && a <= 200) {
                sum += a;
                sum_num++;
            }
        }
        Console.Write($"{sum} {(double)sum/sum_num:F1}");
    }
}
