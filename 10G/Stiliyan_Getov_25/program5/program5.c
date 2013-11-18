#include <stdio.h>
	int main (){
        float i,n,j,sum=0;
        scanf("%f", &n);
        if (n>=0)
        {
                if (n<=20)
                {
                        for(i=1;i<=n;i++)
                        {
                                float f=1;
                                for(j=1;j<=i;j++){
                                        f=f*j;
                                }
                                sum=sum+1/f;                        
                        }
                }
        }
        printf("%f\n", sum);
        return 0;
}
