#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//���u���T�����c
typedef struct employee
{
	int num;
	char duty[10];
	char name[10];
	char sex[3];
	unsigned char age;
	char edu[10];
	int salary;
	char tel_office[13];	//����q�� 
	char tel_home[13];		//�a�̹q�� 
	char mobile[13];
	char email[11];			//email�a�} 
	char address[31];		//�a�̦a�} 
	struct employee *next;
}EMP;

char password[9];			//�t�αK�X 
EMP *emp_first,*emp_end;	//�w�q��������Y�`�I�M�����I���w
char gsave,gfirst;			//�P�_�Х�
//�۩w�q��Ƥ���
void addemp(void);
void findemp(void);
void listemp(void); 
int main(void){
	emp_first=emp_end=NULL;
	gsave=gfirst=0;
	
	system("pause");
	return 0;
	
}

