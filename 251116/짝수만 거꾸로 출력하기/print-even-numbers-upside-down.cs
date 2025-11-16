using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        int[] save = new int[a];
        string[] input = Console.ReadLine().Split();

        save = Array.ConvertAll(input, int.Parse);

        for(int i = a-1; i >= 0; i--) {
            if(save[i] % 2 == 0) {
                Console.Write(save[i] + " ");
            }
        }
    }
}
