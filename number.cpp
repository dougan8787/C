#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int computer;
    int player;
    int playing=0;
    
    
    while(playing < 5){
    playing++;
    
    player=(rand()%10)+1;
    computer=(rand()%10)+1;
    srand((unsigned)time(NULL));
    
    if(player>computer){ 
     printf("%d>%d\n",player,computer);
    }
    else if(player<computer){
     printf("%d<%d\n",player,computer);
    }
    else if(player==computer){
     printf("%d=%d\n",player,computer);
      }
    }
    system("pause");
    return 0;
}
