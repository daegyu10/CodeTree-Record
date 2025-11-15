using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        string[] input = Console.ReadLine().Split();
        for(int i = 9; i >= 0; i--) {
            Console.Write(input[i]);
        }
    }
}
