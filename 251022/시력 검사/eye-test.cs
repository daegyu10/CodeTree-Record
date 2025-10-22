using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        double a = double.Parse(Console.ReadLine());
        double b = double.Parse(Console.ReadLine());

        if(a >= 1.0 && b >= 1.0) {
            Console.Write("High");
        } else if (a >= 0.5 && b >= 0.5) {
            Console.Write("Middle");
        } else {
            Console.Write("Low");
        }
    }
}
