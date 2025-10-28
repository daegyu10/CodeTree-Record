using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());

        while(a <= 100) {
            if(a < 60) {
                Console.Write("F ");
            } else if(a < 70) {
                Console.Write("D ");
            } else if(a < 80) {
                Console.Write("C ");
            } else if(a < 90) {
                Console.Write("B ");
            } else {
                Console.Write("A ");
            }
            a++;
        }
    }
}
