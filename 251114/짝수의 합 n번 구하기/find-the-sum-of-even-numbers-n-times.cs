using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        for(int i = 1; i <= a; i++) {
            var input = Console.ReadLine().Split();
            int b = int.Parse(input[0]);
            int c = int.Parse(input[1]);
            int count = 0;

            for(int j = b; j <= c; j++) {
                if(j % 2 == 0) {
                    count += j;
                }
            }
            Console.WriteLine(count);
        }
    }
}
