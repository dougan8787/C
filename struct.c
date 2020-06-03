#include<stdio.h>


struct Strongbox
{
int strongbox1 ;
short strongbox2 ;
char strongbox3 ;
};



int main(){
    
	
	struct Strongbox strongbox={2,3,8};

    
	printf("結構中設定1號保險箱為%d元\n",strongbox.strongbox1);
    printf("結構中設定1號保險箱為%d元\n",strongbox.strongbox2);
    printf("結構中設定1號保險箱為%d元\n",strongbox.strongbox3);
    system("pause");
	return 0;
}
