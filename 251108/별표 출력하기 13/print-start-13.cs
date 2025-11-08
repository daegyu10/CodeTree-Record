using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        int cnt_odd = a;
        int cnt_even = 1;

        for(int i = 1; i <= a*2; i++) {
            if(i % 2 == 1) {
                for(int j = 0; j < cnt_odd; j++) {
                    Console.Write("* ");
                }
                cnt_odd--;
            } else {
                for(int j = 0; j < cnt_even; j++) {
                    Console.Write("* ");
                }
                cnt_even++;
            }
            Console.WriteLine("");
        }
    }
}
