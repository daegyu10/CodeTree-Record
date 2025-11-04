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

            if(a % 2 == 0) {
                a /= 2;
                count++;
            } else if(a % 2 == 1) {
                a = (a *= 3)+1;
                count++;
            }
        }
    }
}
