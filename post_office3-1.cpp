#include<stdio.h>
#include<stdlib.h>

int main(){
    
    
    int strongbox = 5;
    int *post_office;
    post_office=&strongbox;
    
    printf("�O�I�c(�ܼ�)���Y�����B�O%d��\n",strongbox);
    printf("��O�I�c(�ܼ�)���Y�����B�ۭ��@���|�o��%d��\n",*post_office * *post_office);
    
    
    system("pause");
    return 0;
    }
