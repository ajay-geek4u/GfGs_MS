//https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem/0
//Complexity : O(n)
#include <bits/stdc++.h>
using namespace std;
char order[9] = { '!' , '#' , '$', '%',  '&', '*', '@', '^', '~'};
bool m[9];
void setc(char c)
{
	int i;
	for (i = 0; i < 9; ++i)
	{
		if (c==order[i])
			break;
	}
	m[i] = 1;
}

int main() {
	//code
	int t, n;
	char in;
	cin >> t;
	while (t--)
	{
		cin >> n;
		memset(m, 0, sizeof(m));
		for (int i = 0; i < n; ++i)
		{
			cin >> in;
			setc(in);
		}
		for (int i = 0; i < n; ++i)
			cin >> in;
		for (int j = 0; j < 2; ++j)
		{
			for (int i = 0; i < 9; ++i)
			{
				if (m[i])
					cout << order[i] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
