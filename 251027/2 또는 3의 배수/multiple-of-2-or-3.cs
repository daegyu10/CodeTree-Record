using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        for(int i = 1; i <= a; i++) {
            if((i % 2 == 0) || (i % 3 == 0)) {
                Console.Write("1 ");
            } else {
                Console.Write("0 ");
            }
        }
    }
}
