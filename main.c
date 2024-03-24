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

typedef struct{  /* Ԫ������*/
  int onenum;//��һ����
  char fuhao;//����
  int twonum;//�ڶ�����

  int key;//��
  char fenhao;
  int yushu;
  char chuhao;
  int chushu
}DataType;

typedef struct LNode {  /* ������� */
     DataType data;     //������
     struct LNode *next;//ָ����ָ����һ�����
} LNode, *Link;

typedef struct LinkList { /* �������� */
   Link head,tail;  /* �ֱ�ָ�����������е�ͷ�������һ����� */
   int len;         /* ָʾ��������������Ԫ�صĸ��� */
} LinkList;

Status createhead(LinkList *L)//��������ͷ�ڵ�
{
  Link p;
  p=(Link)malloc(sizeof(LNode));//����ͷ���
  if(p == NULL)return OVERFLOW;//�洢����ʧ��
  p->next = NULL;
  L->head = L->tail =p;
  L->len = 0;
  return OK;
}

Status createpoint(LinkList *L, DataType e)//���ɽڵ�
{
  Link p,q;
  p=(Link)malloc(sizeof(LNode)); //�����½��
  p->data = e;
  p->next = NULL;
  q=L->tail;
  q->next = p;
  L->tail = p;
  L->len++;//���ȼ�һ
}

main()
{
   return 0;
}
