using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        for(int i = 0; i < a; i++) {
            var input = Console.ReadLine().Split();
            int b = int.Parse(input[0]);
            int c = int.Parse(input[1]);

            int sum = 1;
            for(int j = b; j <= c; j++) {
                sum *= j;
            }
            Console.WriteLine(sum);
        }
    }
}
