using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a;
        while(true) {
            a = int.Parse(Console.ReadLine());
            if(a == 1) {
                Console.WriteLine("John");
            } else if(a == 2) {
                Console.WriteLine("Tom");
            } else if(a == 3) {
                Console.WriteLine("Paul");
            } else if(a == 4) {
                Console.WriteLine("Sam");
            } else {
                Console.WriteLine("Vacancy");
                break;
            }
        }
    }
}
