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
            if(i%4 == 0) {
                if(i%100 == 0 && i % 400 != 0) {
                    continue;
                }
                count++;
            }
        }
        Console.Write(count);
    }
}
