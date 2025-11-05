using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a;
        int count = 0;
        a = int.Parse(Console.ReadLine());
        while(true) {
            if(a == 1) {
                Console.Write(count);
                break;
            }

            a /= 2;
            count++;
        }
    }
}
