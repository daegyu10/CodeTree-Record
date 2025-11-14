using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        for(int i = 1; i <= a; i++) {
            int b = int.Parse(Console.ReadLine());
            int count = 0;
            
            while(true) {
                if(b == 1) {
                    Console.WriteLine(count);
                    break;
                } else if(b % 2 == 0) {
                    b = b/2;
                    count++;
                } else if(b % 2 == 1) {
                    b = (b*3)+1;
                    count++;
                }
            }
        }
    }
}
