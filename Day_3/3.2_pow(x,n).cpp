#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	if(n==0) return 1;
	long long res = 1;
	long long num = x % m;
	while(n>0) {
		if(n&1) {
			res = (res*num) %m;
		}
		num = (num*num) %m;
		n = n>>1;
	}
	return static_cast<int>(res);
}