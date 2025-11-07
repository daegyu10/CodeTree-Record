using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        for(int i = 0; i < a; i++) {
            for(int j = a-i; j > 1; j--) {
                Console.Write("  ");
            }
            for(int j = 0; j < (i*2)+1; j++) {
                Console.Write("* ");
            }
            Console.WriteLine("");
        }
    }
}
