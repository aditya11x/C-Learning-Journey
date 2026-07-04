#include <stdio.h>
int main () {
    char a1;
    printf("Write you word or letter : ");
    scanf("%c", &a1);
    if ( a1 >= 'a' && a1 <= 'z' ) {
        printf (" This is lower case");
    }

    else if ( a1 >= 'A' && a1 <= 'Z') {
        printf ( " This is upper case");
    }

else if (a1 >= 'a' && a1 <= 'z' && a1 >= 'A' && a1 <= 'Z'){
    printf(" This is mix of upper case and lower case");
}

else {
    printf( " error check again");
}

return 0;
}