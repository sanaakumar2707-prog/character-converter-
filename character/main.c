// conversion from uppercase to lower case
#include<stdio.h>
int main (void)
{
    char x;
    printf("Enter the character=");
    scanf("%c",&x);
    if (x >='A'&& x<='Z'){
        x=x+32;
        printf("New=%c\n",x);
    }
    else if(x>='a' && x<='z'){
        x=x-32;
        printf("new=%c\n",x);
    }
    else{
        printf("not an alphabet please enter an alphabet ");
    }
    return 0;
}
