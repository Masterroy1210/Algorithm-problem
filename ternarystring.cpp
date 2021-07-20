#include<bits/stdc++.h>
using namespace std;


bool checkwindow(int window[]){
	if(window[0]==0&&window[1]>0&&window[2]>0&&window[3]>0)return true;
	else return false;	
}


bool checkstr(string s,int mid){
	int i=0,	p=0;
	int n = s.length();
	int window[4]={0};
	for(;i<mid;i++){
		window[s[i]-'0']++;
	}
	if(checkwindow(window))return true;
	for(;i<n;i++){
		window[s[p]-'0']--;
		window[s[i]-'0']++;
		if(checkwindow(window))return true;

		p++;
	}
	return false;
}


int check(string s){
	int lo = 3,hi = s.length(),ans=1e9;
	while(lo<=hi){
			int mid = (lo+hi)/2;
			if(checkstr(s,mid)){
				ans = min(ans,mid);
				hi = mid-1;
			}else{
				lo = mid+1;
			}


	}
	if(ans!=1e9)return ans;
	else return 0;
}



int main(){
	int t;
	cin>>t;
	while(t--){

		string s;
		cin>>s;

		cout<<check(s)<<endl;


	}





	return 0;
}#include<bits/stdc++.h>
using namespace std;


bool checkwindow(int window[]){
	if(window[0]==0&&window[1]>0&&window[2]>0&&window[3]>0)return true;
	else return false;	
}


bool checkstr(string s,int mid){
	int i=0,	p=0;
	int n = s.length();
	int window[4]={0};
	for(;i<mid;i++){
		window[s[i]-'0']++;
	}
	if(checkwindow(window))return true;
	for(;i<n;i++){
		window[s[p]-'0']--;
		window[s[i]-'0']++;
		if(checkwindow(window))return true;

		p++;
	}
	return false;
}


int check(string s){
	int lo = 3,hi = s.length(),ans=1e9;
	while(lo<=hi){
			int mid = (lo+hi)/2;
			if(checkstr(s,mid)){
				ans = min(ans,mid);
				hi = mid-1;
			}else{
				lo = mid+1;
			}


	}
	if(ans!=1e9)return ans;
	else return 0;
}



int main(){
	int t;
	cin>>t;
	while(t--){

		string s;
		cin>>s;

		cout<<check(s)<<endl;


	}





	return 0;
}