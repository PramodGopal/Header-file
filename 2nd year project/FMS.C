#include<stdio.h>
#include "fmer.h"
#include "fm.h"
void fmerge(int f,int m,int l,float ar[])
{
	int i,j,k,n;
	float b[1000];
	i=f;
	k=f;
	j=m+1;
	while(i<=m && j<=l)
	{
		if(ar[i]<ar[j])
			b[k++]=ar[i++];
		else
			b[k++]=ar[j++];
	}
	if(i>m)
	{

		for(n=j;n<=l;n++)
			b[k++]=ar[n];
	}
	else
	{
		for(n=i;n<=l;n++)
			b[k++]=ar[n];
	}
	for(n=f;n<=l;n++)
		ar[n]=b[n];
}
void fmerge_sort(int l,int h,float ar[])
{
	int m;
	if(l<h)
	{
		m=(l+h)/2;
		fmerge_sort(l,m,ar);
		fmerge_sort(m+1,h,ar);
		fmerge(l,m,h,ar);
	}
}
