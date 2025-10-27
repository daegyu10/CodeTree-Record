using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        string[] input = Console.ReadLine().Split();
        int a = int.Parse(input[0]);
        int b = int.Parse(input[1]);

        if(a >= b) {
            for(int i = a; i >= b; i--) {
                Console.Write(i + " ");
            }
        } else if(b >= a) {
            for(int i = b; i >= a; i--) {
                Console.Write(i + " ");
            }
        }
    }
}
