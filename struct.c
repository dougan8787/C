#include<stdio.h>


struct Strongbox
{
int strongbox1 ;
short strongbox2 ;
char strongbox3 ;
};



int main(){
    
	
	struct Strongbox strongbox={2,3,8};

    
	printf("���c���]�w1���O�I�c��%d��\n",strongbox.strongbox1);
    printf("���c���]�w1���O�I�c��%d��\n",strongbox.strongbox2);
    printf("���c���]�w1���O�I�c��%d��\n",strongbox.strongbox3);
    system("pause");
	return 0;
}
