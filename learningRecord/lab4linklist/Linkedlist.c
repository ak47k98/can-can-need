#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int elem;
    struct Node* next;
}Node;
typedef struct Node* Link;

struct Node* creatLinkedlist(int length);
struct Node* creatLinkedlist(int length)    //该函数实现   创建长度为length的链表     （PS：程序有有报错，还在修改中）
{
    if(length <= 0)
    {
        printf("长度错误");
        return NULL;
    }
    struct Node* head = NULL;
    struct Node* current = NULL;
    for (int i = 0; i < length; ++i) //创建节点
    {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->elem = NULL;      // 初始化
        newNode->next = NULL;
        if (head == NULL) {      //头结点
            head = newNode;
            current = newNode;
        }
        else {          //非头结点
            current->next = newNode;
            current = newNode;
        }
    }
    return head;
}