/**
 *    Author: Nachiket Kanore
 *    Created: Sunday 10 December 2023 12:03:27 AM IST
 **/
#include "bits/stdc++.h"
using namespace std;

#ifdef DEBUG
#include "debug.h"
#else
#define see(...) ;
#endif

#define int int64_t
#define sz(x) (int)(x.size())
#define ALL(x) (x).begin(), (x).end()
#define F0R(i, R) for (int i = (0); i < (R); ++i)
#define FOR(i, L, R) for (int i = (L); i <= (R); ++i)

vector<vector<int>> values;

void input() {
	// freopen("sample.txt", "r", stdin);
	freopen("input.txt", "r", stdin);
	string line;
	while (cin >> line) {
		int num = 0;
		vector<int> value;
		for (char ch : line) {
			if (isdigit(ch)) {
				num = num * 10 + (ch - '0');
			} else {
				value.push_back(num);
				num = 0;
			}
		}
		assert(num != 0);
		value.push_back(num);
		values.push_back(value);
	}
}

void solve_part_one() {
	int ans = 0;
	for (auto value : values) {
		sort(ALL(value));
		ans += 2 * (value[0] * value[1] + value[0] * value[2] + value[1] * value[2]);
		ans += value[0] * value[1];
	}
	cout << "part one answer = " << ans << '\n';
}

void solve_part_two() {
	int ans = 0;
	for (auto value : values) {
		sort(ALL(value));
		ans += value[0] * value[1] * value[2];
		ans += 2 * (value[0] + value[1]);
	}
	cout << "part two answer = " << ans << '\n';
}
int32_t main() {
	input();
	solve_part_one();
	solve_part_two();
}
