# include <stdio.h>
void times(int *i);

int main(){
    int a = 6;
    printf("The current value of the variable a is %d\n", a);
    times(&a);
    printf("The value of the variable a after function call is %d\n", a);
    return 0;
}
void times(int *i){
    int temp = *i;
    *i = (*i) *10;
    
}