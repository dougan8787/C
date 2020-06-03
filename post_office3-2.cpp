#include<stdio.h>
#include<stdlib.h>

int main(){
    
    
    int strongbox = 5;
    int *post_office1;
    int **post_office2;
    int ***post_office3;
    post_office1=&strongbox;
    post_office2=&post_office1;
    post_office3=&post_office2;
    
    
    
    printf("保險箱(變數)裡頭的金額是%d元\n",strongbox);
    printf("把保險箱1(變數)裡頭的金額自乘一次會得到%d元\n",*post_office1 * *post_office1);
    printf("把保險箱2(變數)裡頭的金額自乘一次會得到%d元\n",**post_office2 * **post_office2);
    printf("把保險箱3(變數)裡頭的金額自乘一次會得到%p元\n",***post_office3 * ***post_office3);  //記憶體是16進位  %p得到19=10進位25 
    
    
    system("pause");
    return 0;
    }
