using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        string[] input = Console.ReadLine().Split();
        int a = int.Parse(input[0]);
        int b = int.Parse(input[1]);
        int c = int.Parse(input[2]);

        if(a <= b && a <= c) {
            Console.Write("1 ");
        } else {
            Console.Write("0 ");
        }

        if(a == b && a == c) {
            Console.Write("1");
        } else {
            Console.Write("0");
        }
    }
}
