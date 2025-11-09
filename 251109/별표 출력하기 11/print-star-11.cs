using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        for(int i = 0; i < (a*2)+1; i++) {
            for(int j = 0; j < (a*2)+1; j++) {
                if(i % 2 == 0) {
                    Console.Write("* ");
                } else {
                    if(j % 2 == 0) {
                        Console.Write("* ");
                    } else {
                        Console.Write("  ");
                    }
                }
            }
            Console.WriteLine("");
        }
    }
}
