using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        string[] input = Console.ReadLine().Split();
        int[] arr = new int[10];
        int count = 0;

        for(int i = 0; i < 10; i++) {
            arr[i] = int.Parse(input[i]);
            count += arr[i];
        }
        Console.Write(count);
    }
}
