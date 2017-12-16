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
	sort(arr,arr+size); //sort(startaddress, endaddress)
	for(int i=0;i<size;i++)
	cout<< arr[i];
}
