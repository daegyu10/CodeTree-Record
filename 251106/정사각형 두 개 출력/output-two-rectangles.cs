using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < a; j++) {
                for(int k = 0; k < a; k++) {
                    Console.Write("*");
                }
                Console.WriteLine("");
            }
            Console.WriteLine("");
        }
    }
}
