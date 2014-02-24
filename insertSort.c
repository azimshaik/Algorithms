//test edit 3
//jfaskjfkajflakjdfklasjdfklsa
#include <stdio.h> //standard input 
void main()
{
	int i,j,temp,p;
	int a[]={5,1,6,3,10,20,2,7,3};
	int size = sizeof(a)/sizeof(int);
	for(i=1;i<size;i++)
	{
		j=i-1;
		while(i>0&&a[i]<a[j])
		{
		  temp = a[i];
		  a[i] = a[j];
		  a[j] = temp;
		  i--;
		  j--;
		}
	}
	for(p=0;p<size;p++)
	{
			printf("%d\n",a[p]);
	}
}
	   /* for(i=1;i<=2;i++){
			for(j=i-1;j<=5;j++)
			{
				while(a[i]<a[j])
				{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				}
			}
		}
		for(p=0;p<=5;p++){
			printf("%d\n",a[p]);
		}
	
	
	/*
	for(i=1;i<=5;i++)
	{
	for(j=i-1;j<=5;j++)
	{
		while(a[i]<a[j])
		{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		printf("%d %d",a[i],a[j]);
		}
	}
	}
		
		
	for(x=i;x<=j;x--)
	{
		temp= a[x];
		a[x] = a[x-1];
		a[x-1]=a[x];
	}
		
	for(p=0;p<=4;p++)
	{
		printf("%d",a[p]);
	}*/
