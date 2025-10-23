using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        string[] input1 = Console.ReadLine().Split();
        string[] input2 = Console.ReadLine().Split();

        int a_math = int.Parse(input1[0]);
        int a_eng = int.Parse(input1[1]);
        int b_math = int.Parse(input2[0]);
        int b_eng = int.Parse(input2[1]);

        if(a_math > b_math) {
            Console.Write("A");
        } else if(b_math > a_math) {
            Console.Write("B");
        }

        if(a_math == b_math) {
            if(a_eng > b_eng) {
                Console.Write("A");
            } else {
                Console.Write("B");
            }
        }
    }
}
