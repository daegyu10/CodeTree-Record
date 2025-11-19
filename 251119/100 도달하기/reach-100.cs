using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int[] arr = new int[100];
        int a = int.Parse(Console.ReadLine());
        arr[0] = 1;
        arr[1] = a;
        Console.Write(arr[0] + " " + arr[1] + " ");
        for(int i = 2; i < 100; i++) {
            arr[i] = arr[i-1] + arr[i-2];
            Console.Write(arr[i] + " ");
            if(arr[i] >= 100) {
                break;
            }
        }
    }
}

