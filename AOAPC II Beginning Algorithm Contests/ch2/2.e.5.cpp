//version 1 δ����double�����ݵ���Ч����ֻ��15-16λ  
#include <stdio.h>  
int main()  {  
    int a,b,c,count=1;  
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){  
        if(a==0&&b==0&&c==0)  
            break;  
        printf("Case %d:%.*lf\n",count++,c,(double)(a)/b);  
        //printf("%*.*lf", 4, 5, 1.234567);   
        //��˼���������Ϊx��С�����yΪ��double������z  
    }  
    return 0;  
}  

