using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        int count = 1;
        for(int i = a; i > 0; i--) {
            for(int j = a; j > 0; j--) {
                if(i >= j) {
                    Console.Write(count + " ");
                    count++;
                    if(count == 10) {
                        count = 1;
                    }
                } else {
                    Console.Write("  ");
                }
            }
            Console.WriteLine("");
        }
    }
}
