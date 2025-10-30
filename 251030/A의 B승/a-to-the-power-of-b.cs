using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = 0;
        int b = 0;
        int sum = 1;
        int sum_0 = 1;

        string[] input = Console.ReadLine().Split();
        a = int.Parse(input[0]);
        b = int.Parse(input[1]);

        
        for(int i = 1; i <= b; i++) {
            sum *= a;
        }

        if(b == 0) {
            Console.Write(sum_0);
        } else {
            Console.Write(sum);
        }
    }
}
