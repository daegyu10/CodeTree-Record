using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        var input = Console.ReadLine().Split();
        int a = int.Parse(input[0]);
        int b = int.Parse(input[1]);
        int count = 0;

        for(int i = a; i <= b; i++) {
            int count_div = 0;

            for(int j = 1; j <= i; j++) {
                if(i % j == 0) {
                    count_div++;
                }
            }
            if(count_div == 3) {
                count++;
            }
        }
        Console.Write(count);
    }
}
