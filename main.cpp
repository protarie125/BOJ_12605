#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int n;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n;
	string line;
	getline(cin, line);
	for (auto i = 1; i <= n; ++i) {
		getline(cin, line);

		auto iss = istringstream{ line };
		string s;
		auto ss = vector<string>{};
		while (iss >> s) {
			ss.push_back(s);
		}

		reverse(ss.begin(), ss.end());

		cout << "Case #" << i << ": ";

		for (const auto& x : ss) {
			cout << x << ' ';
		}
		cout << '\n';
	}

	return 0;
}