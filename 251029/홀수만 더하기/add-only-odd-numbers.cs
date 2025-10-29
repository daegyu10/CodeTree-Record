using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = 0;
        int b = 0;
        int sum = 0;
        a = int.Parse(Console.ReadLine());

        for(int i = 1; i <= a; i++) {
            b = int.Parse(Console.ReadLine());
            if(b%2 == 1 && b % 3 == 0) {
                sum += b;
            }
        }
        Console.Write(sum);
    }
}
