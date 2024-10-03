#include<stdio.h>
void main()
{
int arr1[20],arr2[20],arr3[40];
void read_array(int[],int);
void print_array(int[],int);
void merge(int[],int[],int[], int,int);
int m,n;
printf("enter  number of  elements  in first array:");
scanf("%d",&m);
read_array(arr1,m);
printf("enter the number of elements in second arrray :");
scanf("%d",&n);
read_array(arr2,n);
merge(arr1,arr2,arr3,m,n);
print_array(arr3,m+n);
}


void read_array(int arr[], int x)
{ 
int i;
printf("enter the elements:\n");
for (i=0;i<x;i++)
{
scanf("%d",&arr[i]);
}
}


void print_array(int arr[], int x)
{
int i;
printf("sorted elements are:\n");
for (i=0;i<x;i++)
{
printf("%d\n",arr[i]);
}
}

void merge(int a[], int b[], int c[], int x, int y)
{
int i=0,j=0,k=0;
while(i<x&&j<y)
{
if(a[i]<b[j])
{
c[k]=a[i];
i=i+1;
k=k+1;
}
else
{
c[k]=b[j];
j=j+1;
k=k+1;
}
}
while(i<x)
{
c[k++]=b[i++];
}
while(j<y)
{
c[k++]=b[j++];
}
}


