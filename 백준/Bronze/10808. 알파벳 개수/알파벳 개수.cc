#include "iostream"
#include "string"
#include "vector"

int main()
{
	std::string S;
	int SCnt;
	std::vector<int> Alphabet(26, 0);
	int Index;

	std::cin >> S;
	SCnt = size(S);

	for (int i = 0; i < SCnt; i++)
	{
		Index = S[i] - 97;
		Alphabet[Index] += 1;
	}

	for (int i = 0; i < 26; i++)
	{
		std::cout << Alphabet[i] << " ";
	}

	return 0;
}