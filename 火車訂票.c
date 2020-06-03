#define HEADER1 "-----------------BOOK TICKET----------------------\n"
#define HEADER2 "|number|start city|reach city|takeofftime|receivetime|price|ticketnumber|\n"
#define HEADER3 "|------|----------|----------|-----------|-----------|-----|-----------|\n"
#define FORMAT  "|%-10s|%-10s|%-10s|%-10s|%-10s|%5d|%5d|\n"
#define DATA p->data.num,p->data.startcity,p->data.reachcity,p->data.takeoffime,p->data.receivetime,p->data.price,p->data.ticketnum

/*�w�q�x�s�������H�����c*/

struct train
{

char num[10];             /*�s��*/ 
char startcity[10];      /*�_�l����*/   
char reachcity[10];     /*��F����*/ 
char takeoffime[10];   /*�o���ɶ�*/ 
char receivetime[10]; /*��F�ɶ�*/ 
int price;           /*����*/
int ticketnumber;   /*����*/ 
       
}

/*�q���H�H��*/
struct man
{
                
char num[10];   /*ID*/
char name[10]; /*�m�W*/     
int bookNum;  /*�q����*/
       
}

/*�w�q�������H��������I���c*/
typedef struct node
{
        
struct train data; /*�n��train���c���������ܶqdata*/
struct node * next;
        
}Node,*Link;

/*�w�q�q���H�H��������I���c*/

typedef struct Man
{
 
struct man data;       
struct man * next;

}book,*bookLink;

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
/*Ū���������*/
fp1 = fopen("D:\\train.txt","rb+");           /*���}���������H�����*/
    if((fp1 == NULL))                         /*��󥼥��}���\*/ 
    {
     
     printf("cat't open the file");
     return 0;
            
    }
    while(!feof(fp1))                       /*���O���O�_�쵲��*/ 
    {
     p=(Node*)malloc(sizeof(Node));        /*��p�ʺA�}�P���s*/ 

     
     if(fread(p,sizeof(Node),1,fp1)==1)    /*�q���wŪ��������*/ 
     {
                                           
      p->next=NULL;                        /*�c�y�쵲 r->p->NULL*/          
      r->next=p;
      r=p;
                                       
     }
]
fclose(fp1);                               /*�������1*/ 

/*Ū���ʲ��H���*/
fp2=fopen("D:\\man.txt","rb+");            /*�}��man���*/
if((fp2==NULL))
{
 printf("can't open the file!"); 
 return 0;     
} 

while(!feof(fp2))
{
  t=(book*)malloc(sizeof(book)); 
  if(fread(t,sizeof(book),1,fp2)==1)
  {
   t->next=NULL;              
   h->next=t;
   h=t; 
  }              
} 

fclose(fp2);

void meau(){
     
     puts("\n\n");     
     puts("\t\t|--------------------------------------|");   /*��X��׺�*/ 
     puts("\t\t|            Booking Tickets           |");
     puts("\t\t|--------------------------------------|");
     puts("\t\t|        0:quit the system             |");
     puts("\t\t|        1:Insert a train information  |");
     puts("\t\t|        2:Search a train information  |"); 
     puts("\t\t|        3:Book a train  ticket        |"); 
     puts("\t\t|        4:Modify the train information|");
     puts("\t\t|        5:Show the train information  |");
     puts("\t\t|        6:save information to file    |");
     puts("\t\t|--------------------------------------|");
    
}

main(){
  FILE *fp1,*fp2;
  Node *p,*r;
  char ch1,ch2;
  Link I;
  bookLink k;
  book *t,*h;
  int sel;
  I=(Node*)malloc(sizeof(Node));
  I->next=NULL;
  r=I;
  k=(book*)malloc(sizeof(book));
  k->next=NULL;
  h=k;
  fp1=fopen("D:\\train.txt","ab+");
  if((fp1==NULL)){
     printf("cat't open the file");
     return 0;                
  }
  while(!feof(fp1)){
      p=(Node*)malloc(sizeof(Node));
      if(read(p,sizeof(Node),1,fp1)==1){                  /*�q���w���Ū������*/ 
      p->next=NULL;
      r->next=p;                                          /*���c���*/ 
      r=p;
      saveflag = 1;                                       /*�O�s�лx*/ 
      }
   }
    
}
void searchtain(Link I){
     
     Node *s[10],*r;
     int sel,k,i=0;     
     char str1[5],str2[10];
     if(!I->next){
        printf("There is not any record!");          
        return;
                  
     }
     printf("Choose the way:\n1:according to the number of train;\n2:according to the city:\n");
     scanf("%d",&sel);                                                  //��J��ܪ��Ǹ� 
     if(sel==1){                                                        //�Y��J�Ǹ�����1�A�ھڨ����d�� 
        printf("Input the number of train:");                
        scanf("%s",str1);                                              //��J�������� 
        r=I->next;                                                             
     while(r!=NULL)                                                   //�M�����wr�A�Y���ūh���X�`�� 
         if(strcmp(r->data.num,str1)==0){                            //�ˬd�O�_���ǰt������ 
            s[i]=r;
            i++;
            break; 
         }else{
              r=r->next;                                            //�S�����������h���wr�Ჾ�@�� 
         }    
     }else if(sel==2){                                             //���2�ھڨϥΪ̪���T�d�� 
          printf("input the city you want to go:");
          scanf("%s",str2);                                       //��J�d�ߪ����� 
          r=I->next; 
          while(r!=NULL)                                         //�M�����wr 
            if(strcmp(r->data.reachcity,str2)==0){               //�ˬd�O�_���P��J�������ۤǰt������ 
                  s[i]=r;                                      
                  i++;                                          //��즳�ǰt���������H���A����i++ 
                  r=r->next;                                
            }else{
                  r=r->next;
            }
            if(i==0){
                printf("can not find!");
                }else{
                      printheader();                           /*��X���Y */
                for(k=0;k<i;k++){                               
                printdata(s[k]);                                //��X�����H��
     }
  }
}
