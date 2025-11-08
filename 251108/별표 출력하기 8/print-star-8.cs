using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        for(int i = 1; i <= a; i++) {
            if(i % 2 == 1) {
                Console.Write("* ");
            } else {
                for(int j = 0; j < i; j++) {
                    Console.Write("* ");
                }
            }
            Console.WriteLine("");
        }
    }
}
