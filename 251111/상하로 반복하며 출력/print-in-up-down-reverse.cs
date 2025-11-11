using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        int count = a;

        for(int i = 1; i <= a; i++) {
            for(int j = 1; j <= a; j++) {
                if(j % 2 == 0) {
                    Console.Write(count);
                } else {
                    Console.Write(i);
                }
            }
            count--;
            Console.WriteLine("");
        }
    }
}
