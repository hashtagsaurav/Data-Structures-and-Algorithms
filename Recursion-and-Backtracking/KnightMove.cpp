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

const int val = 8;

bool canplace(int board[val][val], int row, int col, int n)
{
    return row >= 0 && col >= 0 && row < n && col < n && board[row][col] == 0;
}

bool knightmove(int board[val][val], int currow, int curcol, int n, int move_no)
{
    if (move_no > n * n)
        return true;
    int rowdir[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int coldir[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
    for (int curdir = 0; curdir < 8; curdir++)
    {
        int nextrow = currow + rowdir[curdir];
        int nextcol = curcol + coldir[curdir];
        if (canplace(board, nextrow, nextcol, n))
        {
            board[nextrow][nextcol] = move_no + 1;
            if (knightmove(board, nextrow, nextcol, n, move_no + 1))
                return true;
            board[nextrow][nextcol] = 0; //backtracking
        }
    }
    return false;
}

void printboard(int board[val][val], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(3) << board[i][j];
        }
        cout << "\n";
    }
}

void solve()
{
    int n;
    n = val;
    int board[val][val] = {0};
    printboard(board, n);
    int currow = 0, curcol = 0;
    //cin>>currow>>curcol;
    board[0][0] = 1;
    if (knightmove(board, currow, curcol, n, 1))
    {
        printboard(board, n);
    }
    else
    {
        cout << "cant\n";
    }
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