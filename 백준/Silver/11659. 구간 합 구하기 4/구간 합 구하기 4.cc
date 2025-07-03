#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	int n, m;
	int s[100001]; // 합배열

	cin >> n >> m;

	s[0] = 0;
	for (int i = 1; i <= n; i++) {
        int a;
		cin >> a;
		s[i] = s[i - 1] + a; // 합배열 저장
	}

	for (int i = 0; i < m; i++) {
        int start, end;
		cin >> start >> end;
		cout << s[end] - s[start-1] << '\n'; // 구간합 출력
	}
}