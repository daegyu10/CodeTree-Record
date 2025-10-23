using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());

        if(a % 13 == 0 || a % 19 == 0) {
            Console.Write("True");
        } else {
            Console.Write("False");
        }
    }
}
