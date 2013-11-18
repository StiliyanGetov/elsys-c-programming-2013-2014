#include <stdio.h>
 
	int main(){
        char num[10];
        int i=0, count[10] = {0};
        scanf("%s", num);
        while (num[i]){
                count[num[i]-'0']++;
                i++;
        }
        for (i=0; i<10; i++){
                if(count[i] > 1){
                        printf("%d %d\n", i, count[i]);
                }
        }
	return 0;
}
