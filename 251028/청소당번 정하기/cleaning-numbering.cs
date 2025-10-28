using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int count1 = 0;
        int count2 = 0;
        int count3 = 0;
        int a = 0;

        a = int.Parse(Console.ReadLine());
        for(int i = 1; i <= a; i++) {
            if(i % 12 == 0 && i % 3 == 0 && i % 2 ==0) {
                count3++;
            } else if(i % 3 == 0 && i % 12 ==0) {
                count3++;
            } else if(i % 2 == 0 && i % 12 == 0) {
                count3++;
            } else if(i % 2 == 0 && i % 3 == 0) {
                count2++;
            } else if(i % 3 == 0) {
                count2++;
            } else if(i % 2 == 0) {
                count1++;
            }
        }

        Console.Write(count1 + " " + count2 + " " + count3);

    }
}
