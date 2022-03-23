#include<stdio.h>
#include<stdlib.h>

void display_list(int b[],int n);
void bubble_sort(int c[],int n);

int main()
{
int i,n;
//int arr[5]={10,69,21,89,56};

//n=sizeof(arr)/sizeof(arr[0]);
printf("Enter the number of element\n");
scanf("%d",&n);
int arr[n];
printf("Enter the data\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Before sorting elememnts are :\n");
display_list(arr,n);
printf("\n After sorting array elements are :\n");
bubble_sort(arr,n);
display_list(arr,n);

return 0;
}

void display_list(int b[],int n)
{
int i;
for(i=0;i<n;i++)
   printf("%d\t",b[i]);
}

void bubble_sort(int c[],int n)
{
int i,j,t;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(c[j]>c[j+1])
{
t=c[j];
c[j]=c[j+1];
c[j+1]=t;
}
}
}
}

