using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        for(int i = 0; i < a; i++) {
            for(int j = a; j > 0; j--) {
                Console.Write(j + " ");
            }
            Console.WriteLine("");
        }
    }
}
