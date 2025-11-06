using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a;
        a = int.Parse(Console.ReadLine());
        for(int i = 0; i < a; i++) {
            for(int j = 0; j < a; j++) {
                Console.Write("*");
            }
            Console.WriteLine("");
        }
    }
}
