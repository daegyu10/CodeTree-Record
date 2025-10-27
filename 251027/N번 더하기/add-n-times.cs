using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        string[] input = Console.ReadLine().Split();
        int a = int.Parse(input[0]);
        int b = int.Parse(input[1]);

        for(int i = 1; i <= b; i++) {
            a += b;
            Console.WriteLine(a);
        }
    }
}
