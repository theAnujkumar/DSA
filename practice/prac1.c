#include<stdio.h>
void main(){

    //int i,j,n,arr[5],list[5],fr=0;

    printf("This is the program for finding the unique number in an array\n");
    
    int i,j,n,arr[5],list=0,fr=0;

    printf("Enter the size of array here\n");
    scanf("%d",&n);

    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // 2,3,5,2,3

    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
    {
        if(arr[i]!=arr[j]){
        fr=1;
        list=arr[i];
        }
    }
    }
        printf("The unique numbers are\n");
    
        if(fr==1)
        //for(i=0;i<n;i++){
         printf("%d\t",list);
    //}
        else {
            printf("\nno element found");
        }
}