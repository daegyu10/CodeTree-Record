using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        if(3 <= a && a <= 5) {
            Console.Write("Spring");
        } else if(6 <= a && a <= 8) {
            Console.Write("Summer");
        } else if (9 <= a && a <= 11) {
            Console.Write("Fall");
        } else {
            Console.Write("Winter");
        } 
    }
}
