using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        for(int i = a; i > 0; i--) {
            for(int j = a; j > 0; j--) {
                Console.Write($"({i},{j}) ");
            }
            Console.WriteLine("");
        }
    }
}
