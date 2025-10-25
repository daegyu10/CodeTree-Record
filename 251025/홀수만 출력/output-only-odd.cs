using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        string[] input = Console.ReadLine().Split();
        int a = int.Parse(input[0]);
        int b = int.Parse(input[1]);

        int i = 0;
        if(a % 2 == 0) {
            i = a+1;
        } else {
            i = a;
        }
        
        for(i = i; i <= b; i+=2) {
            Console.Write(i + " ");
        }
    }
}
