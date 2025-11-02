using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a;
        int sum;

        a = int.Parse(Console.ReadLine());
        sum = a;
        for(int i = 1; i <= 100; i++) {
            sum = sum/i;
            if(sum <= 1) {
                Console.Write(i);
                break;
            }
        }
    }
}
