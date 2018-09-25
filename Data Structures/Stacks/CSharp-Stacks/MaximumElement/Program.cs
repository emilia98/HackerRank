using System;
using System.Collections.Generic;

namespace MaximumElement
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int? max = null;
            var elements = new Stack<int>();
            var maxElements = new Stack<int>();
  
            for(int cnt = 1; cnt <= n; cnt++)
            {
                string command = Console.ReadLine();
                var tokens = command.Split(' ', StringSplitOptions.RemoveEmptyEntries);

                if(tokens[0] == "1")
                {
                    int x = int.Parse(tokens[1]);
                    elements.Push(x);

                    if(max == x)
                    {
                        maxElements.Push(x);
                    }
                    else if(x > max)
                    {
                        max = x;
                        maxElements = new Stack<int>();
                        maxElements.Push(x);
                    }
                    continue;
                }

                if(tokens[0] == "2")
                {
                    if(elements.Count > 0)
                    {
                        int top = elements.Pop();

                        if(top == max)
                        {
                            if(maxElements.Count > 1)
                            {
                                maxElements.Pop();
                            }
                        }
                    }
                    
                }
            }
        }
    }
}
