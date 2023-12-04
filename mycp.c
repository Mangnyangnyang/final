#include<stdio.h>
struct SA{
  int a;
};
void foo(struct SA **me){
  (*me)->a = 20;
}
void main(){
  struct SA me;
  struct SA* he;
  he = &me;
  me.a = 5;
  foo(&he);
  printf("%d\n", me.a);
}