#include<iostream>
using namespace std;
int binary_search(int ar[],int n,int key){
	int start = 0;
	int end = n-1;
	while(start <= end){
		int mid = (start+end)/2;
		if(ar[mid] == key){
			return mid;
		}else if(ar[mid] > key){
			end = mid-1;
		}else if (ar[mid] < key){
			start = mid+1;
		}
	}
	return -1;
}

int main(){
	int ar[]={1,2,3,4,5,6,7,8};
	int ans = binary_search(ar,8,9);
	if(ans != -1)
		cout<<ans<<endl;
	else
		cout<<"Not  Found!!!"<<endl;
}
