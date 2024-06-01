// *Click Clack Noises* by YeGo
// At 2024-06-01 16:42:49
// Wrong answer on test 69 incoming...
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'
#define readVar(_type, _name) _type _name; cin >> _name;
#define readVect(_type, _name, _size) vector<_type> _name(_size); for (auto &_xi: _name) cin >> _xi;

void solve()
{
	readVar(ll, n);
	ll sum = 0;
	for (int i = 0; i < n - 1; ++i) {
		readVar(ll, xi);
		sum += xi;
	}
	cout << (n * (n + 1) / 2 - sum) << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	// cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}
