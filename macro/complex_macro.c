#include <stdio.h>
#define DEBUG_MODE 1
#if DEBUG_MODE
    #define DEBUG_PRINT(message) do { \
        printf("Debug Message:\n"); \
        printf("%s\n", message); \
        printf("End of Debug Message.\n"); \
    } while(0)
#else
    #define DEBUG_PRINT(message) do { } while(0)
#endif
// Example of a complex multiline macro
#define PRINT_MULTILINE(message) do { \
    printf("Start of Message:\n"); \
    printf("%s\n", message); \
    printf("End of Message.\n"); \
} while(0)

int main() {
    // Using the complex multiline macro
    PRINT_MULTILINE("Hello, this is a multiline macro example.");
    DEBUG_PRINT("This is a debug message.");
    return 0;
}
