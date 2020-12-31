#include <bits/stdc++.h>
using namespace std;

int main()
{
	mt19937 rng((unsigned int) chrono::steady_clock::now().time_since_epoch().count());
	int t = rng() % 100 + 1;
	return 0;
}

// cerr << "[Execution : " << (1.0 * clock()) / CLOCKS_PER_SEC << "s]\n";
