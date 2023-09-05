#include<stdio.h>
#include<stdlib.h>
binarysearch(int a[],int n,int ch)
{
	int l=0,h=n-1,mid;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(ch==a[mid])
		{
			return mid;
		}
		else if(ch>a[mid])
		{
			l=mid+1;
		}
		else(ch<a[mid])
		{
			h=mid-1;
		}
	}
	return -1;
}
main()
{
int a[]={12,16,22,24,27,34,44,54,61,78};
int n,i,ch,r;
n=sizeof(a)/sizeof(a[0]);
printf("element are.....\n");
for(i=0;i<n;i++)
printf("%d",a[i]);
printf("enter search elemrnt of the array");
scanf("%d",&ch);
	r=binary search (a,n,ch);
	if (r==-1)
	{
		printf("element are not in the array");
	}
	else 
	{
		printf("element are found at index %d",r)
	}
}
