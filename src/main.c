#include<stdio.h>
#include"../include/add.h"
#include"../include/minus.h"
void add(int* add1,int* add2){
            printf("请输入第一个加数：\n");      
            scanf("%d",add1);      
            printf("请输入第二个加数：\n"); 
            scanf("%d",add2);        
            printf("%d + %d = %d\n",*add1,*add2,addFunc(*add1,*add2));
}
void minus(int* minus1,int* minus2){
             printf("请输入被减数\n");  
             scanf("%d",minus1);
             printf("请输入减数\n");  
             scanf("%d",minus2);
             printf("%d - %d = %d\n",*minus1,*minus2,minusFunc(*minus1,*minus2));    
}
int main(int argc,void* argv[]){
    int add1 = 0;
    int add2 =0;
    int option = 0;
    int minus1 = 0;
    int minus2 =0;
    printf("请输入你要进行的运算；\n");
    printf("1:加法\n");
    printf("2:减法\n");
    
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        add(&add1,&add2);
        break;
    case 2:
        minus(&minus1,&minus2);
        break;
    default:
        break;
    }
    return 0;
}