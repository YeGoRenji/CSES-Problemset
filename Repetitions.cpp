// *Click Clack Noises* by YeGo
// At 2024-06-01 17:05:28
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
	readVar(string, seq);

	ll maxRep  = 1;
	ll current = 1;

	for (size_t i = 0; i < seq.size(); ++i) {
		if (i == 0)
			continue;
		if (seq[i] == seq[i - 1])
			current++;
		else {
			maxRep = max(maxRep, current);
			current = 1;
		}
	}
	maxRep = max(maxRep, current);
	cout << maxRep << endl;
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
