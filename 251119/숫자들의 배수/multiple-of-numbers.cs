using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int[] arr = new int[1];
        int a = int.Parse(Console.ReadLine());
        arr[0] = a;

        int count = 0;
        while(true) {
            if(arr[0] % 5 == 0)
            {
                count++;
            }

            Console.Write(arr[0] + " ");
            arr[0] += a;
            
            if(count == 2) {
                break;
            }
        }
    }
}
