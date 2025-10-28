using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = 0; 
        int count1 = 0;
        int count2 = 0;

        for(int i = 0; i < 10; i++) {
            a = int.Parse(Console.ReadLine());
            if(a % 3 == 0 && a % 5 == 0) {
                count1++;
                count2++;
            } else if(a % 3 == 0) {
                count1++;
            } else if(a % 5 == 0) {
                count2++;
            }
        }
        Console.Write(count1 + " " + count2);
    }
}
