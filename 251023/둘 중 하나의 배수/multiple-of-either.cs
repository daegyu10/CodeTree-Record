using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        if(a % 3 == 0 || a % 5 == 0) {
            Console.Write("1");
        } else {
            Console.Write("0");
        }
    }
}
