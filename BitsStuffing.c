#include<stdio.h>
#include<string.h>
int main(){
 
 char input[100];

 printf("Enter data: ");
 scanf("%s",input);
 int lenght =  strlen(input);
 int count=0;
 
 char output[100];
 char flag[8] = "01111110";
 printf(" After stuffing the input is :\n");
 printf("%s",flag);
 
 
 for(int i=0; i<lenght; i++){

    
   printf("%c",input[i]);
    
    

    if(input[i]=='1'){
        count++;
    }else{
        count=0;
    }
    
    if(count==5){
       printf("0");
        
        count=0;
    }
 }



printf("%s\n",flag);

 return 0;
}