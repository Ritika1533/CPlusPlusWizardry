#include<iostream>
#include<climits>
using namespace std;
int getMax(int array[],int size){
	int maxi=array[0];

	for(int i=0;i<size;i++){
		if(array[i]>maxi){
			maxi=array[i];
		}
	}
	return maxi;
}
int getMin(int array[],int size){
	int mini=array[0];
	
	for(int i=0;i<size;i++){
		if(array[i]<mini){
			mini=array[i];
		}
	}
	return mini;
}
void printArray(int array[],int size){
	for(int i=0;i<size;i++){
		cout<<array[i];
		cout<<"\t";
	}
}
int main(){
	int n;
	int array[100];
	cout<<"enter the size of array"<<endl;
	cin>>n;
	cout<<"enter the element of array"<<endl;
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	cout<<endl;
	printArray(array,n);
	cout<<endl;
	cout<<"max element of array: "<<getMax(array,n)<<endl;
	cout<<"min element of array: "<<getMin(array,n)<<endl;
}