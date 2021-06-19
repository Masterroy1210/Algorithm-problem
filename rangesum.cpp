#include<iostream>
using namespace std;




int main(){
	long long int n,q;
	cin>>n>>q;
	long long int arr[n];
	arr[0]=0;
	for(long long int i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(long long int i=1;i<=n;i++){
		arr[i]= arr[i-1]+arr[i];
	}
		while(q--){
			long long int l,r;
			cin>>l>>r;
			long long int sum = 0;
			if(l==1 && r==n) sum = arr[r];
			else{
				sum = arr[r]-arr[l-1];
			}
			cout<<sum<<endl;

		}






	return 0;
}