using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a;
        bool satisfy = true;

        for(int i = 0; i < 5; i++) {
            a = int.Parse(Console.ReadLine());
            if(a % 3 != 0) {
                satisfy = false;
            }
        }

        if(satisfy == true) {
            Console.Write("1");
        } else {
            Console.Write("0");
        }
    }
}
