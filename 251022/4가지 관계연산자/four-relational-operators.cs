using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        string[] input = Console.ReadLine().Split();
        int a = int.Parse(input[0]);
        int b = int.Parse(input[1]);

        Console.WriteLine(a>=b ? 1 : 0);
        Console.WriteLine(a>b ? 1 : 0);
        Console.WriteLine(b>=a ? 1 : 0);
        Console.WriteLine(b>a ? 1 : 0);
    }
}
