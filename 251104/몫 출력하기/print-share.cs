using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a;
        int count = 0;
        while(true) {
            if(count == 3) {
                break;
            }
            a = int.Parse(Console.ReadLine());

            if(a % 2 == 1) {
                continue;
            } else {
                Console.WriteLine(a / 2);
                count++;
            }

        }
    }
}
