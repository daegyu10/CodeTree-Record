using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        if(a < 10 || a > 20) {
            Console.Write("yes");
        } else {
            Console.Write("no");
        }
    }
}
