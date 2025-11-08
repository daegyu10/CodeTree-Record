using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        int a = int.Parse(Console.ReadLine());
        int count = 1;
        int emp_count_a = a-1;
        int emp_count_b = 0;

        for(int i = 0; i < (a*2)-1; i++) {
            for(int j = 0; j < emp_count_a; j++) {
                Console.Write("  ");
            }
            for(int j = 0; j < count; j++) {
                Console.Write("@ ");
            }
            for(int j = 0; j < emp_count_b; j++) {
                Console.Write("  ");
            }
            Console.WriteLine("");
            if(i >= a-1) {
                count--;
                emp_count_b++;
            } else {
                count++;
                emp_count_a--;
            }
        }
    }
}
