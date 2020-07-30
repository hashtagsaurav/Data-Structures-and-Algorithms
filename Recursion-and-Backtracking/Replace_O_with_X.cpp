#include <bits/stdc++.h> 
using namespace std; 
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MOD 1000000007
#define init(arr,val) memset(arr,val,sizeof(arr))
#define ll 				  long long int
#define ull 			  unsigned long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define ld                long double
#define pb                push_back
#define mk                make_pair
#define ins 			  insert
#define in(i,a,n)         for(ll i=0;i<n;i++) cin>>a[i];
#define out(i,a,n)        for(ll i=0;i<n;i--) cout<<a[i]<<" ";
#define loop(i,a,b)       for(ll i=a;i<b;i++)
#define rloop(i,a,b)      for(ll i=a;i>b;i--)
#define F                 first
#define S                 second 

//const int N=20,M=20;

void printmatrix(char matrix[][20], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
    }
}

void removeO(char matrix[][20],int x,int y,int n,int m)
{
    if(x<=0 or y<=0 or x>=n-1 or y>=n-1)
        return;
    if(matrix[x][y]=='X')
        return;
    matrix[x][y] = 'X';
    int rowDir[4] = {0, 0, -1, 1};
    int colDir[4] = {-1, 1, 0, 0};
    for (int i = 0; i < 4; i++)
    {
        int nextRow = x + rowDir[i];
        int nextCol = y + colDir[i];
        removeO(matrix, nextRow, nextCol, n, m);
    }
}

void solve()
{
    int n,m;
    cin>>n>>m;
    char matrix[20][20];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(matrix[i][j]=='O' and !(i==0 or j==0 or i==n-1 or j==n-1))
            {
                removeO(matrix,i,j,n,m);
            }
        }
        
    }
    printmatrix(matrix,n,m);
    cout<<"\n";
}

int main()
{
   int t = 1;
   cin >> t;
   while(t--)
   {
       solve();
   }
   return 0;
}