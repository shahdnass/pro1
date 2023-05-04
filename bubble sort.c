#include <stdio.h>
#include <stdlib.h>

int main()
{  float arr[100];
    int n,i,j;
    int sorted;



    printf("please enter the size of the array : ");
    scanf("%d",&n);

        printf("please enter the elements of the array  : \n");
        for( i=0;i<n;i++){
        printf("\n the value[%d]: ",i+1);
        scanf("%f",&arr[i]);
        }


        do{
            sorted=1;
            for(i=0;i<n-1;i++){
                if(arr[i]>arr[i+1]){
                    int temp = arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                    sorted=0;
                }
            }

        }while(sorted==0);

        printf("the elements after sorting \n");
         for( i=0;i<n;i++){
        printf("\n the value[%d]: %f ",i+1,arr[i]);
         }
    return 0;
}
