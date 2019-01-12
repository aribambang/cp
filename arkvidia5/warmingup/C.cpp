#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	long long fibonacci[100001];

	fibonacci[1] = fibonacci[2] = 1;
	
	for (int i = 3; i <= 100000; i++){
		fibonacci[i] = ((fibonacci[i-1] % 1000000007) + (fibonacci[i-2] % 1000000007)) % 1000000007;
	}
	
	scanf("%d", &t);
	while (t--) {
		int n; scanf("%d", &n);
		printf("%lld\n", fibonacci[n] % 1000000007);
	}
	return 0;
}