using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int[] arr = new int[10];
        string[] input = Console.ReadLine().Split();

        int sum_odd = 0;
        int sum_even = 0;
        arr = Array.ConvertAll(input, int.Parse);
        
        for(int i = 0; i < 10; i++) {
            //arr[i] = int.Parse(input[i]);
            if(i % 2 == 1) {
                sum_even += arr[i];
            } else {
                sum_odd += arr[i];
            }
        }

        if(sum_even >= sum_odd) {
            Console.Write(sum_even - sum_odd);
        } else {
            Console.Write(sum_odd - sum_even);
        }

    }
}
