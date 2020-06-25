#include <stdlib.h>
#include <stdio.h>

int f1(int);
int f2(int);
long f3(int );
int f4(int);
int f5(int);
int main()
{
  int i;
  printf("Enter a number between 1 and 50 inclusive: ");
  scanf("%d", &i);
  if( i < 1 || i > 50)
  {
    printf("You entered an invalid number: must be between 1 and 50\n");
    exit(1);
  }

  printf("f1 output is %d\n", f1(i) );

  printf("f2 output is %d\n", f2(i) );

  printf("f3 output is %ld\n", f3(i) );

  printf("f4 output is %d\n", f4(i) );

  printf("f5 output is %u\n", f5(i) );

}

int f1(int x)
{
   if(x > 29){
    x = x >> 2;
    int y = x+17;
    return y;
  }
  else{
    int y = x;
    y = y << 4;
    y = x * 8 + y;
    y = x * 2 + y;
    return y;
  }
}
int f2(int x)
{
    int a = x;
    int b = x;
    int c = 0;

    while(b & b){
        if(b % 2 == 1){
            c += 2;
        }
        b = b/4;
    }
    return (c+a);
}
long f3( int x)
{
  int c = 5*x;
  int a  = 2*c + x;
  int i = 0;
  c = 171;
  while(i < a){
    int temp = i;
    c += temp;
    i++;
  }
  return (long)c;
}
int f4(int i)
{
    if(i >= 16){
        if(i-16 > 9){
            return 171;
        }
        return i + 17;
    }
    return i + 15;
}
int f5( int x)
{
    if(x > 5){
        return x*5;
    }
    int y = x;
    y = y >> 2;

    int check(x){
        int y = 2;
        while(!(x & x)){
            y += x;
            x --;
        }
        return y;
    }

    int count(x){
        while(!(x&x)){
            x = x >> 1;
        }
        return 0;
    }
    return y;
}
