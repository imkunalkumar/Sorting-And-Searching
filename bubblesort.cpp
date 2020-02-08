#include<iostream>
using namespace std;
void bubble(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main()
{
 int i,n;
 cout<<"enter the no. of element in array\n";
 cin>>n;
 int arr[n];
 cout<<"enter element of array\n";
 for(i=0;i<n;i++)
 {
 	cin>>arr[i];
 }
 bubble(arr,n);
 //print sorted value
 cout<<"sorted array is";
 for(i=0;i<n;i++)
 {
 	cout<<" "<<arr[i];
 }
 return 0;
}
