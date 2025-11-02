using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a;
        a = int.Parse(Console.ReadLine());
        int sum = 0;
        for(int i = 1; i <= 100; i++) {
            sum += i;
            if(sum >= a) {
                Console.Write(i);
                break;
            }
        }
    }
}
