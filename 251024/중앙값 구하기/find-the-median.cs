using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        string[] input = Console.ReadLine().Split();
        int a = int.Parse(input[0]);
        int b = int.Parse(input[1]);
        int c = int.Parse(input[2]);

        if(((a <= b)&&(a >= c)) || ((a >= b)&&(a <= c))) {
            Console.Write(a);
        } else if (((b <= a)&&(b >= c)) || ((b >= a)&&(b <= c))) {
            Console.Write(b);
        } else if (((c <= a)&&(c >= b)) || ((c >= a)&&(c <= b))) {
            Console.Write(c);
        }
    }
}
