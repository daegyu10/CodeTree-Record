using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        if(a % 4 == 0) {
            if(a % 100 == 0 && a % 400 != 0) {
                Console.Write("false");
            } else {
                Console.Write("true");
            }
        } else {
            Console.Write("false");
        }
    }
}
