#include<stdio.h>

#include<stdlib.h>

#include<string.h>

typedef struct

{

char Num[100];              //编号

char Name[10];            //姓名

char Tel[15];            //电话号码

char Email[20];            //邮箱

char age[8];                //年龄

char adds[20];                //住址

char relation[40];      //关系

}Person;

Person pe[80];

int menu_select()

{

char c;

do{

system("cls");

printf("\t\t *****通讯录***** \n");
printf("\t\t┌───────┐\n");

printf("\t\t│ 1. 添加记录  │\n");

printf("\t\t│ 2. 显示记录  │\n");

printf("\t\t│ 3. 删除记录  │\n");

printf("\t\t│ 4. 查询记录  │\n");

printf("\t\t│ 5. 修改记录  │\n");

printf("\t\t│ 6. 保存记录  │\n");

printf("\t\t│ 0. 退出程序  │\n");

printf("\t\t└───────┘\n");

printf("\t\t请您选择(0-6):");

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

printf("\t编号:");

scanf("\t%d",&per[n+i].Num);

printf("\t姓名:");

scanf("\t%s",per[n+i].Name);

printf("\t年龄:");

scanf("\t%s",per[n+i].age);

printf("\t电话号码:");

scanf("\t%s",per[n+i].Tel);

printf("\t通讯住址:");

scanf("\t%s",per[n+i].adds);

printf("\t电子邮箱:");

scanf("\t%s",per[n+i].Email);

printf("\t关系:");

scanf("\t%s",per[n+i].relation);
gets(x);

printf("\n\t是否继续添加?(Y/N)");

scanf("\t%c",&sign);

i++;

}

return(n+i);

}

void Display(Person per[],int n)

{

int i;

printf("----------------------------------------------------------------------\n");                          /*格式*/

printf("编号  姓名  年龄  关系  电话号码    通讯地址        电子邮箱  \n");

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

printf("\t请输入想删除记录中的名字:");

scanf("%s",s);

while(strcmp(per[i].Name,s)!=0&&i<n) i++;

if(i==n)

{

printf("\t通讯录中没有此人!\n");

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

printf("\t\t\t已经成功删除!\n");

return(n-1);

}

void Query_a_record(Person per[],int n)

{

int m;

printf("\t\n请选择查询方式:\n");

printf("\t┌──────┐\n");

printf("\t│1------姓名 │\n");

printf("\t│2------电话 │\n");
printf("\t│3------地址 │\n");

printf("\t│4------返回 │\n");

printf("\t└──────┘\n");

printf("请选择:");

scanf("%d",&m);

while(m!=1&&m!=2&&m!=3&&m!=4)

{

printf("输入错误，请重新选择:");

scanf("%d",&m);

}

if(m==1)

{

char s[20];

int i=0;

printf("\t请输入想查询的姓名:");

scanf("\t%s",s);

while(strcmp(per[i].Name,s)!=0&&i<n) i++;

if(i==n)

{

printf("\t通讯录中没有此人!\n");

return;

}

printf("\t此人编号: %d\n",per[i].Num);

printf("\t此人年龄: %s\n",per[i].age);

printf("\t与我的关系: %s\n",per[i].relation);

printf("\t电话号码: %s\n",per[i].Tel);

printf("\t通讯地址: %s\n",per[i].adds);

printf("\t电子邮箱: %s\n",per[i].Email);

} ;

if(m==2)

{

char s[20];

int i=0;

printf("\t请输入想查询的电话:");

scanf("\t%s",s);

while(strcmp(per[i].Num,s)!=0&&i<n) i++;

if(i==n)

{

printf("\t通讯录中没有此人!\n");

return;

}

printf("\t此人编号: %d\n",per[i].Num);

printf("\t此人姓名: %s\n",per[i].Name);
printf("\t此人年龄: %s\n",per[i].age);

printf("\t与我的关系: %s\n",per[i].relation);

printf("\t通讯地址: %s\n",per[i].adds);

printf("\t电子邮箱: %s\n",per[i].Email);

} ;

if(m==3)

{

char s[20];

int i=0;

printf("\t请输入想查询的地址:");

scanf("\t%s",s);

while(strcmp(per[i].adds,s)!=0&&i<n) i++;

if(i==n)

{

printf("\t通讯录中没有此人!\n");

return;

}

printf("\t此人编号: %d\n",per[i].Num);

printf("\t此人姓名: %s\n",per[i].Name);

printf("\t此人年龄: %s\n",per[i].age);

printf("\t与我的关系: %s\n",per[i].relation);

printf("\t电话号码: %s\n",per[i].Tel);

printf("\t电子邮箱: %s\n",per[i].Email);

} ;

}

void Change(Person per[],int n)

{

char s[20];

int i=0;

printf("\t请输入想修改的记录中的名字:");

scanf("%s",s);

while(strcmp(per[i].Name,s)!=0&&i<n) i++;

if(i==n)

{

printf("\t通讯录中没有此人!\n");

return;

}

printf("\t编号:");

scanf("\t%d",&per[i].Num);

printf("\t姓名:");

scanf("\t%s",per[i].Name);
printf("\t年龄:");

scanf("\t%s",per[i].age);

scanf("\t%s",per[i].relation);

printf("\t关系:");

printf("\t电话号码:");

scanf("\t%s",per[i].Tel);

printf("\t通讯住址:");

scanf("\t%s",per[i].adds);

printf("\t电子邮箱:");

scanf("\t%s",per[i].Email);

printf("\t修改成功！");

}

void WritetoText(Person per[],int n)

{

int i=0;

FILE *fp;                                          //定义文件指针

char filename[20];                                  //定义文件名

printf("\t保存到文件\n");                          //输入文件名

printf("\t请输入所保存的文件名:");

scanf("\t%s",filename);

if((fp=fopen(filename,"w"))==NULL)

{

printf("\t无法打开文件\n");

system("pause");

return;

}

fprintf(fp,"******************************************通讯录******************************************\n");

fprintf(fp,"编号    姓名  年龄  关系    电话号码          通讯地址            电子邮箱\n");
fprintf(fp,"------------------------------------------------------------------------------------------\n");

while(i<n)

{

fprintf(fp,"%-3d\t%-6s\t%-3s\t%-40s\t%-13s\t%-20s\t%-20s\n",per[i].Num,per[i].Name,per[i].age,per[i].relation,per[i].Tel,per[i].adds,per[i].Email);

i++;

}

fprintf(fp,"------------------------------------------------------------------------------------------\n");

fprintf(fp,"***************************************共有%d条记录****************************************\n",n);

fclose(fp);                                        //关闭文件

printf("保存成功!\n");

}

int main()                                        //主函数

{

int n=0;

for(;;)

{

switch(menu_select())

{

case 1:

printf("\n\t添加记录到通讯录\n");                        //添加记录

n=Input(pe,n);

break;

case 2:

printf("\n\t\t\t    通讯录记录表\n");                      //显示记录

Display(pe,n);

break;

case 3:

printf("\n\t从通讯录中删除记录\n");

n=Delete_a_record(pe,n);                                  //删除记录

printf("\t");

system("pause");

break;

case 4:

printf("\n\t在通讯录中查找记录\n");

Query_a_record(pe,n);                                      //查找记录

printf("\t");

system("pause");

break;

case 5:

printf("\n\t修改通讯录中的记录\n");

Change(pe,n);                                            //修改数据

printf("\t");

system("pause");

break;

case 6:

printf("\n\t保存功能\n");

WritetoText(pe,n);                                        //保存数据

printf("\t");

system("pause");

break;

case 0:

printf("\n\t\t谢谢使用，再见!\n");                        //结束程序

printf("\n\t\t");

system("pause");

exit(0);

}

}

}
