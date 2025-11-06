using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a;
        int b;
        string[] input = Console.ReadLine().Split();
        a = int.Parse(input[0]);
        b = int.Parse(input[1]);

        for(int i = 0; i < a; i++) {
            for(int j = 0; j < b; j++) {
                Console.Write("* ");
            }
            Console.WriteLine("");
        }
    }
}
