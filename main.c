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
	printf( "请输入-r的大小：\n" );
	scanf( "%d", &r );
	int n;
	printf( "请输入-n的大小：\n" );
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
