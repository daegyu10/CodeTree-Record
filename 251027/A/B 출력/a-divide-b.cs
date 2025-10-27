using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        string[] input = Console.ReadLine().Split();
        int a = int.Parse(input[0]);
        int b = int.Parse(input[1]);
        
        Console.Write(a/b);
        Console.Write(".");
        a = a%b;
        a *= 10;
        
        for(int i = 1; i <= 20; i++) {
            Console.Write(a/b);
            a = a%b;
            a *= 10;
        }
    }
}
