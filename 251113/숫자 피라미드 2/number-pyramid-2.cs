using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        int count = 1;
        for(int i = 1; i <= a; i++) {
            for(int j = 0; j < i; j++) {
                Console.Write(count + " ");
                count++;
            }
            Console.WriteLine("");
        }
    }
}
