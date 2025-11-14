using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        int b = 'A';

        for(int i = 1; i <= a; i++) {
            for(int j = 1; j <= i; j++) {
                Console.Write((char)b);
                b++;
                if(b > 'Z') {
                    b = 'A';
                }
            }
            Console.WriteLine("");
        }
    }
}
