#include<iostream>
using namespace std;
typedef int DATA;
#define MAX 100
struct seqlist//˳���
{
	DATA*data;
	int  maxsize;
	int size;
};
void initiate(seqlist*l)//��ʼ��
{
	l->data = (DATA*)malloc(sizeof(DATA)* MAX);
	l->maxsize = 0;
	l->size = 0;
}
void create(seqlist* l)
{
	cout << "���Ա����󳤶��Ƕ���" << endl;
	cin>>l->maxsize;
	cout << "������Ҫ��������ݣ�" << endl;
	for (int i = 0;i <l->maxsize;i++)
	{
		cin >> l->data[i];
		l->size++;
	}
}
int Size(seqlist l)//����Ԫ�ظ���
{
	return l.size;
}
void insert(seqlist* l,int x,DATA y)//��������
{
	for (int i =l->size;i>x;i--)
	{
		l->data[i] = l->data[i - 1];
	}
	l->data[x] = y;
	l->size++;
}
void Delete(seqlist*l,int x,DATA*y)//ɾ������
{
	*y = l->data[x];
	for (int i = x;i < l->size - 1;i++)
	{
		l->data[i] = l->data[i + 1];
	}
	l->size--;
}
void display(seqlist l)//��ӡ����
{
	for (int i = 0;i < l.size;i++)
	{
		cout << l.data[i] << " ";
	}
	cout << endl;
}
int main()
{
	seqlist l;
	DATA y;
	initiate(&l);
	create(&l);
	cout << Size(l) << endl;
	insert(&l, 2, 3);
	display(l);
	Delete(&l, 1, &y);
	display(l);
	cout << y << endl;

}
