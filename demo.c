#include <stdio.h>

#define ADMIN_NAME "Cyber_Karthi08"
#define VERSION 1.1

/* Declare the prototype for a general external function. */
#ifdef REVERSIBLE_CC_MODE
#define HAS_REVERSIBLE_CC_MODE 1
#else
#define NOTHING 0
#endif

int main(){
    const int hacker = 01;
    printf("The Termi Admin Name : %s & Version : %f & H.ID : %d \n", ADMIN_NAME,VERSION, hacker );

}