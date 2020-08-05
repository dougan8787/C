#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//員工的訊息結構
typedef struct employee
{
	int num;
	char duty[10];
	char name[10];
	char sex[3];
	unsigned char age;
	char edu[10];
	int salary;
	char tel_office[13];	//手機電話 
	char tel_home[13];		//家裡電話 
	char mobile[13];
	char email[11];			//email地址 
	char address[31];		//家裡地址 
	struct employee *next;
}EMP;

char password[9];			//系統密碼 
EMP *emp_first,*emp_end;	//定義指標鏈表的頭節點和尾結點指針
char gsave,gfirst;			//判斷標示
//自定義函數介紹
void addemp(void);
void findemp(void);
void listemp(void); 
int main(void){
	emp_first=emp_end=NULL;
	gsave=gfirst=0;
	
	system("pause");
	return 0;
	
}

