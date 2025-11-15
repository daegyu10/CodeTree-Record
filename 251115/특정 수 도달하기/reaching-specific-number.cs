using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int[] arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        int sum = 0;
        double avg = 0.0;

        for(int i = 0; i <= 9; i++) {
            if(arr[i] >= 250) {
                Console.Write($"{sum} {avg/i:F1}");
                break;
            } else if(i != 9){
                sum += arr[i];
                avg += (double)arr[i];
            } else if(i == 9) {
                sum += arr[i];
                avg += (double)arr[i];
                Console.Write($"{sum} {avg/i+1:F1}");
            }
        }
    }
}
