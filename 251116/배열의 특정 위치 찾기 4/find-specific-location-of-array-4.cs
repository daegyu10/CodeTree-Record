using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int[] save = new int[10];
        string[] input = Console.ReadLine().Split();
        int count = 0;
        int sum = 0;

        for(int i = 0; i < 10; i++) {
            save[i] = int.Parse(input[i]);
            if(save[i] == 0) {
                break;
            }
            if(save[i] % 2 == 0) {
                sum += save[i];
                count++;
            }
        }
        Console.Write(count + " " + sum);

    }
}
