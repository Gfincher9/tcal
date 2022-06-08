#include <stdlib.h>
#include <stdio.h>
#include <logic.h>
int main() {
int asmd;
    printf("would you like to add, subtract, multiply, or divide? [1,2,3,4]\n");
scanf("%d", &asmd);
    if (asmd == 1) {
        addInt();
    }
else if (asmd == 2) {
    subInt();
}
else if (asmd == 3) {
    multInt();
}
else if (asmd == 4) {
    divInt();
}
    else
printf("Invalid Input");
}