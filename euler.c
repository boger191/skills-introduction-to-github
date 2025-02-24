#include<stdio.h>
int com(int a,int b);//声明组合数函数
int fac(int a);//声明阶乘函数
int main()
{
        int n;//一共n封信和信封
        scanf("%d",&n);
        int i,j,final;//定义辅助运算的中间量和结果（final)
        int total=0;
        for(i=1;i<=n;i++)
        {
		j = (i % 2 == 0)? 1 : -1;//j负责控制正负
                total+=j*com(n,i)*fac(n-i);//公式中的每一项累加
        }
        final=fac(n)+total;
        printf("一共有%d种放法",final);
        return 0;
}
int fac(int a)//阶乘函数
{
        int num=1;
        while(a>0)
        {
        num*=a;
        a--;
        }
        return num;
}
int com(int a,int b)//组合数函数
{
        int numb;
        numb=fac(a)/(fac(a-b)*fac(b));
        return numb;
}
