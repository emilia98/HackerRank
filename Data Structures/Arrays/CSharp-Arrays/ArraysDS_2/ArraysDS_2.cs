using System;

namespace ArraysDS_2
{
    class ArraysDS_2
    {
        static void Main()
        {
            int n = int.Parse(Console.ReadLine());
            var tokens = Console.ReadLine().Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);

            var result = ReverseArrays(tokens, n);
            Console.WriteLine(String.Join(" ", result));
        }

        static int[] ReverseArrays(string[] tokens, int n)
        {
            int len = tokens.Length;
            int[] array = new int[n];
            int cnt = 0;

            for(int index = tokens.Length - 1; index >= 0; index--, cnt++)
            {
                array[cnt] = int.Parse(tokens[index]);
            }

            return array;
        }
    }
}
