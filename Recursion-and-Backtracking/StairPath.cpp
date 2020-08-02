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
vector<string> stair(int n)
{
    if(n==0)
    {
        vector<string> base = {""};
        return base;
    }
    if(n<0)
    {
        vector<string> base = {};
        return base;
    }
    vector<string> path1 = stair(n-1);
    vector<string> path2 = stair(n-2);
    vector<string> path3 = stair(n-3);
    vector<string> path;
    for (auto i : path1)
    {
        path.push_back('1'+i);
    }
    for (auto i : path2)
    {
        path.push_back('2'+i);
    }
    for (auto i : path3)
    {
        path.push_back('3'+i);
    }
    return path;
}

void solve()
{
    int n;
    cin>>n;
    int totalpaths=0;
    for (auto i : stair(n))
    {
        cout<<i<<" ";
        totalpaths++;
    }
    cout<<"\n"<<totalpaths<<"\n";
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