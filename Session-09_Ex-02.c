#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5};
    int index,value,current_length = sizeof(arr)/sizeof(arr[0]);
    printf("Mang ban dau : \n");
    for (int i = 0; i < current_length; i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    printf("Nhap vi tri muon sua : ");
    scanf("%d",&index);
    printf("Nhap gia tri muon sua : ");
    scanf("%d",&value);
    arr[index] = value;
    printf("Mang sau khi sua la : \n");
    for (int i = 0; i < current_length; i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
}