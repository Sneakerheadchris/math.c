#include <cs50.h> 
#include <stdio.h>
#include <math.h>

int main(){
    int option; 
    float v, i, r, result;
    printf("press 1 to find voltage, press 2 to find resistance, press 3 to find current\n");
    scanf("%d", &option);
    if(option==1){
        printf("what's your resistance?\n");
        scanf("%f", &r);
        printf("what's your current?\n");
        scanf("%f", &i);
        result=r*i;
            printf("the voltage is %0.2f\n", result);
    }
    else  if(option==2){
        printf("what's your voltage?\n");
        scanf("%f", &v);
        printf("what's your current?\n");
        scanf("%f", &i);
        result=v/i;
            printf("the resistance is %0.2f\n", result);
}
    else  if(option==3){
        printf("what's your voltage?\n");
        scanf("%f", &v);
        printf("what's your resistance?\n");
        scanf("%f", &r);
        result=v/r;
            printf("the current is %0.2f\n", result);
    }
    return 0;
}
    
