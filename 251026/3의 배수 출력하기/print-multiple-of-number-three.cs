using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        int i = 3;
        while(i <= a) {
            Console.Write(i + " ");
            i += 3;
        }
    }
}
