#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define OVERFLOW -1
#define OK 1
#define ERROR 0
#define TRUE 2
#define FALSE -2

#define MAXLEN  20
#define MAXSIZE 20

typedef int Status;

typedef struct{  /* 元素类型*/
  int onenum;//第一个数
  char fuhao;//符号
  int twonum;//第二个数

  int key;//答案
  char fenhao;
  int yushu;
  char chuhao;
  int chushu
}DataType;

typedef struct LNode {  /* 结点类型 */
     DataType data;     //数据域
     struct LNode *next;//指针域，指向下一个结点
} LNode, *Link;

typedef struct LinkList { /* 链表类型 */
   Link head,tail;  /* 分别指向线性链表中的头结点和最后一个结点 */
   int len;         /* 指示线性链表中数据元素的个数 */
} LinkList;

Status createhead(LinkList *L)//生成链表头节点
{
  Link p;
  p=(Link)malloc(sizeof(LNode));//生成头结点
  if(p == NULL)return OVERFLOW;//存储分配失败
  p->next = NULL;
  L->head = L->tail =p;
  L->len = 0;
  return OK;
}

Status createpoint(LinkList *L, DataType e)//生成节点
{
  Link p,q;
  p=(Link)malloc(sizeof(LNode)); //生成新结点
  p->data = e;
  p->next = NULL;
  q=L->tail;
  q->next = p;
  L->tail = p;
  L->len++;//长度加一
}

main()
{
   return 0;
}
