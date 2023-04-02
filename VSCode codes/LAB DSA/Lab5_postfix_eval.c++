#include <bits/stdc++.h>

using namespace std;

struct Stack
{
    int top;
    unsigned capacity;
    int *array;
};

// Stack Operations
Stack *createStack(unsigned capacity)
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));

    if (!stack)
        return NULL;

    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));

    if (!stack->array)
        return NULL;

    return stack;
}

int isEmpty(Stack *stack)
{
    return stack->top == -1;
}

char peek(Stack *stack)
{
    return stack->array[stack->top];
}

char pop(Stack *stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top--];
    return '$';
}

void push(Stack *stack, char op)
{
    stack->array[++stack->top] = op;
}


int evaluatePostfix(char *expression)
{
    Stack *stack = createStack(strlen(expression));
    int i;

    if (!stack)
        return -1;

    for (i = 0; expression[i]; ++i
    )
    {
        
        if (isdigit(expression[i]))
            push(stack, expression[i] - '0');
        else
        {
            int val1 = pop(stack);
            int val2 = pop(stack);
            switch (expression[i])
            {
            case '+':
                push(stack, val2 + val1);
                break;
            case '-':
                push(stack, val2 - val1);
                break;
            case '*':
                push(stack, val2 * val1);
                break;
            case '/':
                push(stack, val2 / val1);
                break;
            }
        }
    }
    return pop(stack);
}

int main()
{
    char expression[] = "231*+9-";
    cout << "postfix evaluation: " << evaluatePostfix(expression);
    return 0;
}