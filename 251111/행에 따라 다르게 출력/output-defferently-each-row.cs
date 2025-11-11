using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        int count = 0;
        for(int i = 0; i < a; i++) {
            for(int j = 0; j < a; j++) {
                if(i % 2 == 0) {
                    count++;
                    Console.Write(count + " ");
                } else {
                    count+=2;
                    Console.Write(count + " ");
                }
            }
            Console.WriteLine("");
        }
    }
}
