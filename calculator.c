#include <stdio.h>

int main() {
char op;
double i1, i2;
printf("Choose operation(+, -, *, /)");
scanf("%c", &op);
printf("Enter two values");
scanf("%lf %lf", &i1, &i2);
switch(op){
case '+':
 printf("%.1lf + %.1lf = %.1lf", i1, i2, i1 + i2);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", i1, i2, i1 - i2);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", i1, i2, i1 * i2);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", i1, i2, i1 / i2);
      break;
    default:
      printf("Error! operator is not correct");
  }
    
    
    