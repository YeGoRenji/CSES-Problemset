// *Click Clack Noises* by YeGo
// At 2024-06-01 19:47:30
// Wrong answer on test 69 incoming...
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'
#define readVar(_type, _name) _type _name; cin >> _name;
#define readVect(_type, _name, _size) vector<_type> _name(_size); for (auto &_xi: _name) cin >> _xi;
#define F0R(_i, _n) for (size_t _i = 0; i < (size_t)(n); ++i)

void solve()
{
	readVar(int, y);
	readVar(int, x);
	ll upperPower2 = 1;

	if (x == 0 && y == 0) {
		cout << '1' << endl;
		return ;
	}

	int maxXY = max(x, y);
	int minXY = min(x, y);

	ll from = (maxXY - 1) * (maxXY - 1) + 1;
	ll to = maxXY * maxXY;

	// TODO: complete
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}
