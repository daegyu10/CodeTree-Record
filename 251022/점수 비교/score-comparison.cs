using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        string[] input1 = Console.ReadLine().Split();
        string[] input2 = Console.ReadLine().Split();

        int a = int.Parse(input1[0]);
        int b = int.Parse(input1[1]);
        int c = int.Parse(input2[0]);
        int d = int.Parse(input2[1]);

        if(a > c && b > d) {
            Console.Write("1");
        } else {
            Console.Write("0");
        }
    }
}
