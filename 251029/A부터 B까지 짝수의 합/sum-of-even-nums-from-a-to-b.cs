using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        string[] input = Console.ReadLine().Split();
        int a = int.Parse(input[0]);
        int b = int.Parse(input[1]);
        int sum = 0;

        for(int i = a; i <= b; i++) {
            if(i % 2 ==0) {
                sum += i;
            }
        }
        Console.Write(sum);
    }
}
