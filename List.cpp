#include<stdio.h>
#include<stdlib.h>
#define max_list_num 20
typedef struct ListNode
{
	int data;
	struct ListNode *next;
}ListNode,*List;

void add(List &L, int index, int e)
{
	struct ListNode *p, *q;
	p = L;
	q = (List)malloc(sizeof(struct ListNode));
	int i;
	for (i = 0; i < index-1; i++)
	{
		p = p->next;
	}
	q->next = p->next;
	q->data = e;
	p->next = q;
}
bool AddToEnd(List &L, int e)
{
	struct ListNode *p, *q;
	p = L;
	q = (List)malloc(sizeof(struct ListNode));
	for (; p->next!=NULL; )
	{
		p = p->next;
	}
	p->next = q;
	q->data = e;
	return true;
}
bool Remove(List &L, int e)
{
	struct ListNode *p, *q;
	p = L;
	q = p->next;
	for (; q!=NULL&&q->data != e ; )
	{
		p = q;
		q = q->next;
	}
	if (q == NULL)
	{
		return false;
	}
	p->next = q->next;
	free(q);
	return true;
}
void Clear(List &L)
{
	struct ListNode *p, *q;
	p = L;
	q = p;
	do{
		p = q;
		q = q->next;
		free(p);
	} while (q != NULL);
}
bool Contains(List &L, int e)
{
	struct ListNode *p;
	p = L;
	for (; p->data != e; )
	{
		if (p = NULL)
		{
			return false;
		}
		
		else if (p->data == e)
		{
			return true;
		}
		p = p->next;
	}
}
int Get(List &L, int index)
{
	struct ListNode *p;
	p = L;
	int i, e;
	for (i = 0; i < index ; i++)
	{
		p = p->next;
	}
	e = p->data;
	return(e);
}
int Set(List &L, int index, int e)
{
	struct ListNode *p;
	p = L;
	int i, o;
	for (i = 0; i < index; i++)
	{
		p = p->next;
	}
	o = p->data;
	p->data = e;
	return(o);
}
int IndexOf(List &L, int e)
{
	struct ListNode *p;
	p = L->next;
	int i;
	for (i = 1; p->data != e; i++)
	{
		if (p = NULL)
		{
			return false;
		}
		p = p->next;
	}
	return(i);
}
int Size(List &L)
{
	struct ListNode *p;
	p = L->next;
	int num;
	for (num = 1; p != NULL; num++)
	{
		p = p->next;
	}
	return (num);
}
bool Equals(List &L1, List&L2)
{
	struct ListNode *p, *q;
	p = L1->next;
	q = L2->next;
	int i, flag = 0;
	int L1_len, L2_len;
	L1_len = Size(L1);
	L2_len = Size(L2);
	for (i = 0; i < L1_len; i++)
	{
		if (p->data != q->data)
		{
			flag = 1;
		}
		p = p->next;
		q = q->next;
	}
	if (L1_len == L2_len && flag == 0)
	{
		return true;
	}
	else return false;
}
int HashCode(List &L)
{
	struct ListNode *p;
	p = L->next;
	int  hashcode=0;
	for (; p != NULL;)
	{
		hashcode = hashcode * 31 + p->data;
		p = p->next;
	}
	return(hashcode);
}
int LastIndexOf(List &L,int e)
{
	struct ListNode *p;
	p = L->next;
	int i,temp=0;
	for (i = 1; p!=NULL; i++)
	{
		if (p->data == e)
		{
			temp = i;
		}
	}
	if (temp == 0)
	{
		return false;
	}
	else
	{
		return(temp);
	}
}
void SubList(List &L1,List&L2,int FromIndex,int ToIndex)

{
	struct ListNode *p, *q1, *q2;
	int i;
	p = L1;
	q1 = L2;
	for (i = 0; i < FromIndex; i++)
	{
		p = p->next;
	}
	for (i = FromIndex; i <= ToIndex; i++)
	{
		q2 = (List)malloc(sizeof(struct ListNode));
		q1->next = q2;
		q1 = q2;
		q2->data = p->data;
		p = p->next;
	}
}
void ToArray(List &L, int a[max_list_num - 1])
{
	struct ListNode *p;
	p = L->next;
	int i;
	for (i = 0; p != NULL; i++, p = p->next)
	{
		a[i] = p->data;

	}
}

int main()
{
	struct ListNode *p=NULL;
	if (p->data != 0)
	{
		printf("123");

	}
	return(0);
}