#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("iterator.vec.inp", "r", stdin);
	freopen("iterator.vector.out", "w", stdout);
	#endif
	vector<int> v(2, 10); // {10, 10};
	vector<int>::iterator sth = v.begin();
	sth++;
	cout << *sth << endl;


	return 0;
}
