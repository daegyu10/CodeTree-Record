using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int[] arr = new int[100];
        string[] input = Console.ReadLine().Split();

        for(int i = 0; i < 100; i++) {
            arr[i] = int.Parse(input[i]);
            if(arr[i] == 0) {
                break;
            } else if(arr[i] % 2 == 1) {
                Console.Write((arr[i]+3) + " ");
            } else if(arr[i] % 2 == 0) {
                Console.Write((arr[i]/2) + " ");
            }
            
        }
    }
}
