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
}
