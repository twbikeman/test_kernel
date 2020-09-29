#include <stdio.h>

#define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)

#define my_offsetof(TYPE, MEMBER) ((size_t)&((TYPE *)1000)->MEMBER)


struct MY_DATA {
  int Data_A, Data_B, Data_C;
  struct MY_DATA *next;
};


int main() {
  puts("----offsetof----");
  printf("----next = %zu----\n", offsetof(struct MY_DATA, next));
  printf("----next = %zu----\n", offsetof(struct MY_DATA, Data_A));
  printf("----next = %zu----\n", offsetof(struct MY_DATA, Data_B));
  printf("----next = %zu----\n", offsetof(struct MY_DATA, Data_C));


  
  return 0;
}
