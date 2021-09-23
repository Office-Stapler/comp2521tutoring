#include <stdio.h>

void q1();
void q2();
void swap();


int main(void) {
    //q1();
    q2();
    
}


void q1() {
    int a,b,c,d,e;
    a = b = c = d = e = 0;
    printf("%d %d %d %d %d\n", a, b, c, d, e);
}

void q2() {
    int x,y;
    char *c, *d, *e, *f;
    char *c1, c2, c3, c4;
    x = y = 2;
    c = d = "abc";
    e = "xyz"; f = "xyz";
    printf("%p, %p", e, f);
    
    x++;
}

void swap (int a[], int i, int j) {
    
}