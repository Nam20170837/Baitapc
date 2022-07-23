#include <stdio.h>
#include <Stdlib.h>
#include <string.h>
int test_strtof(char *Str,char **Ptr){
    for(int i=0;;i++){
        if(*(Str+i)>=48 && *(Str+i)<=57){
            int val=0;
            for(int j=0;;j++){
                if(*(Str+i+j)>=48 && *(Str+i+j)<=57) val=val*10 + (*(Str+i+j)-48);
                else {
                    if(Ptr){
                    *Ptr=Str+i+j;
                    }
                    return val;
                    
                    }
            }
        }
    }
    
}

int main(int argc, char const *argv[])
{
    char str[100];
    strcpy(str,"4567 1111");
    char *ptr;
    printf("\n%d\n",test_strtof(str,&ptr));
    char *ptr2;
    printf("\n%d\n",test_strtof(ptr,NULL));
    return 0;
}
