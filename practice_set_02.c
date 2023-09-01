# include <stdio.h>

void add(int a){
    printf("The address of vriable a is %u", &a);
}

int main(){
    int i = 4;
    printf("The value of variable i is %d\n", i);
    add (i);
    printf("The address of variable i is %u\n", &i);
    return 0;
}