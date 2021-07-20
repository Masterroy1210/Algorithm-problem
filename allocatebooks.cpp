#include<bits/stdc++.h>
using namespace std;

bool isfeasible(int pages[],int stu,int n,int mid){
	int currpages = 0 ,currstu=1;
	
	for(int i=0;i<n;i++){
		if(pages[i]>mid)return false;
		if(pages[i]+currpages>mid){
			currstu++;
			currpages+=pages[i];
		}else{
			currpages+=pages[i];
		}
	}
	if(currstu>stu)return false;
	else return true;
}

int minmaxpages(int pages[],int n,int stu){
		int lo = *min_element(pages,pages+n);
		int hi=0;
		int res = 1e9;
		for(int i=0;i<n;i++)hi+=pages[i];

			while(lo<=hi){
				int mid = (lo+hi)/2;

				if(isfeasible(pages,stu,n,mid)){
					res = min(res,mid);
					hi=mid-1;
				}else{
					lo = mid+1;
				}
			}
			return res;
}





int main(){
	int n;
	cin>>n;
	int pages[n];
	for(int i=0;i<n;i++){
		cin>>pages[i];
	}
	int stu;
	cin>>stu;
	cout<<minmaxpages(pages,n,stu)<<endl;
		return 0;

}



