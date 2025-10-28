using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        //조건 1 : 3의배수 -> i % 3 == 0
        //조건 2 : 수 구성 숫자에 3,6,9 
        //조건 2-1 : 일의 자리에 3,6,9 => i % 10 == 3,6,9
        //조건 2-2 : 십의 자리에 3,6,9 => ㅑ / 10 == 3,6,9

        int a = int.Parse(Console.ReadLine());
        int i = 1;

        while(i <= a) {
            if((i % 3 == 0) || (i % 10 == 3) || (i % 10 == 6) || (i % 10 == 9) || (i / 10 == 3) || (i / 10 == 6) || (i / 10 == 9))
                Console.Write("0 ");
            else
                Console.Write(i + " ");
            
            i++;
        }
    }
}
