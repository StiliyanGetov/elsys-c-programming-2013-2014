#include <stdio.h>

int main(){
        int number;
        scanf("%d", &number);
        if (number > 0 && number <= 99){
                        if (number > 10 && number < 20){
                                switch (number % 10){
                                        case 1 : printf("edinadeset\n"); break;
                                        case 2 : printf("dvanadeset\n"); break;
                                        case 3 : printf("trinadeset\n"); break;
                                        case 4 : printf("chetirinadeset\n"); break;
                                        case 5 : printf("petnadeset\n"); break;
                                        case 6 : printf("sheshtnadeset\n"); break;
                                        case 7 : printf("sedemnadeset\n"); break;
                                        case 8 : printf("osemnadeset\n"); break;
                                        case 9 : printf("devednadeset\n"); break;
                                }        
                        } else {
                                if (number % 10 == 0){
                                        switch (number / 10){
                                                case 1 : printf("deset\n"); break;
                                                case 2 : printf("dvadeset\n"); break;
                                                case 3 : printf("trideset\n"); break;
                                                case 4 : printf("chetirideset\n"); break;
                                                case 5 : printf("petdeset\n"); break;
                                                case 6 : printf("sheshtdeset\n"); break;
                                                case 7 : printf("sedemdeset\n"); break;
                                                case 8 : printf("osemdeset\n"); break;
                                                case 9 : printf("devedeset\n"); break;
                                        }
                                } else {
                                        switch (number / 10){
                                                case 1 : printf("edinadeset i \n"); break;
                                                case 2 : printf("dvadeset i \n"); break;
                                                case 3 : printf("trideset i \n"); break;
                                                case 4 : printf("chetirideset i \n"); break;
                                                case 5 : printf("petdeset i \n"); break;
                                                case 6 : printf("sheshtdeset i \n"); break;
                                                case 7 : printf("sedemdeset i \n"); break;
                                                case 8 : printf("osemdeset i \n"); break;
                                                case 9 : printf("devetdeset i \n"); break;
                                        }
                                        switch (number % 10){
                                                case 1 : printf("edno\n"); break;
                                                case 2 : printf("dve\n"); break;
                                                case 3 : printf("tri\n"); break;
                                                case 4 : printf("chetiri\n"); break;
                                                case 5 : printf("pet\n"); break;
                                                case 6 : printf("shest\n"); break;
                                                case 7 : printf("sedem\n"); break;
                                                case 8 : printf("osem\n"); break;
                                                case 9 : printf("devet\n"); break;
                                        }
                                }
                        }
                
        } else {
                printf("error");
        }
        return 0;
}
