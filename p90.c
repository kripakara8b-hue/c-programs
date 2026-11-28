#include<stdio.h>
void main()
{
    int arr[20],i,j,n,temp;
    printf(" Enter size of the array:\n");
    scanf("%d",&n);
    printf("Enter elements in array;\n");
    for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
                {
                    if(arr[i] >= arr[j])
                    {
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }
                }
        }
    printf("\n Elements of array after sorting:");
    for(i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }
}
