#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("vector.inp", "r", stdin);
	freopen("vector.out", "w", stdout);
	#endif
	vector<int> v(2, 10); // {10, 10};
	v.push_back(1); // {10, 10, 1};
	v.push_back(0); // {10, 10, 1, 0};
	cout << v.size() << endl;
	cout << v[3] << endl;

	// foreach : Range base for loop (C++11 above...);
	for (int i : v) cout << i << " ";

	return 0;
}
