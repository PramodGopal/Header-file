#include<stdio.h>
#include "imer.h"
#include "im.h"
void imerge(int f,int m,int l,int a[])
{
	int i,j,b[1000],k,n;
	i=f;
	k=f;
	j=m+1;
	while(i<=m && j<=l)
	{
		if(a[i]<a[j])
			b[k++]=a[i++];
		else
			b[k++]=a[j++];
	}
	if(i>m)
	{

		for(n=j;n<=l;n++)
			b[k++]=a[n];
	}
	else
	{
		for(n=i;n<=l;n++)
			b[k++]=a[n];
	}
	for(n=f;n<=l;n++)
		a[n]=b[n];
}
void imerge_sort(int l,int h,int a[])
{
	int m;
	if(l<h)
	{
		m=(l+h)/2;
		imerge_sort(l,m,a);
		imerge_sort(m+1,h,a);
		imerge(l,m,h,a);
	}
}