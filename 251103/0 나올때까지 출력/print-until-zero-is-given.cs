using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a;
        while(true) {
            a = int.Parse(Console.ReadLine());
            if(a == 0) {
                break;
            }
            Console.WriteLine(a);
        }
    }
}
