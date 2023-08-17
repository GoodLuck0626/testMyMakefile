#include<stdio.h>
#include"include/add.h"
#include"include/minus.h"
int main(){
    printf("请输入你要进行的运算；\n");
    printf("1:加法\n");
    printf("2:减法\n");
    int option = 0;
    scanf("请输入：%d\n",option);
    switch (option)
    {
    case 1:
        int add1 = 0;
        int add2 =0;
        scanf("请输入第一个加数：%d\n",add1);
        scanf("请输入第二个加数：%d\n",add2);
        printf("%d + %d = %d\n",add1,add2,addFunc(add1,add2));
        break;
    case 2:
    int minus1 = 0;
    int minus2 =0;
    scanf("请输入被减数：%d\n",minus1);
    scanf("请输入减数：%d\n",minus2);
    printf("%d - %d = %d\n",minus1,minus2,minusFunc(minus1,minus2));
    break;
    
    default:
        break;
    }
    return 0;
}