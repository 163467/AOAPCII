//version 3  
#include <stdio.h>  
int main()  { 
    int a,b,c,tmp,i,t,count=1;;  
    int s[110];//���ڱ���С�����Ĳ���  
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){  
        if(a==0&&b==0&&c==0)  
            break;  
        t=a/b;  
        a=a%b*10;  
        for(i=1;i<c;i++){//С�����ǰc-1λ���浽����s��  
            s[i]=a/b;  
            a=a%b*10;  
        }  
        tmp=a%b*10/b;//tmp�ǳ�ʼa/b��С������c+1λ����  
        if(tmp<5)  
            s[i]=a/b;//s[i]��s[c]  
        else  
            s[i]=a/b+1;  
        while(i>1){  
            if(s[i]==10){  
                s[i]-=10;  
                s[i-1]+=1;  
            }  
            i--;  
        }  
        if(s[1]==10){  
            s[1]-=10;  
            t++;  
        }  
        printf("Case %d:%d.",count++,t);  
        for(i=1;i<=c;i++)  
            printf("%d",s[i]);  
        printf("\n");  
    }  
    return 0;  
}  

