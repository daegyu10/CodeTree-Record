using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = 0;
        int b = 0;
        int sum = 0;

        string[] input = Console.ReadLine().Split();
        a = int.Parse(input[0]);
        b = int.Parse(input[1]);

        for(int i = a; i <= b; i++) {
            if(i % 6 == 0 && i % 8 != 0) {
                sum += i;
            }
        }
        Console.Write(sum);
    }
}
