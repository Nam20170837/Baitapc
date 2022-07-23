#include <stdio.h>
#include <stdint.h>
#include <String.h>
int test_atoi(char const * _String){
    int val=0;
    int i;
    for(i=0;;i++){
        if(_String[i]>=48 && _String[i]<=57){
            val=val*10 + (_String[i]-48);
        }
        else{
            break;
        }
    }
    return val;
}
int main(int argc, char const *argv[])
{
    char str[100];
    strcpy(str,"PHAMNGOCNAM");
    printf("%d",test_atoi(str));
    return 0;
}
