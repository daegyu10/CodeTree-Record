using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a;
        int b;
        char c;
        while(true) {
            string[] input = Console.ReadLine().Split();
            a = int.Parse(input[0]);
            b = int.Parse(input[1]);
            c = char.Parse(input[2]);

            Console.WriteLine(a*b);
            if(c == 'C') {
                break;
            }
        }
    }
}
