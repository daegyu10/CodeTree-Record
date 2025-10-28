using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = 0;
        int count = 0;

        for(int i = 1; i <= 10; i++) {
            a = int.Parse(Console.ReadLine());
            if(a % 2 == 1) {
                count++;
            }
        }

        Console.Write(count);
    }
}
