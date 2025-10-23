using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        string[] input1 = Console.ReadLine().Split();
        string[] input2 = Console.ReadLine().Split();

        int a_age = int.Parse(input1[0]);
        char a_gender = char.Parse(input1[1]);

        int b_age = int.Parse(input2[0]);
        char b_gender = char.Parse(input2[1]);

        if((a_age >= 19 && a_gender == 'M') || (b_age >= 19 && b_gender == 'M')) {
            Console.Write("1");
        } else {
            Console.Write("0");
        }
    }
}
