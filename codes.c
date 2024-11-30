#include<stdio.h>
int main()
{
    int min=1000;
    int arr[]={3,5,4,2,6,7,43};
    for(int i=0;i<7;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }

    }
    printf("%d",min)
}
