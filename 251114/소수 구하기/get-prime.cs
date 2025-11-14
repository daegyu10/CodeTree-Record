using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        
        for(int i = 1; i <= a; i++) {
            int count = 0;
            for(int j = 1; j <= i; j++) {
                if(i % j == 0) {
                    count++;
                }
            }
            if(count == 2) {
                Console.Write(i + " ");
            }
        }
    }
}
