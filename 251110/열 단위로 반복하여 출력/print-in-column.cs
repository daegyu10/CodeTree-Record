using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        for(int i = 1; i <= a; i++) {
            for(int j = 1; j <= a; j++) {
                Console.Write(i);
            }
            Console.WriteLine("");
        }
    }
}
