#include <archana.h>
int main() {
    int a=1;
    /*///for loop *****/
    for(a=a+1; a<(16+4); a=a+1+a) {
        printf("Value of a: %d\n", a);
        a+=1.0; // To be changed

        if(a)
         a++;
    }
    return 0;
}