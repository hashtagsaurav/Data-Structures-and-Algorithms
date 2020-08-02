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

vector<string> maze(int row,int col)
{
    vector<string> h;
    vector<string> v;
    if(row==0 and col==0)
    {
        vector<string> base = {""};
        return base;
    }
    if(col>0)
    {
        h = maze(row,col-1);
    }
    if(row>0)
    {
        v = maze(row-1,col);
    }
    vector<string> path;
    for (auto i : h)
    {
        path.push_back("h"+i);
    }
    for (auto i : v)
    {
        path.push_back("v"+i);
    }
    return path;
}

void solve()
{
    int r,c;
    cin>>r>>c;
    vector<string> ans = maze(r-1,c-1);
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