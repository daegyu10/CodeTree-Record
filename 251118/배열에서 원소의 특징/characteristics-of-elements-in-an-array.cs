using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int[] arr = new int[10];
        string[] input = Console.ReadLine().Split();
        int point = 0;

        for(int i = 0; i < 10; i++) {
            arr[i] = int.Parse(input[i]);
            if(arr[i] % 3 == 0) {
                Console.Write(arr[i-1]);
                break;
            }
        }

    }
}
