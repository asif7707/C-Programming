#include<stdio.h>

void display(char *p);
int main(void)
{
    display("this is a test");
    return 0;
}
void display(char *p)
{
    if(*p){
        printf("%c", *p);
        display(p+1);
    }
}
