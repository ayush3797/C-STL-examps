#include<iostream>
#include<numeric> //for iota
#include<algorithm>

using namespace std;
int main()
{
	cout<<"enter the size of the array\n";
	int size;
	cin>>size;
	int arr[size];
	int brr[size];
	for(int i=0;i<size;i++)
	cin>>arr[i];
	all_of(arr,arr+size,[](int x){return x>0;}) ?cout<<"yes\n":cout<<"no\n"; //if all are positive
	any_of(arr,arr+size,[](int x){return x<0;}) ?cout<<"yes\n":cout<<"no\n"; //If any element is negative
	copy_n(arr, 6, brr);
	for(int i=0;i<size;i++)
	cout<<brr[i] <<endl;
	int ar[6] =  {0};
	iota(ar,ar+6,20);
	for(int i=0;i<6;i++)
	cout<<ar[i] <<endl;
}
