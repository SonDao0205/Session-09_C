#include<stdio.h>
int main(){
    int arr[100];
    int current_length,value,index;
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
    printf("Nhap gia tri muon them : ");
    scanf("%d",&value);
    printf("Nhap vi tri index ban muon them (0 - 99) : ");
    scanf("%d",&index);
    if (index >= current_length)
    {
        current_length = index;
        arr[index] = value;
        printf("Mang sau khi them la : \n");
        for (int i = 0; i < current_length+1; i++)
        {
            printf("arr[%d] = %d\n",i,arr[i]);
        }    
        }
    else{
    for (int i = current_length;i > index; i--)
    {
        arr[i]=arr[i-1]; 
    }
    arr[index] = value;
    printf("Mang sau khi them la : \n");
    for (int i = 0; i < current_length+1; i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }    
    }
}