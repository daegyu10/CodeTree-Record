using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a;
        int sum = 1;

        a = int.Parse(Console.ReadLine());
        for(int i = 1; i <= 10; i++) {
            sum *= i;
            if(sum >= a) {
                Console.Write(i);
                break;
            }
        }
    }
}
