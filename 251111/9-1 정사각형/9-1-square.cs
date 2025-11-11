using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        int count = 9;
        for(int i = 0; i < a; i++) {
            for(int j = 0; j < a; j++) {
                Console.Write(count);
                count--;
                if(count == 0) {
                    count = 9;
                }
            }
            Console.WriteLine("");
        }
    }
}
