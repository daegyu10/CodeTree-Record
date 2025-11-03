using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a;
        while(true) {
            a = int.Parse(Console.ReadLine());
            if(a < 25) {
                Console.WriteLine("Higher");
            } else if(a > 25) {
                Console.WriteLine("Lower");
            } else if(a == 25) {
                Console.WriteLine("Good");
                break;
            }
        }
    }
}
