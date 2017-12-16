#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	cout<<"Enter the size of the array\n";
	int size;
	cin>> size;
	int arr[size];
	for(int i=0;i<size;i++)
	cin>> arr[i];
	sort(arr,arr+size);
	if(binary_search(arr,arr+size,2))   //binary_search(startaddress, endaddress, valuetofind)
	cout<<"\nYes there is 2";
}

