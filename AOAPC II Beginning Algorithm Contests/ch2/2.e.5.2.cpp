//version 2 δ����С�����ֵ�cλ��9����������������λ  
#include <stdio.h>  
int main()  {  
    int a,b,c,tmp,count=1;  
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){  
        if(a==0&&b==0&&c==0)  
            break;  
        printf("Case %d:%d.",count++,a/b);//��������  
        a=a%b*10;  
        while(c-->1){//С�����ǰc-1λ  
            printf("%d",a/b);  
            a=a%b*10;  
        }  
        tmp=a%b*10/b;//tmp�ǳ�ʼa/b��С������c+1λ����  
        if(tmp<5)  
            printf("%d\n",a/b);  
        else  
            printf("%d\n",a/b+1);  
    }  
    return 0;  
}  

