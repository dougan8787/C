#include<stdio.h>
#include<stdlib.h>

int main(){

	int number = 0;
	

	printf("請輸入開戶民眾的數量:");
	scanf("%d",&number);

	int *post_office = (int *)malloc(number * sizeof(int));

	printf("請輸入開戶民眾保險箱內的金額數:\n");

	for (int i=0;i<number;i++){
		printf("第%d位民眾保險箱內的金額數是:",i+1);
		scanf("%d",post_office+i);
	}
	printf("顯示結果:\n");
	for(int j=0; j<number; j++){
		printf("第%d位民眾保險箱內的金額數是:%d\n",j+1,*(post_office+j));

	}

	free(post_office);

	system("pause");
	return 0;


}
