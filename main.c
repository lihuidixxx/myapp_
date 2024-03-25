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

int main()
{
	srand(( unsigned int ) time ( NULL ));
	int randomnum(int max);
	char randomchar();
	Status createhead(LinkList *L);
	Status createpoint(LinkList *L, DataType e);
	LinkList question;
	LinkList answer;
	createhead(&question);
	createhead(&answer);
	int r;
	printf( "������-r�Ĵ�С��\n" );
	scanf( "%d", &r );
	int n;
	printf( "������-n�Ĵ�С��\n" );
	scanf( "%d", &n );
	int amount = 0;
	int r_num1,r_num2;
	char r_sign;DataType daan;
	for( amount = 0; amount < n; amount++ )
	{
		r_num1 = randomnum(r);
		r_num2 = randomnum(r);
		r_sign = randomchar();

		if(r_sign == '-' ){
			if(r_num1 < r_num2){
				int temp = r_num1;
				r_num1 = r_num2;
				r_num2 = temp;
			}
			daan.key = r_num1 - r_num2;
			daan.fenhao = NULL;
				daan.yushu = NULL;
				daan.chuhao = NULL;
				daan.chushu = NULL;
		}
		else if(r_sign == '+')
		{
			daan.key = r_num1 + r_num2;
			daan.fenhao = NULL;
				daan.yushu = NULL;
				daan.chuhao = NULL;
				daan.chushu = NULL;

		}
		else if(r_sign == '*')
		{
			daan.key = r_num1 * r_num2;
			daan.fenhao = NULL;
				daan.yushu = NULL;
				daan.chuhao = NULL;
				daan.chushu = NULL;
		}
		else if(r_sign == '/'){
			daan.key = r_num1 % r_num2;
			if(daan.key != 0){
				daan.key = r_num1 / r_num2;
				daan.fenhao = '\'';
				daan.yushu = r_num1 % r_num2;
				daan.chuhao = '/';
				daan.chushu = r_num2;
			}
		}
		printf( "%d ", r_num1);
		printf( "%c ", r_sign);
		printf( "%d = \n", r_num2);
		DataType first;
		first.onenum = r_num1;
		first.fuhao = r_sign;
		first.twonum = r_num2;
		createpoint(&question, first);
		createpoint(&answer, daan);
	 }
	writetofile (question);
	Awritetofile (answer);
}
