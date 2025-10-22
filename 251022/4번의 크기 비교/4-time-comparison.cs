using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        string[] input = Console.ReadLine().Split();

        int b = int.Parse(input[0]);
        int c = int.Parse(input[1]);
        int d = int.Parse(input[2]);
        int e = int.Parse(input[3]);

        Console.WriteLine(a>b ? 1 : 0);
        Console.WriteLine(a>c ? 1 : 0);
        Console.WriteLine(a>d ? 1 : 0);
        Console.WriteLine(a>e ? 1 : 0);
    }
}
