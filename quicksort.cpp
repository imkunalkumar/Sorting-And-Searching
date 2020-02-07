#include<iostream>
using namespace std;
//partition funtion which returns a sorted element j
int partition(int arr[],int l,int h)
{
	int i,j,pv,temp;
	pv=arr[l];
	i=l;
	j=h+1;
	while(i<j)
	{
		do{
			i++;
		}while(arr[i]<pv&&i<=h);
		do
		{
		j--;
		}while(arr[j]>pv);
		//swapping arr[i] and arr[j] when arr[i]<pivote and arr[j]>pivote
		if(i<j)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;	
		}
	}
	//when i>=j then assign the value of arr[j] to arr[l] and pivote to arr[j]
	arr[l]=arr[j];
	arr[j]=pv;
	return j;
}
//function for quicksort
void quicksort(int arr[],int l,int h)
{
	int j;
    if(l<h)
       {
            j=partition(arr,l,h);
            quicksort(arr,l,j-1);
            quicksort(arr,j+1,h);	
       }	
}
int main()
{
 int i,n;
 cout<<"enter the no. of element in array\n";
 cin>>n;
 int arr[n];
 cout<<"enter the element of array\n";
 for(i=0;i<n;i++)
 {
 	cin>>arr[i];
 }
 quicksort(arr,0,n-1);
 //print sorted value
 cout<<"sorted array is";
 for(i=0;i<n;i++)
 {
 	cout<<" "<<arr[i];
 }
 return 0;
}
