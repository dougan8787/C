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
void addemp(void);			//�K�[���u�H������� 
void findemp(void);			//�M����u�H������� 
void listemp(void); 		//��ܭ��u�H�������
void modifyemp(void);		//�ק���u�H������� 
void summaryemp(void);		//�έp���u�H�������
void delemp(void);			//�R�����u�H�������
void resetpwd(void);		//���m�t�Ϊ����
void readdata(void);		//Ū�����ƾڨ��
void savedata(void);		//�O�s�ƾڨ��
int modi_age(int s);		//�ק���u�~�֨��
int modi_salary(int s);		//�ק���u�u����
char *modi_field(char *field,char *s,int n); //�ק���u��L��T���
EMP *findname(char *name);	//�ӭ��u�m�W�d��H�� 
EMP *findnum(int num);		//�ӭ��u���X�d��H�� 
EMP *findtelephone(char *name);	//�ӭ��u�q�ܬd��H�� 
EMP *findemail(char *name);		//�ӭ��u�q�l�l��d��H��
void displayemp(EMP *emp,char *field,char *name); //��ܭ��u�H��
void checkfirst(void);			//��l���˴�
void bound(char ch,int n);		//�e�X���ɽu
void login();					//�n�J�˴�
void menu();					//�D���C�� 
int main(void){
	emp_first=emp_end=NULL;
	gsave=gfirst=0;
	
	system("pause");
	return 0;
	
}

