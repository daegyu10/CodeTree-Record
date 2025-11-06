using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a;
        bool satisfy = true;
        a = int.Parse(Console.ReadLine());

        for(int i = 2; i < a; i++) {
            if(a % i == 0) {
                satisfy = false;
            }
        }

        if(satisfy == true) {
            Console.Write("P");
        } else {
            Console.Write("C");
        }
    }
}
