//https://practice.geeksforgeeks.org/problems/kth-smallest-element/0
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t, k, n, in;
	cin >> t;
	while (t--)
	{
		vector<int> v;
		cin >> n;
		for(int i = 0 ; i < n ; ++i)
		{
			cin >> in;
			v.push_back(in);
		}
		cin >> k;
		priority_queue<int, vector<int>> qu(v.begin(), v.begin() + k);
		for (int i = k; i < n; ++i)
		{
			if (v[i] < qu.top())
			{
				qu.pop();
				qu.push(v[i]);
			}
		}

		cout << qu.top() << endl;

	}
	return 0;
}