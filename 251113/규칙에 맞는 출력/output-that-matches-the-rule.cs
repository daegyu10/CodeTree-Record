using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        for(int i = 0; i < a; i++) {
            for(int j = 0; j <= i; j++) {
                Console.Write((a-i+j) + " ");
            }
            Console.WriteLine("");
        }
    }
}
