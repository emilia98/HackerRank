using System;

namespace ArraysDS
{
    class ArraysDS
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

            for (int index = 0; index < len; index++)
            {
                array[len - index - 1] = int.Parse(tokens[index]);
            }
            return array;
        }
    }
}
