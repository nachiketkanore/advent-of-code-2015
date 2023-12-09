/**
 *    Author: Nachiket Kanore
 *    Created: Sunday 10 December 2023 12:25:14 AM IST
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

const int N = 9020;
int mat[N][N];

int32_t main() {

	int prev = 20151125;
	mat[1][1] = prev;

	auto inside = [&](
				  int i, int j) { return i > 0 && i <= N && j > 0 && j <= N; };

	FOR(i, 2, N - 1) {
		int x = i, y = 1;

		while (inside(x, y)) {
			int nxt = (prev * 252533) % 33554393;
			mat[x][y] = nxt;
			prev = nxt;
			x--, y++;
		}
	}
	FOR(i, 1, 6) FOR(j, 1, 6) cout << mat[i][j] << " \n"[j == 6];

	cout << mat[3010][3019];
}
