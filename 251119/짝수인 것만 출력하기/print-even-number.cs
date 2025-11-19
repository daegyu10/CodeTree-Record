using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        int[] arr = new int[a];
        string[] input = Console.ReadLine().Split();
        for(int i = 0; i < a; i++) {
            arr[i] = int.Parse(input[i]);
            if(arr[i] % 2 == 0) {
                Console.Write(arr[i] + " ");
            }
        }
    }
}
