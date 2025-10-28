using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        string[] input = Console.ReadLine().Split();
        int a = int.Parse(input[0]);
        int b = int.Parse(input[1]);
        int i = 1;

        while(a >= i) {
            if(i % b == 0) {
                Console.WriteLine("1");
            } else {
                Console.WriteLine("0");
            }
            i++;
        }
    }
}
