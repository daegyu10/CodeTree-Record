using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = 0;
        int count = 0;
        a = int.Parse(Console.ReadLine());
        for(int i = 1; i <= a; i++) {
            if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
                count++;
            }
        }
        Console.Write(count);
    }
}
