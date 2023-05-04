#include <stdio.h>
#include <stdlib.h>

int main()
{ float arr[100];
  float num;
  int n;
  int i,j,u,l,m;
  int position=-1;


  printf("enter the size of array : ");
  scanf("%d",&n);

  printf("enter the elements of array : ");
  for(i=0;i<n;i++){
    printf("\n the value [%d] : ",i+1);
    scanf("%f",&arr[i]);
  }



  //sorting

   for(i=0;i<n-1;i++){
     for(j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
        }
     }
   }

   printf(" the elements of array after being sorted : ");
    for(i=0;i<n;i++)
    {
    printf("\n the value [%d] : %f \n",i+1,arr[i]);
    }



    printf(" \n enter the number you want to search about it : ");
  scanf("%f",&num);
   //searching

   l=0;
   u=n-1;

   do{
    m=(l+u)/2;
    if(num==arr[m])
    {
        position=m;
        printf(" %f is located in pos %d ",num,position+1);
        break;
    }
   else if(num>arr[m])
    {
        l=m+1;
    }
    else
    {
        u=m-1;
    }
   }while(l<=u);


   if(position==-1)
   {
       printf(" %f is not located in array ",num);
   }


    return 0;
}
