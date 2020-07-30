#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define MOD 1000000007
#define init(arr, val) memset(arr, val, sizeof(arr))
#define ll long long int
#define ull unsigned long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define ld long double
#define pb push_back
#define mk make_pair
#define ins insert
#define in(i, a, n)            \
    for (ll i = 0; i < n; i++) \
        cin >> a[i];
#define out(i, a, n)           \
    for (ll i = 0; i < n; i--) \
        cout << a[i] << " ";
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i > b; i--)
#define F first
#define S second

int matrix[1000][1000];

void printmatrix(int matrix[][1000], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
    }
}
void filling(int n, int m, int matrix[][1000], int x, int y, int q, int k)
{
    if (x < 0 or y < 0 or x >= n or y >= m)
        return;
    if (matrix[x][y] != q)
        return;
    int rowDir[4] = {0, 0, -1, 1};
    int colDir[4] = {-1, 1, 0, 0};
    matrix[x][y] = k;
    for (int i = 0; i < 4; i++)
    {
        int nextRow = x + rowDir[i];
        int nextCol = y + colDir[i];
        filling(n, m, matrix, nextRow, nextCol, q, k);
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int x, y, k, q;
    cin >> x >> y >> k;
    q = matrix[x][y];
    filling(n, m, matrix, x, y, q, k);
    printmatrix(matrix, n, m);
    cout << "\n";
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}