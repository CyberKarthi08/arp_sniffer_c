#include <stdio.h>

#define ADMIN_NAME "Cyber_Karthi08"
#define VERSION 1.1

/* Declare the prototype for a general external function. */
#ifdef REVERSIBLE_CC_MODE
#define HAS_REVERSIBLE_CC_MODE 1
#else
#define HAS_REVERSIBLE_CC_MODE 0
#endif

int main(){

    printf("The Termi Admin Name : %s & Version : %f \n", ADMIN_NAME,VERSION );
    printf("----------------------------------------------\n");
    HAS_REVERSIBLE_CC_MODE = 1;
    printf("value: %d", HAS_REVERSIBLE_CC_MODE);



}