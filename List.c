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
}
