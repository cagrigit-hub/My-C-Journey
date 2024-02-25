#define debugPrintf(...) printf("DEBUG: " __VA_ARGS__);
int main()
{
  debugPrintf("Hello World!\n");
  int x=12;
  int y=13;
  debugPrintf("x=%d, y=%d\n", x, y);
  
  return 0;
}