using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        string[] input = Console.ReadLine().Split();
        int a = int.Parse(input[1]);
        int b = int.Parse(input[0]);
        
        for(int i = 2; i <= 8; i+=2) {
            for(int j = a; j >= b; j--) {
                if(j == b) {
                    Console.Write($"{j} * {i} = {j*i}");
                    Console.WriteLine("");
                } else {
                    Console.Write($"{j} * {i} = {j*i} / ");
                }
            }
        }

    }
}
