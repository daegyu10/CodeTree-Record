using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        int empty_count = a-1;
        int count = 1;

        for(int i = 0; i < (a*2)-1; i++) {
            for(int j = 0; j < empty_count; j++) {
                Console.Write(" ");
            }
            for(int j = 0; j < count; j++) {
                Console.Write("*");
            }
            Console.WriteLine("");
            if(i >= a-1) {
                empty_count++;
                count -= 2;
            } else {
                empty_count--;
                count += 2;
            }
        }
    }
}
