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
    
    
    
    printf("�O�I�c(�ܼ�)���Y�����B�O%d��\n",strongbox);
    printf("��O�I�c1(�ܼ�)���Y�����B�ۭ��@���|�o��%d��\n",*post_office1 * *post_office1);
    printf("��O�I�c2(�ܼ�)���Y�����B�ۭ��@���|�o��%d��\n",**post_office2 * **post_office2);
    printf("��O�I�c3(�ܼ�)���Y�����B�ۭ��@���|�o��%p��\n",***post_office3 * ***post_office3);  //�O����O16�i��  %p�o��19=10�i��25 
    
    
    system("pause");
    return 0;
    }
