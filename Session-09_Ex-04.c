#include<stdio.h>
int main(){
    int choice,current_length,index,value;
    int arr[100];
    do
    {
        printf("        MENU        \n");
        printf("1.Nhap vao mang\n");
        printf("2.Hien thi mang\n");
        printf("3.Them phan tu\n");
        printf("4.Sua phan tu\n");
        printf("5.Xoa phan tu\n");
        printf("6.Thoat\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Nhap so luong phan tu muon them vao mang : ");
            scanf("%d",&current_length);
            for (int i = 0; i < current_length; i++)
            {
                printf("arr[%d] = ",i);
                scanf("%d",&arr[i]);
            }
            break;
        case 2:
            printf("Mang da nhap : \n");
            for (int i = 0; i < current_length; i++)
            {
                printf("arr[%d] = %d\n",i,arr[i]);
            }
            break;
        case 3:
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
            }
            break;
        case 4:
            printf("Nhap vi tri muon sua : ");
            scanf("%d",&index);
            printf("Nhap gia tri muon sua : ");
            scanf("%d",&value);
            arr[index] = value;
            break;
        case 5:
            printf("Nhap vi tri index ban muon xoa : ");
            scanf("%d",&index);
            for (int i = index;i < current_length; i++)
            {
                arr[i] = arr[i+1];
            }
            current_length--;
            break;
        case 6:
            break;
        default:
            printf("Khong hop le!! Nhap lai\n");
        }

    } while (choice != 6);
    
}