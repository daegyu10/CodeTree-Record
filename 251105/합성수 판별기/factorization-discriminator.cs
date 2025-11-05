using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a;
        bool exist = false;

        a = int.Parse(Console.ReadLine());
        for(int i = 2; i <= a-1; i++) {
            if(a % i == 0) {
                exist = true;
            }
        }

        if(exist == true) {
            Console.Write("C");
        } else {
            Console.Write("N");
        }
    }
}
