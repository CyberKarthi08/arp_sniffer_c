#include <stdio.h>

#define ADMIN_NAME "Cyber_Karthi08"
#define VERSION 1.1
#define LAUNCH_DATE "22/07/2024"
#define CURRENT_UPDATE "Now 1 Week Later"

// #ifdef THREAT_ACTOR || ATTACKER
// #define Name "Cyber_Karthi"
// #else
// #define Nothing "Nothing for a any attacker name"
// #endif

#ifdef REVERSIBLE_CC_MODE
#define HAS_REVERSIBLE_CC_MODE 1
#else
#define HAS_REVERSIBLE_CC_MODE 0
#endif

// #if defined(_MSC_VER)  // Microsoft Visual Studio compiler
//   #define INLINE __inline
// #elif defined(__GNUC__)  // GCC compiler
//   #define INLINE inline
// #elif defined(__clang__)  // Clang compiler
//   #define INLINE inline
// #else
//   #define INLINE  // Default to no inline specification
// #endif

// int karthi(LD,CD)
// int  LD,CD;
// {
//     printf("Launch Date : %s \nCurrent Update : %s \n",LD,CD);

// }

int main()
{
    const int hacker = 01;
    printf("The Termi Admin Name : %s & Version : %f & H.ID : %d \n", ADMIN_NAME, VERSION, hacker);

    printf("-------------------------------------------------\n");
    if (HAS_REVERSIBLE_CC_MODE)
    {
        printf("Reversible CC mode is enabled.\n");
    }
    else
    {
        printf("Reversible CC mode is not enabled.\n");
    }

    return 0;

    //  Usage of INLINE macro
    // INLINE int add(int a, int b) {
    //     return a + b;
    // }
}