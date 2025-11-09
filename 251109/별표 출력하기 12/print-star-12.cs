using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        int count;
        if(a == 1) {
            count = 1;
        } else if(a % 2 == 0) {
            count = a;
        } else {
            count = a-1;
        }

        for(int i = 0; i < count; i++) {
            for(int j = 0; j < a; j++) {
                if(i == 0 || (j % 2 == 1)&&(j >= i)) {
                    Console.Write("* ");
                } else {
                    Console.Write("  ");
                }
            }
            Console.WriteLine("");
        }
    }
}
