using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        string[] input = Console.ReadLine().Split();
        int a = int.Parse(input[0]);
        int b = int.Parse(input[1]);

        while(a <= b) {
            if(a % 2 == 0) {
                Console.Write(a + " ");
                a += 3;
            } else if(a % 2 == 1) {
                Console.Write(a + " ");
                a *= 2;
            }
        }
    }
}
