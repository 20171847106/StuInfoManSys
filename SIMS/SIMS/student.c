/**************************************************
             ѧ����Ϣ����ϵͳ����
***************************************************
�Ӽ����������ѧ�š��������Ա𡢳��������ա����ᡢ
����Ժϵ��רҵ������Ϣ�����ڴ����ļ����е����ѯ��
�����ѯ���ܾ��в����޸ĺ�ɾ����Ϣ���ܾ�������ļ�
������Ϣ���ܡ�
***************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"student.h"
/***************************************************/
/**************************************************
                ��������
***************************************************/
STNODE *stCreat(){
	STNODE *head,*tail,*pnew;
    char exitFlag;
	head=(STNODE *)malloc(sizeof(STNODE));//����STNODE�����ڴ�ռ䲢�ѵ�ַ����ͷ�ڵ�
	if(head==NULL){                       //�ж��Ƿ�ֵ�ɹ�
		printf("����ʧ�ܣ�\n");
		return NULL;
	}
	head->next=NULL;
	tail=head;
	while(1){
		do{
		printf("�Ƿ��˳�Y Or N��");
		scanf(" %c",&exitFlag);
		}while(exitFlag !='Y' && exitFlag !='N'&&exitFlag!='y'&&exitFlag!='n');//�жϴ�СдYN�Ƿ�������ȷ

		if(exitFlag=='Y'||exitFlag=='y')
			break;
		pnew=(STNODE *)malloc(sizeof(STNODE));//�����½ڵ�
		if(pnew==NULL)                        //�жϴ����Ƿ�ɹ�
			printf("����ʧ�ܣ�\n");                  

		printf("ѧ�ţ�");                     //����ѧ����Ϣ
		scanf("%s",pnew->stNumber);                     //����PNumָ����ַ������浽pnew stNumber��
		printf("������");
		scanf("%s",pnew->name);
		printf("�Ա�");
		scanf("%s",pnew->sex);
		printf("�������ڣ�");
		scanf("%s",pnew->birthDate);
		printf("���᣺");
		scanf("%s",pnew->nativePlace);
		printf("Ժϵ��");
		scanf("%s",pnew->department);
		printf("������Ϣ��");
		scanf("%s",pnew->achOrPun);

		pnew->next=NULL; //β�ڵ�ָ����Ϊ��
		tail->next=pnew; //��ǰһ�ڵ�������
		tail=tail->next; //tailָ�����µĽڵ�
		exitFlag=NULL;
	}
	return head;                              //����ͷ�ڵ�
}
/***************************************************
                  ���ѧ����Ϣ
***************************************************/
void append(STNODE *head)
{
	STNODE *temp,*pnew=NULL;
	pnew=(STNODE *)malloc(sizeof(STNODE));//�����½ڵ�
	if(pnew==NULL)                        //�жϴ����Ƿ�ɹ�
		printf("����ʧ�ܣ�\n");              

	printf("ѧ�ţ�");                     //����ѧ����Ϣ
	scanf("%s",pnew->stNumber);                     //����PNumָ����ַ������浽pnew stNumber��
	printf("������");
	scanf("%s",pnew->name);
	printf("�Ա�");
	scanf("%s",pnew->sex);
	printf("�������ڣ�");
	scanf("%s",pnew->birthDate);
	printf("���᣺");
	scanf("%s",pnew->nativePlace);
	printf("Ժϵ��");
	scanf("%s",pnew->department);
	printf("������Ϣ��");
	scanf("%s",pnew->achOrPun);
	for(temp=head;temp->next!=NULL;temp=temp->next);//temp���ٵ�headβ�ڵ�
	temp->next=pnew;                        //β�ڵ�ָ���½ڵ�
	pnew->next=NULL;
}
/**************************************************
                   ����ѧ����Ϣ
**************************************************/
void insert(STNODE *head,int i)
{
	STNODE *temp;
	STNODE *pnew;
	int j;
	temp=head;
		pnew=(STNODE *)malloc(sizeof(STNODE));//�����½ڵ�
	if(pnew==NULL)                        //�жϴ����Ƿ�ɹ�
		printf("����ʧ�ܣ�\n");         

	printf("ѧ�ţ�");                     //����ѧ����Ϣ
	scanf("%s",pnew->stNumber);                     //����PNumָ����ַ������浽pnew stNumber��
	printf("������");
	scanf("%s",pnew->name);
	printf("�Ա�");
	scanf("%s",pnew->sex);
	printf("�������ڣ�");
	scanf("%s",pnew->birthDate);
	printf("���᣺");
	scanf("%s",pnew->nativePlace);
	printf("Ժϵ��");
	scanf("%s",pnew->department);
	printf("������Ϣ��");
	scanf("%s",pnew->achOrPun);

	for(j=1;j<i&&temp!=NULL;j++)
		temp=temp->next;
	if(temp==NULL){
		printf("�ڵ㲻���ڣ�\n");
		return ;
	}
	pnew->next=temp->next;
	temp->next=pnew;

}
/**************************************************
                   ɾ��ѧ����Ϣ
**************************************************/
void stDelete(STNODE *head,int i)
{
	int j;
	STNODE *temp1,*temp2;
	temp1=head;

    for(j=1;j<i&&temp1!=NULL;j++){ //����forѭ��ʹtempָ��Ҫɾȥ�ڵ�
		temp1=temp1->next;
	}
	if(temp1==NULL){
		printf("ɾ���Ľڵ㲻����\n");
		return;
	}
	temp2=temp1->next;
	temp1->next=temp2->next;
	free(temp2);                   //�ͷ�ɾȥ�Ľ����ڴ�
}
/**********************************************
                ��������ڵ���Ϣ
**********************************************/
void displayUnit(STNODE *unit){
	if(unit==NULL){
		printf("��ϢΪ��!");
		return;
	}else{
		printf("ѧ�ţ�%s\n",unit->stNumber);
		printf("������%s\n",unit->name);
		printf("�Ա�%s\n",unit->sex);
		printf("�������ڣ�%s\n",unit->birthDate);
		printf("���᣺%s\n",unit->nativePlace);
		printf("Ժϵ��%s\n",unit->department);
		printf("������Ϣ��%s\n",unit->achOrPun);
		printf("---------------------------\n");
    }
}
/**********************************************
                ���������Ϣ
**********************************************/
void displayList(STNODE *head){
	STNODE *temp;
	temp=head;
	for(temp=head->next;temp!=NULL;temp=temp->next){
		 displayUnit(temp);
	}
}
/**********************************************
               �޸Ľڵ���Ϣ
**********************************************/
void stListEdit(STNODE *head,int i){
	STNODE *temp;
	int j;
	char swFlag;
	char *pNum=NULL;

	temp=head;
	for(j=1;j<=i;j++){
		temp=temp->next;
	}
	displayUnit(temp);                    //�����ǰѧ����Ϣ

	do{                                //�ж�Ҫ�޸�ѧ����Ϣ
		printf("ѡ��Ҫ�޸ĵ���Ϣ\n");
		printf("a.ѧ�� b.���� c.�Ա� d.�������� f.���� g.Ժϵ h.������Ϣ i.�˳�: ");
		scanf(" %c",&swFlag);
		while(swFlag<'a'||swFlag>'i'){             //�ж�ѡ���Ƿ���Ч
			printf("�����д�������ѡ��");
			scanf(" %c",&swFlag);
		}
		switch(swFlag){
			case 'a':printf("ѧ�ţ�");                    
				scanf("%s",temp->stNumber);break;
			case 'b':printf("������");
				scanf("%s",temp->name);break;
			case 'c':printf("�Ա�");
				scanf("%s",temp->sex);break;
			case 'd':printf("�������ڣ�");
				scanf("%s",temp->birthDate);break;
			case 'f':printf("���᣺");
				scanf("%s",temp->department);break;
			case 'g':printf("Ժϵ��");
				scanf("%s",temp->department);break;
			case 'h':printf("������Ϣ��");
				scanf("%s",temp->achOrPun);break;
			case 'i':break;
		}
	}while(swFlag!='i');
}
/************************************************************
                      ���ַ���ѯ
************************************************************/
int stSearch(STNODE *head,char *character)
{
	STNODE *temp;
	int location=0;
    for(temp=head;strcmp(temp->stNumber,character)!=0;temp=temp->next){
		location++;
	}
	if(location==0){
		printf("û�ҵ���\n");
		return 0;
	}else{
		displayUnit(temp);
		return location;
	}
}
