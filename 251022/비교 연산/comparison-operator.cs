using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        string[] input = Console.ReadLine().Split();
        int a = int.Parse(input[0]);
        int b = int.Parse(input[1]);

        if(a>=b) {
            Console.WriteLine("1");
        } else {
            Console.WriteLine("0");
        }

        if(a>b) {
            Console.WriteLine("1");
        } else {
            Console.WriteLine("0");
        }

        if(b>=a) {
            Console.WriteLine("1");
        } else {
            Console.WriteLine("0");
        }

        if(b>a) {
            Console.WriteLine("1");
        } else {
            Console.WriteLine("0");
        }

        if(a==b) {
            Console.WriteLine("1");
        } else {
            Console.WriteLine("0");
        }

        if(a!=b) {
            Console.WriteLine("1");
        } else {
            Console.WriteLine("0");
        }
        
    }
}
