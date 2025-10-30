using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = 0;
        int b = 0;
        int count = 0;
        int count_num = 0;

        a = int.Parse(Console.ReadLine());
        for(int i = 1; i <= a; i++) {
            b = int.Parse(Console.ReadLine());
            count += b;
            count_num++;
        }

        Console.Write($"{count} {(double)count/count_num:F1}");
    }
}
