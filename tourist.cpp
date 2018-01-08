/*
	Jatin Tayal
	MNNIT CSE
*/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define os cout<<" "
#define on cout<<"\n"
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define boost ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0)

#define check1(a) cout<<a,on
#define check2(a,b) cout<<a,os,cout<<b,on
#define check3(a,b,c) cout<<a,os,check2(b,c)
#define check4(a,b,c,d) cout<<a,os,check3(b,c,d)

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

// x=LLONG_MAX,LLONG_MIN
//case dealing with pow()=find approx result using pow() function and verify for res,res+1,res-1
//__builtin_ctz(),__builtin_clz(),__builtin_popcount();//count number of set bits
//for range update+point query use prefix sum..e.g update x in a..b arr[a]+=x arr[b+1]-=x  (in loop arr[i]+=arr[i-1])
// use ncr=(n-1)c(r-1)+(n-1)c(r) when modulo is not prime
//bfs backtracking-store parent of each node
const ll N=2e5+5;
vector<ll> v[N];
ll child,visit[N],in[N],out[N],e,n,visit2[N];
pair<ll,ll> p[N];
map<pair<ll,ll>,ll> m;


void dfs(ll i){
	if(visit[i]==1)
		return;
	visit[i]=1;
	ll j;
	for(j=0;j<v[i].size();j++){
		if(visit[v[i][j]]==0)
			dfs(v[i][j]);
	}
	return;
}


void dfs2(ll i){
	if(visit2[i]==1)
		return;
	visit2[i]=1;
	ll j;
	for(j=0;j<v[i].size();j++){
		child=v[i][j];
		if(m[make_pair(child,i)]==0){
			m[make_pair(i,child)]=1;
			m[make_pair(child,i)]=2;
			dfs2(child);
		}
	}
}


int main()
{
	//boost;
	ll x,y,i;
	cin>>n>>e;

	for(i=1;i<=e;i++){
		cin>>x>>y;
		v[x].pb(y);
		v[y].pb(x);
		p[i].first=x;
		p[i].second=y;
		out[x]++;
		in[y]++;
	}

	ll count=0;
	for(i=1;i<=n;i++){
		if(visit[i]==0){
			dfs(i);
			count++;
		}
	}

	if(count!=1){
		cout<<"NO\n";
		exit(0);
	}

	for(i=1;i<=n;i++){
		if((in[i]+out[i])%2!=0){
			cout<<"NO\n";
			exit(0);
		}
		if((in[i]+out[i])==0){
			cout<<"NO\n";
			exit(0);
		}
	}

	dfs2(1);
	/*on;
	for(i=1;i<=n;i++){
		printf("%lld: in=%lld out=%lld\n",i,in[i],out[i]);
	}*/
	for(i=1;i<=e;i++){
		x=p[i].first;
		y=p[i].second;
		if(m[make_pair(x,y)]==2){
			p[i].first=y;
			p[i].second=x;
		}
	}

	cout<<"YES\n";
	for(i=1;i<=e;i++){
		cout<<p[i].first<<" "<<p[i].second<<endl;
	}

	return 0;
}
