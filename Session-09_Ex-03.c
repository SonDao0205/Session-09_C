#include<stdio.h>
int main(){
    int arr[100];
    int current_length,index;
    printf("Nhap so luong phan tu muon them vao mang : ");
    scanf("%d",&current_length);
    for (int i = 0; i < current_length; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Mang ban dau : \n");
    for (int i = 0; i < current_length; i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    printf("Nhap vi tri index ban muon xoa : ");
    scanf("%d",&index);
    for (int i = index;i < current_length; i++)
    {
        arr[i] = arr[i+1];
    }
    current_length--;
    printf("Mang sau khi xoa : \n");
    for (int i = 0; i < current_length; i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }

}