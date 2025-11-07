using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        int count = (a*2)-1;
        int empty_count = 0;

        for(int i = 0; i < (a*2)-1; i++) {
            for(int j = 0; j < empty_count; j++) {
                Console.Write("  ");
            }
            for(int j = 0; j < count; j++) {
                Console.Write("* ");
            }
            Console.WriteLine("");

            if(i >= a-1) {
                count += 2;
                empty_count--;
            } else {
                count -= 2;
                empty_count++;
            }
        }
    }
}
