using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int[] arr = new int[10];
        string[] input = Console.ReadLine().Split();

        arr[0] = int.Parse(input[0]);
        arr[1] = int.Parse(input[1]);
        for(int i = 2; i < 10; i++) {
            arr[i] = arr[i-1] + (2*arr[i-2]);
        }
        for(int i = 0; i < 10; i++) {
            Console.Write(arr[i] + " ");
        }
    }
}
