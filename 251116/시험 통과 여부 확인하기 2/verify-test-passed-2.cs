using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        int[] save = new int[4];
        int count = 0;

        for(int i = 0; i < a; i++) {
            int sum = 0;
            string[] input = Console.ReadLine().Split();
            for(int j = 0; j < 4; j++) {
                save[j] = int.Parse(input[j]);
                sum += save[j];
            }
            if(sum/4 >= 60) {
                Console.WriteLine("pass");
                count++;
            } else {
                Console.WriteLine("fail");
            }
        }
        Console.Write(count);


    }
}
