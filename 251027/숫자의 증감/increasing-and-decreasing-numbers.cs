using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        string[] input = Console.ReadLine().Split();
        char a = char.Parse(input[0]);
        int b = int.Parse(input[1]);
        if(a == 'A') {
            for(int i = 1; i <= b; i++) {
                Console.Write(i + " ");
            }
        } else if(a == 'D') {
            for(int i = b; i >= 1; i--) {
                Console.Write(i + " ");
            }
        }
    }
}
