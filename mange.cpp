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
void addemp(void);			//添加員工信息的函數 
void findemp(void);			//尋找員工信息的函數 
void listemp(void); 		//顯示員工信息的函數
void modifyemp(void);		//修改員工信息的函數 
void summaryemp(void);		//統計員工信息的函數
void delemp(void);			//刪除員工信息的函數
void resetpwd(void);		//重置系統的函數
void readdata(void);		//讀取文件數據函數
void savedata(void);		//保存數據函數
int modi_age(int s);		//修改員工年齡函數
int modi_salary(int s);		//修改員工工資函數
char *modi_field(char *field,char *s,int n); //修改員工其他資訊函數
EMP *findname(char *name);	//照員工姓名查找信息 
EMP *findnum(int num);		//照員工號碼查找信息 
EMP *findtelephone(char *name);	//照員工電話查找信息 
EMP *findemail(char *name);		//照員工電子郵件查找信息
void displayemp(EMP *emp,char *field,char *name); //顯示員工信息
void checkfirst(void);			//初始化檢測
void bound(char ch,int n);		//畫出分界線
void login();					//登入檢測
void menu();					//主菜單列表 
int main(void){
	emp_first=emp_end=NULL;
	gsave=gfirst=0;
	
	system("pause");
	return 0;
	
}

