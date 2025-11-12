using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        string[] input = Console.ReadLine().Split();
        int a = int.Parse(input[1]);
        int b = int.Parse(input[0]);
        int count = a;

        for(int i = 1; i <= 9; i++) {
            for(int j = a; j >= b; j -= 2) {
                if(count == b) {
                    Console.Write($"{count} * {i} = {count*i}");
                } else {
                    Console.Write($"{count} * {i} = {count*i} / ");
                    count -= 2;
                }
            }
            Console.WriteLine("");
            count = a;
        }
    }
}
