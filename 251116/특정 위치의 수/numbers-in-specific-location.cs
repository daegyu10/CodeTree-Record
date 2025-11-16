using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int[] save = new int[10];
        string[] input = Console.ReadLine().Split();
        int sum = 0;

        for(int i = 0; i < 10; i++) {
            save[i] = int.Parse(input[i]);
            if(i == 2 || i == 4 || i == 9) {
                sum += save[i];
            }
        }
        Console.Write(sum);

    }
}
