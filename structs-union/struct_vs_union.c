#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int x;
    float y;
    char z;
} mystr;


typedef union {
    int x;
    float y;
    char z;
} myunion;


typedef struct {
    char *name;
    bool isrobot;
    union {
        char *personality;
        int firmware_version;
    };
} character;


void print_char(character* c) {
    printf("Character: %s -- ", c->name);

    if(c->isrobot) {
        printf("versions %i", c->firmware_version);
    } else {
        printf("personality %s", c->personality);
    }
    printf("\n");
}



int main() {
    mystr s;
    s.x = 45;
    s.y = 9.87;
    s.z = 'H';

    myunion u;
    u.x = 45;
    u.y = 9.87;
    u.z = 'H';


    printf("struct size: %lu\n", sizeof(mystr));
    printf("{%d, %f, %c}\n", s.x, s.y, s.z);
    printf("union size: %lu\n", sizeof(myunion));
    printf("{%d, %f, %c}\n", u.x, u.y, u.z);
    
    character hansolo;
    character r2d2;
    hansolo.name = "Han Solo";
    hansolo.isrobot = false;
    hansolo.personality = "Scruffy looking nerf-herder";

    r2d2.name = "R2D2";
    r2d2.isrobot = true;
    r2d2.firmware_version = 42;

    print_char(&hansolo);
    print_char(&r2d2);
    return 0;
}


