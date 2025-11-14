using System;

public class Codetree
{  
    public static void Main()
    {
        // Please write your code here.
        var input = Console.ReadLine().Split();
        int a = int.Parse(input[0]);
        int b = int.Parse(input[1]);
        int count_num = 0;

        for(int i = a; i <= b; i++) { 
            int count_div = 0;
            for(int j = 1; j < i; j++) {//자기 자신은 제외해야함. 안그러면 28에서 28까지 약수로 더해서 총합 58됨.
                if(i % j == 0) {
                    count_div += j;
                }
            }
            //Console.Write(i + " " + count_div + "\n");

            if(i == count_div) {
                count_num++;
            }

        }
        Console.Write(count_num);
    }
}
