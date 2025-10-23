using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        string[] input = Console.ReadLine().Split();
        int a = int.Parse(input[0]);
        int b = int.Parse(input[1]);

        if(a >= 90) {
            if(b >= 95) {
                Console.Write("100000");
            } else if(b >- 90) {
                Console.Write("50000");
            } else {
                Console.Write("0");
            }
        } else {
            Console.Write("0");
        }
        
    }
}
