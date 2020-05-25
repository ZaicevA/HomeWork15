#include <iostream>

void PrintNums(int N, bool isTypingOdds)
{
	for (int i = 0; i <= N; i++)
	{
		if ((i % 2 != 0) == isTypingOdds)
			std::cout << i << "\n";
	}
}

int main()
{
    const int n = 20;
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
			std::cout << i << "\n";
	}
	std::cout << "first check" << "\n";
	PrintNums(9, true);
	std::cout << "second check" << "\n";
	PrintNums(9, false);
}