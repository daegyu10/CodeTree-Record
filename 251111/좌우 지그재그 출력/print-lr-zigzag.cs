using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        int count;
        for(int i = 0; i < a; i++) {
            for(int j = 0; j < a; j++) {
                if(i % 2 == 0) {
                    count = (i*a) + 1;
                    Console.Write((count+j) + " ");
                } else {
                    count = a*(i+1);
                    Console.Write((count-j) + " ");
                }
            }
            Console.WriteLine("");
        }
    }
}
