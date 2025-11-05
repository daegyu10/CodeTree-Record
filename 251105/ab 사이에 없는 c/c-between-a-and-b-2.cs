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
        bool exist = true;

        for(int i = a; i <= b; i++) {
            if(i % c == 0) {
                exist = false;
            }
        }

        if(exist == true) {
            Console.Write("YES");
        } else {
            Console.Write("NO");
        }

    }
}
