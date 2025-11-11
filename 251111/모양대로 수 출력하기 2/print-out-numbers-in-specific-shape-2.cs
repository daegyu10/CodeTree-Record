using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        int count = 2;
        for(int i = 0; i < a; i++) {
            for(int j = 0; j < a; j++) {
                Console.Write(count + " ");
                count+=2;
                if(count == 10) {
                    count = 2;
                }
            }
            Console.WriteLine("");
        }
    }
}
