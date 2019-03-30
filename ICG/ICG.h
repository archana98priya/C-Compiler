#include "symboltable.h"

typedef struct
{
    char name[100];
    int reg_num;

} reg_node;

typedef struct buffer_node
{

    char code[100];
    struct buffer_node *next;

} buffer_node;

typedef struct TAC
{
    int top;
    buffer_node *head[100];
    buffer_node *last[100];
} TAC;

typedef struct 
{
    int top;
    int label[100];
}label_stack;

label_stack breakStack, continueStack ;
TAC tac;

buffer_node *curr_buffer;

reg_node *ICG_stack[M];

int ICG_tos = -1;
int t_ctr = -1;
int label_num = 1;

char temp_code[100];

char *reg_name(reg_node *temp)
{

    char *str = (char *)malloc(100 * sizeof(char));

    strcpy(str, temp->name);

    if (temp->reg_num != -1)
    {
        sprintf(temp_code, "%d", temp->reg_num);
        strcat(str, temp_code);
    }

    return str;
}

reg_node *newnode(const char *name, int reg_num)
{
    reg_node *temp = (reg_node *)malloc(sizeof(reg_node));
    strcpy(temp->name, name);
    temp->reg_num = reg_num;

    return temp;
}

reg_node *pop()
{
    if (ICG_tos == -1)
        return NULL;
    else if (ICG_stack[ICG_tos]->reg_num != -1)
        t_ctr--;

    return ICG_stack[ICG_tos--];
}

buffer_node *get_buffer_node()
{
    buffer_node *temp = malloc(sizeof(buffer_node));
    
    if (tac.last[tac.top] == NULL)
    {
        tac.last[tac.top] = temp;
        tac.head[tac.top] = temp;
    }
    else
        tac.last[tac.top]->next = temp;
    
    tac.last[tac.top] = temp;
    temp->next = NULL;

    strcpy(temp->code, "");

    return temp;
}

void print_arg_list(int x)
{
    if (x == 0)
        return;

    reg_node *temp = pop();
    print_arg_list(x - 1);

    curr_buffer = get_buffer_node();
    sprintf(curr_buffer->code, "Param %s", reg_name(temp));
}

void Expr_tac(const char *s)
{
    reg_node *op2 = pop(), *op1 = pop();
    reg_node *temp = newnode("t", ++t_ctr);
    ICG_stack[++ICG_tos] = temp;

    curr_buffer = get_buffer_node();
    sprintf(curr_buffer->code, "%s = %s %s %s", reg_name(temp), reg_name(op1), s, reg_name(op2));
}

void for_tac(int repeat_label, int exit_label)
{
    
    //swap the position of update and body

    tac.last[tac.top-2]->next = tac.head[tac.top] ;
    tac.last[tac.top-2] = tac.last[tac.top];
    tac.head[tac.top] = tac.last[tac.top] = NULL;

    tac.last[tac.top-2]->next = tac.head[tac.top -1] ;
    tac.last[tac.top-2] = tac.last[tac.top -1];
    tac.head[tac.top -1] = tac.last[tac.top -1] = NULL;

    tac.top -= 2;

    curr_buffer = get_buffer_node(); 
    sprintf(curr_buffer->code,"GOTO L%d", repeat_label);
    curr_buffer = get_buffer_node();
    sprintf(curr_buffer->code,"L%d :", exit_label);  


}

void print_tac()
{
    int lineno = 1;
    buffer_node *temp = tac.head[tac.top];

    printf("\n====== Three Address Code ======\n");

    while (temp != NULL)
    {

        if(temp->code[0]=='L')
            printf("%6s\n", temp->code);
        else if(temp->code[0]=='F')
            printf("%s\n", temp->code);
        else if(temp->code[0]=='E')
            printf("%s\n", temp->code);
        else
            printf("%5d. %s\n", lineno++, temp->code);
        temp = temp->next;
    }

    printf("================================\n");
}
