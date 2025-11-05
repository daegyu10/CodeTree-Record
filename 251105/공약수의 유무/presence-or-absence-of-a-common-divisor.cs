using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a;
        int b;
        bool exist = false;

        string[] input = Console.ReadLine().Split();
        a = int.Parse(input[0]);
        b = int.Parse(input[1]);

        for(int i = a; i <= b; i++) {
            if(1920 % i == 0 && 2880 % i == 0) {
                exist = true;
            }
        }

        if(exist == true) {
            Console.Write("1");
        } else {
            Console.Write("0");
        }
    }
}
