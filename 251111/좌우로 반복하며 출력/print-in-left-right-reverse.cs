using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        for(int i = 0; i < a; i++) {
            for(int j = 0; j < a; j++) {
                if(i % 2 == 0) {
                    Console.Write(j+1);
                } else {
                    Console.Write(a-j);
                }
            }
            Console.WriteLine("");
        }
    }
}
