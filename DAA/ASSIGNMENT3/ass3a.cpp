//SORTING ARRAY USING GREEDY APPROCH
#include<iostream>
using namespace std;
void minSortArray(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		if(min!=i){
			swap(a[i],a[min]);
		}
	}
}

int main(){
	int num,a[50];
	cout<<"enter the number of terms of array"<<endl;
	cin>>num;
	cout<<"enter the element of array"<<endl;
	for(int i=0;i<num;i++){
		cin>>a[i];
	}
	cout<<"unsorted array is "<<endl;
	for(int i=0;i<num;i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	minSortArray(a,num);
		cout<<"sorted array is "<<endl;
	for(int i=0;i<num;i++){
		cout<<a[i]<<"\t";
	}
}