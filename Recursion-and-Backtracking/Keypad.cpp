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

vector<string> keys = {".","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};

vector<string> kpc(string s)
{
    if(s.length()==0)
    {
        vector<string> base = {""};
        return base;
    }
    char c = s[0];
    string str = s.substr(1);
    vector<string> rest = kpc(str);
    vector<string> res;
    string val = keys[c-'0'];
    for (int i = 0; i < val.size(); i++)
    {
        for (auto v : rest)
        {
            res.push_back(val[i]+v);
        }
        
    }
    return res;
}
void solve()
{
    string s;
    cin>>s;
    vector<string> ans;
    ans = kpc(s);
    for (auto i : ans)
    {
        cout<<i<<" ";
    }
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