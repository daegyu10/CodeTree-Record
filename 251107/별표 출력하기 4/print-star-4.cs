using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        int count = a;

        for(int i = 0; i < (a*2)-1; i++) {
            for(int j = 0; j < count; j++) {
                Console.Write("* ");
            }
            Console.WriteLine("");

            if(i >= a-1) {
                count++;
            } else {
                count--;
            }
        }
    }
}
