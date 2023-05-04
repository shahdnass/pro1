#include <stdio.h>
#include <stdlib.h>

int main()
{
    float arr[100];
    int n;
    float num ;
    int position=-1;
    int i;

    printf("please enter the size of the array : ");
    scanf("%d",&n);

        printf("please enter the elements of the array  : \n");
        for( i=0;i<n;i++){
        printf("\n the value[%d]: ",i+1);
        scanf("%f",&arr[i]);
        }

    printf("enter the number you want to search : ");
    scanf("%f",&num);

        for( i=0;i<n;i++){
            if(arr[i]==num){
                printf(" the number %f is lied in %d pos \n",arr[i],i+1);
                position=i+1;
                break;
            }
        }
     if(position==-1){
             printf(" the number %f is not located here \n",arr[i]);

     }


    return 0;
}
