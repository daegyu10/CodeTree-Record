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
            if(a >= 1000) {
                Console.Write(count);
                break;
            }

            if(a % 2 == 0) {
                a = (a*3)+1;
                count++;
            } else {
                a = (a*2)+2;
                count++;
            }
        }
    }
}
