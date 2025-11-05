using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a;
        int b;
        int c;
        bool exist = false;
        string[] input = Console.ReadLine().Split();

        a = int.Parse(input[0]);
        b = int.Parse(input[1]);
        c = int.Parse(input[2]);

        for(int i = a; i <= b; i++) {
            if(i % c == 0) {
                exist = true;
            }
        }

        if(exist == true) {
            Console.Write("YES");
        } else {
            Console.Write("NO");
        }
    }
}
