//#include <stdio.h>
//
//typedef struct hello {
//    int (*someFunction)();
//} hello;
//
//int foo(int x) {
//    return x;
//}
//int fooo(int x, int y) {
//    return y + x;
//}
//
//hello Hello(int s) {
//    struct hello aHello;
//    if(s==0)
//    aHello.someFunction = &foo;
//    if (s == 1)
//    aHello.someFunction = &fooo;
//    return aHello;
//}
//
//int main()
//{
//    struct hello aHello = Hello(0);
//   // printf("Print hello: %d and %d \n", aHello.someFunction(2), aHello.someFunction(2, 5));
//    printf("Print hello: %d \n", aHello.someFunction(2));
//    struct hello bHello = Hello(1);
//    printf("Print hello: %d \n",  bHello.someFunction(2, 5));
//    return 0;
//}