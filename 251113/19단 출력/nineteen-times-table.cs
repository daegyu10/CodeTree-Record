using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        for(int i = 1; i <= 19; i++) {
            for(int j = 1; j <= 19; j++) {
                if(j % 2 == 0 || j == 19) {
                    Console.WriteLine($"{i} * {j} = {i*j}");
                } else {
                    Console.Write($"{i} * {j} = {i*j} / ");
                }
            }
        }
    }
}
