// *Click Clack Noises* by YeGo
// At 2024-06-01 16:19:51
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
	readVar(ll, n)

	while (n > 1) {
		cout << n << " ";
		if (n % 2 == 0)
			n /= 2;
		else
			n = 3 * n + 1;
	}
	cout << n << endl;
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
