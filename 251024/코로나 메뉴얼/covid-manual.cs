using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int count = 0;

        string[] input = Console.ReadLine().Split();
        char a = char.Parse(input[0]);
        int b = int.Parse(input[1]);
        if(a == 'Y') {
            if(b >= 37) {
                count++;
            }
        }

        input = Console.ReadLine().Split();
        a = char.Parse(input[0]);
        b = int.Parse(input[1]);
        if(a == 'Y') {
            if(b >= 37) {
                count++;
            }
        }

        input = Console.ReadLine().Split();
        a = char.Parse(input[0]);
        b = int.Parse(input[1]);
        if(a == 'Y') {
            if(b >= 37) {
                count++;
            }
        }
        
        if(count >= 2) {
            Console.Write('E');
        } else {
            Console.Write('N');
        }

    }
}
