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
        Console.Write(arr[0] + " " + arr[1] + " ");
        for(int i = 2; i < 10; i++) {
            arr[i] = (arr[i-1]+arr[i-2])%10;
            Console.Write(arr[i] + " ");
        }
    }
}
