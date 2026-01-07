#include<stdio.h>
int main() {
    char exp[100];
    int i = 0;
    printf("Enter a mathematical expression: ");
    scanf("%[^\n]", exp);
    while (exp[i] != '\0') {
    if (isalpha(exp[i])) {
            printf("%c : Identifier\n", exp[i]);
        }
    else if (exp[i]=='0'||exp[i]=='1'||exp[i]=='2'||exp[i]=='3'||exp[i]=='4'||exp[i]=='5'||exp[i]=='6'||exp[i]=='7'||exp[i]=='8'||exp[i]=='9') {
            printf("%c : Number\n", exp[i]);
        }
    else if (exp[i] == '+' || exp[i] == '-' ||
                 exp[i] == '*' || exp[i] == '/' ||
                 exp[i] == '=') {
            printf("%c : Operator\n", exp[i]);
        }
    else if (exp[i] == ';' || exp[i] == ',' ||
                 exp[i] == '(' || exp[i] == ')') {
            printf("%c : Special Symbol\n", exp[i]);
        }
      i++;
    }

    return 0;
}




