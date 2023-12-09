/**
 *    Author: Nachiket Kanore
 *    Created: Saturday 09 December 2023 11:57:47 PM IST
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

int part_one(string line) {
	int balance = 0;
	for (char ch : line) {
		if (ch == '(')
			++balance;
		if (ch == ')')
			--balance;
	}
	return balance;
}

int part_two(string line) {

	int balance = 0, id = 0;
	for (char ch : line) {
		id += 1;
		if (ch == '(')
			++balance;
		if (ch == ')')
			--balance;
		if (balance == -1) {
			return id;
		}
	}
	assert(false);
	return -1;
}

int32_t main() {
	freopen("input.txt", "r", stdin);
	string line;
	cin >> line;
	cout << part_one(line) << '\n';
	cout << part_two(line) << '\n';
}
