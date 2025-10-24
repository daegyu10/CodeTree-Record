using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        //4,6,9,11 : 30일. 2월 : 28일. 나머지 : 31일
        int a = int.Parse(Console.ReadLine());
        if(a == 2) {
            Console.Write("28");
        } else if((a == 4) || (a == 6) || (a == 9) || (a == 11)) {
            Console.Write("30");
        } else {
            Console.Write("31");
        }
    }
}
