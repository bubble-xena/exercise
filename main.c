#include <stdio.h>
//运动员跳水时，有n个评委打分，分数是10分制，且有两位小数。
//得分规则为：去掉最高分和最低分，求剩下分数的平均值，就是运动员的最终得分。
int main() {
   int T=0;
   scanf("%d",&T);
   printf("%d",T);
    for(int t=0;t<T;t++)
   {double total1=0,total2=0,average=0;
   double score=0,max=0,min=10;
   int n=0;
   for(n=1;n<=10 ;n++){
       scanf("%lf",&score);
       printf("%lf\t",score);
       total1+=score;
       if(max<score){
           max=score;
       }
       if(min>score){
           min=score;
       }

   }
  total2=total1-min-max;
   average=total2/8.0;
   printf("\nThe final grade is %lf.",average);}



}
