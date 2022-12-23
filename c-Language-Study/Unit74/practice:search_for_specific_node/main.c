#include <stdio.h>
#include <stdlib.h>

struct NODE {
    struct NODE *next;
    int data;
};

void addFirst(struct NODE *target, int data) //노드를 추가하는 함수 선언
{
    struct NODE *newNode = malloc(sizeof(struct NODE));
    newNode->next = target->next;
    newNode->data = data;
    
    target->next = newNode;
}

struct NODE *findNode(struct NODE *node, int data) //특정 노드를 찾는 함수 선언
{
    struct NODE *curr = node->next; //현재노드를 설정한다.
    
    while(curr != NULL)
    {
        if (curr->data == data) //특정 노드를 찾으면 그 노드를 return한다.
        {
            return curr;
        }
        
        curr = curr->next;
    }
}

int main()
{
    struct NODE *head = malloc(sizeof(struct NODE));
    head->next = NULL;
    
    addFirst(head, 10);
    addFirst(head, 20);
    addFirst(head, 30);
    
    struct NODE *found = findNode(head, 20);
    printf("%d\n", found->data);
    
    struct NODE *curr = head->next;
    while (curr != NULL) //할당한 메모리를 해제한다.
    {
        struct NODE *next = curr->next;
        free(curr);
        curr = next;
    }
    
    free(head);
    
    return 0;
}