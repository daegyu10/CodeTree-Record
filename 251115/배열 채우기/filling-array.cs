using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        double[] save = new double[10];
        string[] input = Console.ReadLine().Split();
        int count = 0;

        for(int i = 0; i < 10; i++) {
            save[i] = double.Parse(input[i]);
            if(save[i] == 0) {
                break;
            }
            count = i;
        }
        for(int j = count; j >= 0; j--) {
            Console.Write(save[j] + " ");
        }
    }
}
