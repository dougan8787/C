#include<stdio.h>
#include<stdlib.h>

int main(){

	int number = 0;
	

	printf("�п�J�}��������ƶq:");
	scanf("%d",&number);

	int *post_office = (int *)malloc(number * sizeof(int));

	printf("�п�J�}������O�I�c�������B��:\n");

	for (int i=0;i<number;i++){
		printf("��%d������O�I�c�������B�ƬO:",i+1);
		scanf("%d",post_office+i);
	}
	printf("��ܵ��G:\n");
	for(int j=0; j<number; j++){
		printf("��%d������O�I�c�������B�ƬO:%d\n",j+1,*(post_office+j));

	}

	free(post_office);

	system("pause");
	return 0;


}
