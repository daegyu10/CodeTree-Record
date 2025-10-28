using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int b = 0;
        int i = 1; //변수 선언은 readline 전에. 아니면 에러난다.
        int a = int.Parse(Console.ReadLine());
        

        while(i <= a) {
            b = int.Parse(Console.ReadLine());
            if((b % 2 == 1) && (b % 3 == 0)) {
                Console.WriteLine(b);
            }
            i++;
        }
    }
}
