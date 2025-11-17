using System;

public class Codetree
{
    public static void Main()
    {
        // 변수 선언 (k : 0이 들어있는 인덱스의 번호)
        int[] arr = new int[100];
        int k = 0;

        // 최대 100개의 정수를 배열에 입력받아 저장합니다.
        string[] input = Console.ReadLine().Split();
        arr = Array.ConvertAll(input, int.Parse);

        // 0이 입력된 위치를 확인합니다.
        for (int i = 0; i < 100; i++)
        {
            if (arr[i] == 0)
            {
                k = i;
                break;
            }
        }

        // 출력
        Console.WriteLine((arr[k - 3] + arr[k - 2] + arr[k - 1]).ToString());
    }
}