#include <stdio.h>
#include <stdlib.h>

int main()
{

    float arr[100];
    int n,i,j;




    printf("please enter the size of the array : ");
    scanf("%d",&n);

        printf("please enter the elements of the array  : \n");
        for( i=0;i<n;i++){
        printf("\n the value[%d]: ",i+1);
        scanf("%f",&arr[i]);
        }
        for(i=0;i<n-1;i++){
     for(j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
        }
     }
   }
     printf(" the elements of the array after being sorted  : \n");
     for( i=0;i<n;i++){
        printf("\n the value[%d]: %f ",i+1,arr[i]);
     }
    return 0;
}
