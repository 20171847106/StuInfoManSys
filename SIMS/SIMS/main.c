/**************************************************
             ѧ����Ϣ����ϵͳ����
***************************************************
�Ӽ����������ѧ�š��������Ա𡢳��������ա����ᡢ
����Ժϵ��רҵ������Ϣ�����ڴ����ļ����е����ѯ��
�����ѯ���ܾ��в����޸ĺ�ɾ����Ϣ���ܾ�������ļ�
������Ϣ���ܡ�
***************************************************/
#include <stdio.h>
#include <stdlib.h>
#include"student.h"
void gui();
void main()
 {
	 STNODE *head=NULL;
	 char secNum[12];
	 char *pSecNum=secNum;
	 char selectFlag;
	 int index;
	 int seReturn;
	 gui();
	 while(1){
		do{
			printf("����ѡ���");
			scanf(" %c",&selectFlag);
		}while(selectFlag<'a'||selectFlag>'g');

		if(selectFlag=='g')
			break;

		switch(selectFlag){
			case 'a':system("cls");
					 head=stCreat();
					 system("cls");
					 gui();
					 break;
			case 'b':system("cls");
					if(head==NULL){
						 printf("����Ϣ��\n");
						 system("cls");
						 gui();
						 break;
					 }
					 else{
						 system("cls");
						 gui();
				         displayList(head);
					   	 break;
					 }
			case 'c':system("cls");
				     append(head);
					 system("cls");
					 gui();
					 break;
			case 'd':system("cls");
					 if(head==NULL){
						 gui();
						 printf("����Ϣ�ɹ�����!");
				         break;
					 }else{
						 gui();
						 printf("�������������:");
						 scanf("%d",&index);
						 insert(head,index);
						 break;
					 }
			case 'e':system("cls");
					 if(head==NULL){
						 gui();
						 printf("�޴�����Ϣ��");
						 gui();
						 break;
					 }else{
						 gui();
						 printf("������Ҫɾ�������:");
						 scanf("%d",&index);
						 stDelete(head,index);
						 break;
					 }
			case 'f':system("cls");
				     gui();
				     printf("�������ѯ��ѧ�ţ�");
				     scanf("%s",secNum);
				     index=stSearch(head,pSecNum);
				     printf("�������Ϊ%d",index);
				     break;
	    }
	 }
 }
void gui()
{
	printf("**************************************************\n");
	printf("*                ѧ����Ϣ����ϵͳ                *\n");
	printf("**************************************************\n");
    printf("*                    a.�½�                      *\n");
	printf("*                    b.�鿴                      *\n");
    printf("*                    c.���                      *\n");
    printf("*                    d.����                      *\n");
	printf("*                    e.ɾ��                      *\n");
	printf("*                    f.��ѯ                      *\n");
	printf("*                    g.�˳�                      *\n");
    printf("**************************************************\n");
}
