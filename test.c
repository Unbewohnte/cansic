#include "cansic.h"
#include <stdio.h>

int main(void) {
    const char* text = "This is a text"; 
    printf("%s%s%s\n", CANSIC_BOLD, text, CANSIC_END);
    printf("%s%s%s\n", CANSIC_ITALIC, text, CANSIC_END);
    printf("%s%s%s\n", CANSIC_UNDERLINE, text, CANSIC_END);
    printf("%s%s%s\n", CANSIC_RAPIDBLINK, text, CANSIC_END);
    printf("%s\n", CANSIC_BOLD CANSIC_UNDERLINE CANSIC_SLOWBLINK "String literals are more elegant" CANSIC_END);

    printf("%s%s%s\n", CANSIC_FG_RGB(90, 50, 200), text, CANSIC_END);
    printf("%s%s%s\n", CANSIC_BG_RGB(255, 55, 55), text, CANSIC_END);

    return 0;
}