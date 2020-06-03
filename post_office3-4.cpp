#include<stdio.h>
#include<stdlib.h>

int main(){
    
    
    int strongbox1 = 5;
    int strongbox2 = 6 ;
    const int *const post_office = &strongbox1;                         //const int *post_office 15行會出現錯誤   //int *const post_office 12行會出現錯誤 //const是固定的意思 
    printf("透過郵局來查閱1號保險箱裡頭有%d元\n",*post_office);
    
    post_office=&strongbox2;
    printf("透過郵局來查閱2號保險箱裡頭有%d元\n",*post_office);
    
    *post_office=7;
    printf("透過郵局來查閱1號保險箱裡頭有%d元\n",*post_office);
    
    printf("保險箱1(變數)裡頭的金額是%d元\n",strongbox1);
    printf("保險箱2(變數)裡頭的金額是%d元\n",strongbox2);
    
    system("pause");
    return 0;
    }
