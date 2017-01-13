#ifndef STUDENT_H
#define STUDENT_H
/**************************************************/
struct student{
	char   stNumber[12];
	char name[10];
	char sex[6];
	char birthDate[10];
	char nativePlace[50];
	char department[20];
	char achOrPun[50];
	struct student *next;
};
typedef struct student STNODE;
/**************************************************/
STNODE *stCreat();
void append(STNODE *head);       //������ĩβ����½ڵ�
void insert(STNODE *head,int i); //�������в����½ڵ�
void stDelete(STNODE *head,int i);            //ɾ����i���ڵ�
void displayUnit(STNODE *unit);               //���ĳ���ڵ���Ϣ
void displayList(STNODE *head);               //�������������Ϣ
void stListEdit(STNODE *head,int i);          //�޸ĵ�i���ڵ����Ϣ
int stSearch(STNODE *head,char *character);//��ѧ�Ų�ѯ
int stSearchName(STNODE *head,char *name);    //��������ѯ��Ϣ
#endif