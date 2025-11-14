using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        int b = 'A';
        for(int i = a; i > 0; i--) {
            for(int j = a; j > 0; j--) {
                if(i >= j) {
                    Console.Write((char)b + " ");
                    b++;
                    if(b > 'Z') {
                        b = 'A';
                    }
                } else {
                    Console.Write("  ");
                }
            }
            Console.WriteLine("");
        }
    }
}
