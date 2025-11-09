using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        for(int i = 0; i < a; i++) {
            for(int j = 0; j < a; j++) {
                if(i == 0 || i == a-1 || j == 0 || j == a-1 || i > j) {
                    Console.Write("* ");
                } else {
                    Console.Write("  ");
                }
            }
            Console.WriteLine("");
        }
    }
}
