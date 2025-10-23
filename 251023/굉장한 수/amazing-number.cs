using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        if((a % 2 == 1 && a % 3 == 0) || (a % 2 == 0 && a % 5 == 0)) {
            Console.Write("true");
        } else {
            Console.Write("false");
        }
    }
}
