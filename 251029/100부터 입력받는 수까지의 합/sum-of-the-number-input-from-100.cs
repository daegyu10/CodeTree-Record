using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = 0;
        int sum = 0;
        a = int.Parse(Console.ReadLine());
        for(int i = a; i <= 100; i++) {
            sum += i;
        }
        Console.Write(sum);
    }
}
