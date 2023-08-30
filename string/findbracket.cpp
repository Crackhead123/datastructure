// C++ program to find an index k which
// decides the number of opening brackets
// is equal to the number of closing brackets
#include <bits/stdc++.h>
using namespace std;

// Function to find an equal index
int findIndex(string str)
{
	// STL to count occurrences of ')'
	int cnt_close = count(str.begin(), str.end(), ')');
	for (int i = 0; str[i] != '\0'; i++)
		if (cnt_close == i)
			return i;
	// If no opening brackets
	return str.size();
}

// Driver code
int main()
{
	string str = "(()))(()()())))";
	cout << findIndex(str);
	return 0;
}

// This code is contributed by Dhananjay Dhawale @chessnoobdj
