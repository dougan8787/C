#include<stdio.h>
#include<stdlib.h>

int main(){
    
    
    int strongbox1 = 5;
    int strongbox2 = 6 ;
    int *post_office;
    post_office=&strongbox1;
    printf("�z�L�l���Ӭd�\1���O�I�c���Y��%d��\n",*post_office);
    
    post_office=&strongbox2;
    printf("�z�L�l���Ӭd�\2���O�I�c���Y��%d��\n",*post_office);
    
    *post_office=7;
    printf("�z�L�l���Ӭd�\1���O�I�c���Y��%d��\n",*post_office);
    
    printf("�O�I�c1(�ܼ�)���Y�����B�O%d��\n",strongbox1);
    printf("�O�I�c2(�ܼ�)���Y�����B�O%d��\n",strongbox2);
    
    system("pause");
    return 0;
    }
