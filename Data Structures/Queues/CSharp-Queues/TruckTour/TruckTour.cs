using System;
using System.Collections.Generic;

namespace TruckTour
{
    class TruckTour
    {
        static void Main()
        {
            /*
            int n = int.Parse(Console.ReadLine());
            var distances = new List<int>();
            var petrolAmounts = new List<int>();
            var tour = new Queue<int>();

            for(int cnt = 1; cnt <= n; cnt++)
            {
                string input = Console.ReadLine();
                var tokens = input.Split(new char[] { ' '}, StringSplitOptions.RemoveEmptyEntries);

                int amount = int.Parse(tokens[0]);
                int distance = int.Parse(tokens[1]);

                distances.Add(distance);
                petrolAmounts.Add(amount);
                tour.Enqueue(cnt - 1);
            }
            */

            int n = int.Parse(Console.ReadLine());
            var balances = new List<int>();
            var pumps = new Queue<int>();

            for (int cnt = 1; cnt <= n; cnt++)
            {
                string input = Console.ReadLine();
                var tokens = input.Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);

                int petrolAmount = int.Parse(tokens[0]);
                int distance = int.Parse(tokens[1]);
                int balance = petrolAmount - distance;

                balances.Add(balance);
                pumps.Enqueue(cnt - 1);
            }

            int rotates = 1;

            while (rotates <= n)
            {
                int startIndex = pumps.Peek();
                bool hasResult = true;
                int pumpsPassed = 1;
                long currentBalance = 0;

                while (pumpsPassed <= n)
                {
                    int pumpIndex = pumps.Dequeue();
                    pumps.Enqueue(pumpIndex);

                    int pumpBalance = balances[pumpIndex];
                    currentBalance += pumpBalance;

                    if (currentBalance < 0)
                    {
                        hasResult = false;
                        break;
                    }

                    pumpsPassed++;
                }

                if (hasResult == true)
                {
                    Console.WriteLine(startIndex);
                    break;
                }

                rotates++;
            }
        }
    }
}
