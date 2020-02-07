#include<iostream>
using namespace std;
//function for merge two arrays
void merge(int *a,int l,int h,int m)
{
	int i,j,k,temp[h-l+1];
	i=l;
	k=0;
	j=m+1;
	//merging the two part of array in temp array
	while(i<=m && j<=h)
	{
	if(a[i]<a[j])
	{
		temp[k]=a[i];
		k++;
		i++;
	}
	else
	{
		temp[k]=a[j];
		k++;
		j++;
	}	
	}
	//storing the remaining part of array in temp
	while(i<=m)
	{
		temp[k]=a[i];
		k++;
		i++;
	}
	while(j<=h)
	{
		temp[k]=a[j];
		k++;
		j++;
	}
	//assignment of data from temp[] to a[]
	for(i=l;i<=h;i++)
	{
	a[i]=temp[i-l];
	}
}
//function for merge sort
void msort(int *a,int l,int h)
{
	int m;
	if(l<h)
	{
	m=(l+h)/2;
//break array into two part
	msort (a,l,m);
	msort (a,m+1,h);
//call merge function	
	merge(a,l,h,m);
	}
}
int main()
{
int n,i;
cout<<"enter the no. of element of array\n";
cin>>n;
int arr[n];
//taking input of data of array
for(i=0;i<n;i++)
{
	cout<<"enter element no."<<i+1<<":";
	cin>>arr[i];
}
msort (arr,0,n-1);
cout<<"Array After Sorting\n";
//print the sorted array
for(i=0;i<n;i++)
{
cout<<" "<<arr[i];
}
return 0;			
}

