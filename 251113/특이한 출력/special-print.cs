using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        for(int i = 1; i <= a; i++) {
            for(int j = 1; j <= a; j++) {
                if((i+j) % 4 == 0) {
                    Console.WriteLine($"({i}, {j}) ");
                } else {
                    Console.Write($"({i}, {j}) ");
                }
            }
        }
    }
}
