using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        for(int i = a; i > 0; i--) {
            for(int j = 0; j < i; j++) {
                Console.Write("* ");
            }
            Console.WriteLine("");
        }
    }
}
