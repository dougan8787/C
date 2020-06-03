#include<stdio.h>
#include<stdlib.h>

int main(){
    
    
    int strongbox = 5;
    int *post_office;
    post_office=&strongbox;
    
    printf("保險箱(變數)裡頭的金額是%d元\n",strongbox);
    printf("把保險箱(變數)裡頭的金額自乘一次會得到%d元\n",strongbox*strongbox);
    
    
    system("pause");
    return 0;
    }
