#include<stdio.h>

#include<stdlib.h>

#include<string.h>

typedef struct

{

char Num[100];              //���

char Name[10];            //����

char Tel[15];            //�绰����

char Email[20];            //����

char age[8];                //����

char adds[20];                //סַ

char relation[40];      //��ϵ

}Person;

Person pe[80];

int menu_select()

{

char c;

do{

system("cls");

printf("\t\t *****ͨѶ¼***** \n");
printf("\t\t������������������\n");

printf("\t\t�� 1. ��Ӽ�¼  ��\n");

printf("\t\t�� 2. ��ʾ��¼  ��\n");

printf("\t\t�� 3. ɾ����¼  ��\n");

printf("\t\t�� 4. ��ѯ��¼  ��\n");

printf("\t\t�� 5. �޸ļ�¼  ��\n");

printf("\t\t�� 6. �����¼  ��\n");

printf("\t\t�� 0. �˳�����  ��\n");

printf("\t\t������������������\n");

printf("\t\t����ѡ��(0-6):");

c=getchar();

}while(c<'0'||c>'6');

return(c-'0');

}

int Input(Person per[],int n)

{

int i=0;

char sign,x[10];

while(sign!='n'&&sign!='N')

{

printf("\t���:");

scanf("\t%d",&per[n+i].Num);

printf("\t����:");

scanf("\t%s",per[n+i].Name);

printf("\t����:");

scanf("\t%s",per[n+i].age);

printf("\t�绰����:");

scanf("\t%s",per[n+i].Tel);

printf("\tͨѶסַ:");

scanf("\t%s",per[n+i].adds);

printf("\t��������:");

scanf("\t%s",per[n+i].Email);

printf("\t��ϵ:");

scanf("\t%s",per[n+i].relation);
gets(x);

printf("\n\t�Ƿ�������?(Y/N)");

scanf("\t%c",&sign);

i++;

}

return(n+i);

}

void Display(Person per[],int n)

{

int i;

printf("----------------------------------------------------------------------\n");                          /*��ʽ*/

printf("���  ����  ����  ��ϵ  �绰����    ͨѶ��ַ        ��������  \n");

printf("----------------------------------------------------------------------\n");

for(i=1;i<n+1;i++)

{

printf("%-5d%-8s%-6s%-40s%-13s%-15s%-15s\n",per[i-1].Num,per[i-1].Name,per[i-1].age,per[i-1].relation,per[i-1].Tel,per[i-1].adds,per[i-1].Email);

if(i>1&&i%10==0)

{

printf("\t-----------------------------------\n");

printf("\t");

system("pause");
printf("\t-----------------------------------\n");

}

}

printf("----------------------------------------------------------------------\n");

system("pause");

}

int Delete_a_record(Person per[],int n)

{

char s[20];

int i=0,j;

printf("\t��������ɾ����¼�е�����:");

scanf("%s",s);

while(strcmp(per[i].Name,s)!=0&&i<n) i++;

if(i==n)

{

printf("\tͨѶ¼��û�д���!\n");

return(n);

}

for(j=i;j<n-1;j++)

{

strcpy(per[j].Num,per[j+1].Num);

strcpy(per[j].Name,per[j+1].Name);

strcpy(per[j].age,per[j+1].age);

strcpy(per[j].relation,per[j+1].relation);

strcpy(per[j].adds,per[j+1].adds);

strcpy(per[j].Email,per[j+1].Email);



}

printf("\t\t\t�Ѿ��ɹ�ɾ��!\n");

return(n-1);

}

void Query_a_record(Person per[],int n)

{

int m;

printf("\t\n��ѡ���ѯ��ʽ:\n");

printf("\t����������������\n");

printf("\t��1------���� ��\n");

printf("\t��2------�绰 ��\n");
printf("\t��3------��ַ ��\n");

printf("\t��4------���� ��\n");

printf("\t����������������\n");

printf("��ѡ��:");

scanf("%d",&m);

while(m!=1&&m!=2&&m!=3&&m!=4)

{

printf("�������������ѡ��:");

scanf("%d",&m);

}

if(m==1)

{

char s[20];

int i=0;

printf("\t���������ѯ������:");

scanf("\t%s",s);

while(strcmp(per[i].Name,s)!=0&&i<n) i++;

if(i==n)

{

printf("\tͨѶ¼��û�д���!\n");

return;

}

printf("\t���˱��: %d\n",per[i].Num);

printf("\t��������: %s\n",per[i].age);

printf("\t���ҵĹ�ϵ: %s\n",per[i].relation);

printf("\t�绰����: %s\n",per[i].Tel);

printf("\tͨѶ��ַ: %s\n",per[i].adds);

printf("\t��������: %s\n",per[i].Email);

} ;

if(m==2)

{

char s[20];

int i=0;

printf("\t���������ѯ�ĵ绰:");

scanf("\t%s",s);

while(strcmp(per[i].Num,s)!=0&&i<n) i++;

if(i==n)

{

printf("\tͨѶ¼��û�д���!\n");

return;

}

printf("\t���˱��: %d\n",per[i].Num);

printf("\t��������: %s\n",per[i].Name);
printf("\t��������: %s\n",per[i].age);

printf("\t���ҵĹ�ϵ: %s\n",per[i].relation);

printf("\tͨѶ��ַ: %s\n",per[i].adds);

printf("\t��������: %s\n",per[i].Email);

} ;

if(m==3)

{

char s[20];

int i=0;

printf("\t���������ѯ�ĵ�ַ:");

scanf("\t%s",s);

while(strcmp(per[i].adds,s)!=0&&i<n) i++;

if(i==n)

{

printf("\tͨѶ¼��û�д���!\n");

return;

}

printf("\t���˱��: %d\n",per[i].Num);

printf("\t��������: %s\n",per[i].Name);

printf("\t��������: %s\n",per[i].age);

printf("\t���ҵĹ�ϵ: %s\n",per[i].relation);

printf("\t�绰����: %s\n",per[i].Tel);

printf("\t��������: %s\n",per[i].Email);

} ;

}

void Change(Person per[],int n)

{

char s[20];

int i=0;

printf("\t���������޸ĵļ�¼�е�����:");

scanf("%s",s);

while(strcmp(per[i].Name,s)!=0&&i<n) i++;

if(i==n)

{

printf("\tͨѶ¼��û�д���!\n");

return;

}

printf("\t���:");

scanf("\t%d",&per[i].Num);

printf("\t����:");

scanf("\t%s",per[i].Name);
printf("\t����:");

scanf("\t%s",per[i].age);

scanf("\t%s",per[i].relation);

printf("\t��ϵ:");

printf("\t�绰����:");

scanf("\t%s",per[i].Tel);

printf("\tͨѶסַ:");

scanf("\t%s",per[i].adds);

printf("\t��������:");

scanf("\t%s",per[i].Email);

printf("\t�޸ĳɹ���");

}

void WritetoText(Person per[],int n)

{

int i=0;

FILE *fp;                                          //�����ļ�ָ��

char filename[20];                                  //�����ļ���

printf("\t���浽�ļ�\n");                          //�����ļ���

printf("\t��������������ļ���:");

scanf("\t%s",filename);

if((fp=fopen(filename,"w"))==NULL)

{

printf("\t�޷����ļ�\n");

system("pause");

return;

}

fprintf(fp,"******************************************ͨѶ¼******************************************\n");

fprintf(fp,"���    ����  ����  ��ϵ    �绰����          ͨѶ��ַ            ��������\n");
fprintf(fp,"------------------------------------------------------------------------------------------\n");

while(i<n)

{

fprintf(fp,"%-3d\t%-6s\t%-3s\t%-40s\t%-13s\t%-20s\t%-20s\n",per[i].Num,per[i].Name,per[i].age,per[i].relation,per[i].Tel,per[i].adds,per[i].Email);

i++;

}

fprintf(fp,"------------------------------------------------------------------------------------------\n");

fprintf(fp,"***************************************����%d����¼****************************************\n",n);

fclose(fp);                                        //�ر��ļ�

printf("����ɹ�!\n");

}

int main()                                        //������

{

int n=0;

for(;;)

{

switch(menu_select())

{

case 1:

printf("\n\t��Ӽ�¼��ͨѶ¼\n");                        //��Ӽ�¼

n=Input(pe,n);

break;

case 2:

printf("\n\t\t\t    ͨѶ¼��¼��\n");                      //��ʾ��¼

Display(pe,n);

break;

case 3:

printf("\n\t��ͨѶ¼��ɾ����¼\n");

n=Delete_a_record(pe,n);                                  //ɾ����¼

printf("\t");

system("pause");

break;

case 4:

printf("\n\t��ͨѶ¼�в��Ҽ�¼\n");

Query_a_record(pe,n);                                      //���Ҽ�¼

printf("\t");

system("pause");

break;

case 5:

printf("\n\t�޸�ͨѶ¼�еļ�¼\n");

Change(pe,n);                                            //�޸�����

printf("\t");

system("pause");

break;

case 6:

printf("\n\t���湦��\n");

WritetoText(pe,n);                                        //��������

printf("\t");

system("pause");

break;

case 0:

printf("\n\t\tллʹ�ã��ټ�!\n");                        //��������

printf("\n\t\t");

system("pause");

exit(0);

}

}

}
