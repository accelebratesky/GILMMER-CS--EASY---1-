#include<stdio.h>
#include <windows.h>
int age;//我恍然大悟，尝试对程序进行了修改
char name [20];
int state;
int count;
void mprint(){
    printf("age=%d",age);
    printf("name=%s",name);
}

int main(){
    printf("hello world\n");
    SetConsoleOutputCP(CP_UTF8);
   do{
    printf("请输入名字：");
    scanf("%s",name);
    printf("请输入年龄:");
    scanf("%d",&age);
    mprint();
    count++;
    printf("退出输入1，继续输入0");
    scanf("%d",&state);
   }
    while(state==0);
    return 0;
}