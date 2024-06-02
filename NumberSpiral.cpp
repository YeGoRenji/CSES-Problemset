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

	ll maxXY = max(x, y);
	ll minXY = min(x, y);

	bool even = maxXY % 2 == 0;

	ll from = (maxXY - 1) * (maxXY - 1) + 1;
	ll to = maxXY * maxXY;

	// cout << "from " << from << " to " << to << endl;

	// ll result = 0;
	// if (x > y) {
	// 	if (even)
	// 		result = from + (minXY - 1);
	// 	else
	// 		result = to - (minXY - 1);
	// } else {
	// 	if (even)
	// 		result = to - (minXY - 1);
	// 	else
	// 		result = from + (minXY - 1);
	// }

	bool XxorE = (x > y) xor even;

	ll result = !XxorE * (from + (minXY - 1)) + XxorE * (to - (minXY - 1));

	cout << result << endl;
}

// X*E*F + X*!E*T + !X*E*T + !X*!E*F
// F*(X*E + !X*!E) + (X*!E + !X*E)* T
// F * (X xnor E) + (X xor E) * T

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
