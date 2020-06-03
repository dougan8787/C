#define HEADER1 "-----------------BOOK TICKET----------------------\n"
#define HEADER2 "|number|start city|reach city|takeofftime|receivetime|price|ticketnumber|\n"
#define HEADER3 "|------|----------|----------|-----------|-----------|-----|-----------|\n"
#define FORMAT  "|%-10s|%-10s|%-10s|%-10s|%-10s|%5d|%5d|\n"
#define DATA p->data.num,p->data.startcity,p->data.reachcity,p->data.takeoffime,p->data.receivetime,p->data.price,p->data.ticketnum

/*定義儲存火車票信息結構*/

struct train
{

char num[10];             /*編號*/ 
char startcity[10];      /*起始城市*/   
char reachcity[10];     /*抵達城市*/ 
char takeoffime[10];   /*發車時間*/ 
char receivetime[10]; /*抵達時間*/ 
int price;           /*票價*/
int ticketnumber;   /*票數*/ 
       
}

/*訂票人信息*/
struct man
{
                
char num[10];   /*ID*/
char name[10]; /*姓名*/     
int bookNum;  /*訂票數*/
       
}

/*定義火車票信息鏈表的結點結構*/
typedef struct node
{
        
struct train data; /*聲明train結構體類型的變量data*/
struct node * next;
        
}Node,*Link;

/*定義訂票人信息鏈表的結點結構*/

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
/*讀取火車資料*/
fp1 = fopen("D:\\train.txt","rb+");           /*打開火車票的信息文件*/
    if((fp1 == NULL))                         /*文件未打開成功*/ 
    {
     
     printf("cat't open the file");
     return 0;
            
    }
    while(!feof(fp1))                       /*策是文件是否到結尾*/ 
    {
     p=(Node*)malloc(sizeof(Node));        /*為p動態開闢內存*/ 

     
     if(fread(p,sizeof(Node),1,fp1)==1)    /*從指定讀取文件紀錄*/ 
     {
                                           
      p->next=NULL;                        /*構造鏈結 r->p->NULL*/          
      r->next=p;
      r=p;
                                       
     }
]
fclose(fp1);                               /*關閉文件1*/ 

/*讀取購票人資料*/
fp2=fopen("D:\\man.txt","rb+");            /*開啟man文件*/
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
     puts("\t\t|--------------------------------------|");   /*輸出到終端*/ 
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
      if(read(p,sizeof(Node),1,fp1)==1){                  /*從指定文件讀取紀錄*/ 
      p->next=NULL;
      r->next=p;                                          /*結構鍊表*/ 
      r=p;
      saveflag = 1;                                       /*保存標誌*/ 
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
     scanf("%d",&sel);                                                  //輸入選擇的序號 
     if(sel==1){                                                        //若輸入序號等於1，根據車次查詢 
        printf("Input the number of train:");                
        scanf("%s",str1);                                              //輸入火車車次 
        r=I->next;                                                             
     while(r!=NULL)                                                   //遍歷指針r，若為空則跳出循環 
         if(strcmp(r->data.num,str1)==0){                            //檢查是否有匹配的火車 
            s[i]=r;
            i++;
            break; 
         }else{
              r=r->next;                                            //沒找到火車車次則指針r後移一位 
         }    
     }else if(sel==2){                                             //選擇2根據使用者的資訊查詢 
          printf("input the city you want to go:");
          scanf("%s",str2);                                       //輸入查詢的城市 
          r=I->next; 
          while(r!=NULL)                                         //遍歷指針r 
            if(strcmp(r->data.reachcity,str2)==0){               //檢查是否有與輸入的城市相匹配的火車 
                  s[i]=r;                                      
                  i++;                                          //找到有匹配的火車票信息，執行i++ 
                  r=r->next;                                
            }else{
                  r=r->next;
            }
            if(i==0){
                printf("can not find!");
                }else{
                      printheader();                           /*輸出表頭 */
                for(k=0;k<i;k++){                               
                printdata(s[k]);                                //輸出火車信息
     }
  }
}
