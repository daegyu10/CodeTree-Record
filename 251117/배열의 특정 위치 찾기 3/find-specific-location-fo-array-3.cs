using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int[] save = new int[100];
        string[] input = Console.ReadLine().Split();

        int save_size = input.Length;
        for(int i = 0; i < save_size; i++) {
            save[i] = int.Parse(input[i]);
        }

        int point;
        for(int i = 0; i < save_size; i++) {
            if(save[i] == 0) {
                point = i;
                Console.Write(save[i-3] + save[i-2] + save[i-1]);
                break;
            }
        }

        
    }
}
