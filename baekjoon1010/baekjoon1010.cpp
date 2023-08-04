#include <iostream>

using  namespace std;

unsigned long long facto( int);

int main() {

    int t, n, m;

    // 테스트 케이스 개수
    cin >> t;

    //unsigned int tmp;
    unsigned int *res = new unsigned int[t];
    unsigned int tmp;
    // 0 < n <= m < 30
    for (int i = 0; i < t; i++) {
        tmp = 1;
        cin >> n >> m;
        for (int i = 0, tm = m; i < m - n; i++, tm--)
            tmp *= tm;
        res[i] = tmp / facto(n);
        cout << tmp << " / " << facto(n) << " = " << res[i] << endl;
    }

    for (int i = 0; i < t; i++)
        cout << res[i] << endl;
    
}

unsigned long long facto(int n) {
    //unsigned int res = 1;
    if (n <= 1) return 1;
    else return n * facto(n - 1);
    /*for(int i=1; i<=n; i++) 
        res *= i;
    
    return res;*/
}

