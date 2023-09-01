# include <stdio.h>
int times(int i);

int main(){
    int a = 6;
    printf("The current value of the variable a is %d \n", a);
    printf("The value of the variable a after the function call is %d\n", times(a));
    return 0;
}

int times(int i){
    int temp = i;
    i = (i) * 10;
    i = 5;
}