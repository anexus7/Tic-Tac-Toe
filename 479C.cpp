#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	long long n;
	cin>>n;
	
	pair<long long, long long> p;
	vector<pair<long long,long long> >v;
	for(long long i=0;i<n;i++){
		cin>>p.first>>p.second;
		v.push_back(p);
	}
	
	sort(v.begin(), v.end());
	
	long long int ans=-1;
	for(int i=0;i<n;i++){
		if(ans<=v[i].second){
			ans=v[i].second;
		}
		else{
			ans=v[i].first;
		}
	}
	cout<<ans<<endl;
	return 0;
}

