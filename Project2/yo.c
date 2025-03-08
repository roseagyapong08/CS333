#include <stdio.h>

static int a = 50; 

void incrementStaticLocalVar() {
  static int a = 10; 
  a++;
  printf("static local a: %d\n", a);
}

void incrementLocalVar() {
  int a = 5;  
  a++;
  printf("local a: %d\n", a);
}

void incrementStaticGlobalVar() {
  a++;
  printf("static global a: %d\n", a);
}

int main() {
	for (int a = 0; a < 3; printf("loop variable a: %d\n", a)) {
		incrementStaticLocalVar();
		incrementLocalVar();
		incrementStaticGlobalVar();
		a++;
	}
	
	return 0;
}