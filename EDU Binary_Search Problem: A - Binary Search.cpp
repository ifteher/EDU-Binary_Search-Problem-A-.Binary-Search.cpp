///   ***   ---   |||         In the name of ALLAH        |||   ---   ***   ///



#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
#define input(v)   for(auto &x: v)cin>>x
#define SetBit(x,k) (x|=(1LL<<k))
#define ClearBit(x,k) (x&=~(1LL<<k))
#define CheckBit(x,k) ((x>>k)&1)
#define ChangeBit(x,k) (x^=(1LL<<k))
#define mod 1000000007
#define N 100005

ll fx[]={0,0,1,-1,1,1,-1,-1};
ll fy[]={1,-1,0,0,-1,1,-1,1};

void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}

ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }
bool binary_search(vector<ll>&v,ll key)
{
    ll l=0,r=v.size()-1,mid;

     while(l<=r)
     {
         mid=l+(r-l)/2;
         if(key==v[mid])
         {
             return true;//Element found;
         }
         else if(key<v[mid])
         {
             r=mid-1;
         }
         else
         {
             l=mid+1;
         }
     }
     return false;//Element not found;
}
int main()
{
    optimize();
 ll n,k;
 cin>>n>>k;
 vector<ll>v(n);
 for(ll i=0;i<n;i++)
 {
     cin>>v[i];
 }
 while(k--)
 {
     int key;
     cin>>key;
     if(binary_search(v,key))
     {
         cout<<"YES"<<endl;
     }
     else cout<<"NO"<<endl;

 }
return 0;
}

