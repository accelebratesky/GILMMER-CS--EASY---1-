#include <stdio.h>
#include <windows.h>
int result;
int caculate_cf(int x,int p){
    result=(p-x)*(p-x);//这个函数拆出来好奇怪~
}
int caculate_zh(int x,int y ,int z){
    
  int p = (x + y + z) / 3;
  int f=caculate_cf(x,p)+caculate_cf(y,p)+caculate_cf(z,p);
  int zh = 3 * p - f / 3;
  return zh;
}
void list(int zh1,int zh2,int zh3)
 {if (zh1 >= zh2 && zh2 >= zh3) {
      printf("小明 > 小强 > 小林");
  } else if (zh1 >= zh3 && zh3 >= zh2) {
      printf("小明 > 小林 > 小强");
  } else if (zh2 >= zh1 && zh1 >= zh3) {
      printf("小强 > 小明 > 小林");
  } else if (zh2 >= zh3 && zh3 >= zh1) {
      printf("小强 > 小林 > 小明");
  } else if (zh3 >= zh1 && zh1 >= zh2) {
      printf("小林 > 小明 > 小强");
  } else { // zh3 >= zh2 && zh2 >= zh1
      printf("小林 > 小强 > 小明");
  }}//是直接用这个逻辑判断不用再写吗~

int main(){
  int x1, x2, x3;
  int y1, y2, y3;
  int z1, z2, z3;

  SetConsoleOutputCP(CP_UTF8);
  printf("请输入小明的三项成绩（顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &x1, &x2, &x3);
  printf("请输入小强的三项成绩（顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &y1, &y2, &y3);
  printf("请输入小林的三项成绩（顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &z1, &z2, &z3);

  int zh1=caculate_zh(x1,x2,x3);
  int zh2=caculate_zh(y1,y2,y3);
  int zh3=caculate_zh(z1,z2,z3);

 list(zh1,zh2,zh3);

  return 0;
}