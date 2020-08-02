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

vector<string> maze(int srow,int scol,int drow,int dcol)
{
    if(srow==drow and scol==dcol)
    {
        vector<string> base = {""};
        return base;
    }
    vector<string> path;
    for (int i = 1; i <= dcol-scol; i++)
    {
        vector<string> h = maze(srow,scol+i,drow,dcol);
        for (auto val : h)
        {
            path.push_back("h"+to_string(i)+val);
        }
        
    }
    for (int i = 1; i <= drow-srow; i++)
    {
        vector<string> v = maze(srow+i,scol,drow,dcol);
        for (auto val : v)
        {
            path.push_back("v"+to_string(i)+val);
        }
        
    }
    for (int i = 1; i <= drow-srow and i<=dcol-scol; i++)
    {
        vector<string> d = maze(srow+i,scol+i,drow,dcol);
        for (auto val : d)
        {
            path.push_back("d"+to_string(i)+val);
        }
        
    }
    return path;
}

void solve()
{
    int r,c;
    cin>>r>>c;
    vector<string> ans = maze(1,1,r,c);
    for (auto i : ans)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
    cout<<ans.size();
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