#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX_SIZE 100
typedef struct {
    char data[MAX_SIZE];
    int top;
} CharStack;
void initializeStack(CharStack *s) {
    s->top = -1;
}

bool isEmpty(CharStack *s) {
    return s->top == -1;
}
bool isFull(CharStack *s) {
    return s->top == MAX_SIZE - 1;
}
void push(CharStack *s, char c) {
    if (isFull(s)) {
        printf("Stack day!\n");
        return;
    }
    s->data[++(s->top)] = c;
}
char pop(CharStack *s) {
    if (isEmpty(s)) {
        return '\0';
    }
    return s->data[(s->top)--];
}
bool isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}
bool checkBalance(char *expression) {
    CharStack s;
    initializeStack(&s);

    for (int i = 0; i < strlen(expression); i++) {
        char ch = expression[i];
        if (ch == '(' || ch == '[' || ch == '{') {
            push(&s, ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (isEmpty(&s)) {
                return false; 
            }
            char top = pop(&s);
            if (!isMatchingPair(top, ch)) {
                return false; 
            }
        }
    }

    return isEmpty(&s);
}
int main() {
    char expression[MAX_SIZE];

    printf("Nhap bieu thuc: ");
    fgets(expression, MAX_SIZE, stdin);
    expression[strcspn(expression, "\n")] = '\0'; // Xóa ký t? xu?ng dòng

    if (checkBalance(expression))
        printf("Bieu thuc hop le (ngoac can bang)\n");
    else
        printf("Bieu thuc KHONG hop le (ngoac khong can bang)\n");

    return 0;
}

