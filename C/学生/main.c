#include<stdlib.h>
#include<conio.h>
#include<string.h>
int Shu;
typedef struct student  //定义一个结构体
{
      int num;




      char name[40];
      float mgar,cgar,egar;                      //数学 语文 英语
       float zong,ping;                           //班级总成绩 平均成绩
}stu;

typedef struct LNode                             //典型链表模式
{
      stu xue;                                   //结构体   每一个结构体xue都包含一个结点stu
      struct LNode *next;
} LNode,*LinkList;

LinkList InitLinkList()
{
      LinkList L;
      L=(LinkList)malloc(sizeof(LNode));
      L->next=NULL;
      return L;
}                                                //典型链表模式

LinkList CreateTail()                            //尾插带结点   链表创建
{
      LinkList L;
      LNode *s,*r;
      int i,x;
      char name[40];//建立基础输入学生成绩信息链表
      float m,c,e;
      L=InitLinkList();
      r=L;
      x=0;
      printf(" ▂▂▂▂▂▂\n");
      printf("▏输入信息数：▏\n");
      printf("▏▃▃▃▃▃　▏\n");
      scanf("%d",&Shu);
      printf(" ▂▂▂▂▂▂▂▂▂▂▂▂   \n");
      printf("▏  学号 名字 数 语文 英语   ▏\n");
      printf("▏▃▃▃▃▃▃▃▃▃▃▃   ▏\n");
      while(x<Shu)
{
      s=(LNode *)malloc(sizeof(LNode));
      scanf("%d",&i);
      s->xue.num=i;
      scanf("%s",&name);
      strcpy(s->xue.name,name);
      scanf("%f",&m);
      s->xue.mgar=m;
      scanf("%f",&c);
      s->xue.cgar=c;
      scanf("%f",&e);
      s->xue.egar=e;
      s->xue.zong=m+c+e;
      s->xue.ping=(m+c+e)/3;
      s->next=NULL;
      r->next=s;
      r=s;
      x++;
}

return (L);
}
void prn(LinkList L)                                                  //构造一个新函数 case步骤中prn(L)运用 包含学生信息 科目成绩以及平均成绩总成绩
{
      LNode *p;
      p=L->next;
      printf("  ▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁\n");
      printf("  ▏学号 ▏姓名 | 数 ▏语文 ▏英语 ▏平均成绩 ▏总绩 ▏\n");
      printf("    ▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▏\n");
while (p!=NULL)
{
      printf("%d %s %0.2f %0.2f %0.2f %0.2f %0.2f\n",p->xue.num,p->xue.name,p->xue.mgar,p->xue.cgar,p->xue.egar,p->xue.ping,p->xue.zong);
      p=p->next;
}
      printf("\n");
}
void prn1(LinkList L)                                                 //构造新函数   查询并打印某个学生的信息及成绩
{
    LNode *p;
    int x,y;
    p=L->next;
    printf("▁▁▁▁▁▁▁▁\n");
    printf("▏请输入要查询号▏\n");
    printf("▏▂▂▂▂▂▂▂▏\n");
    scanf("%d",&x);
    while(p)
{
    if(x==p->xue.num )
{
    y=1;
    printf("  ▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁\n");
    printf("\n▏学号 ▏姓名| 数 ▏语文 ▏英语 ▏平均成绩 ▏总绩 ▏\n");
    printf("  ▏▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▏\n");
    printf("%d %s %0.2f %0.2f %0.2f %0.2f %0.2f\n",p->xue.num,p->xue.name,p->xue.mgar,p->xue.cgar,p->xue.egar,p->xue.ping,p->xue.zong);   //讲计算结果进行输出
}
p=p->next;
}
    if(y!=1)
    printf("存\n");
}

void xs(LinkList L)                                                   //先输入一个范围，打印这个范围内的学生的信息，比如数学成绩在70到80的人
{
    LNode *p;

    p=L->next;
    float x,y;
    printf("▁▁▁▁▁▁▁▁▁▁\n");
    printf("▏输入要查询数绩范围▏\n");
    printf("▏▂▂▂▂▂▂▂▂▂▏\n");
    scanf("%f",&x);
    scanf("%f",&y);
    while(p)
{
if(p->xue.mgar>=x && p->xue.mgar<=y)
{
    printf("  ▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁\n");
    printf("  ▏学号 ▏姓名| 数 ▏语文 ▏英语 ▏平均成绩 ▏总绩 ▏\n");
    printf("  ▏▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▏\n");
    printf("%d %s %0.2f %0.2f %0.2f %0.2f %0.2f\n",p->xue.num,p->xue.name,p->xue.mgar,p->xue.cgar,p->xue.egar,p->xue.ping,p->xue.zong);
}
p=p->next;
}
}
void ren(LinkList L)                                               //新函数 计算班级的每一科的平均成绩，最后分别打印语文，数学，外语的平均成绩，还有三科加起来的总平均分
{
    LNode *p;
    float m,c,e,j;
    char name[30];
    int i=0;
    m=0;c=0;e=0;j=0;
    p=L->next;
    while(p)
    {  strcpy(p->xue.name,name);
    m=m+p->xue.mgar;
    c=c+p->xue.cgar;
    e=e+p->xue.egar;
    j=j+p->xue.ping;
    p=p->next;
    i++;
}
    printf("▁▁▁▁▁▁▁▁\n");
    printf("▏班级平均绩    ▏\n");
    printf("▏▂▂▂▂▂▂  ▏\n");
    printf("▁▁▁▁▁▁▁▁▁▁▁▁▁▁\n");
    printf("▏姓名 数学  语文 英语 总平均绩 总数▏\n");
    printf("▏▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▏");
    printf("%s %0.2f  %0.2f %0.2f %0.2f %d",name,m/i,c/i,e/i,j/i,i);     //分别对框图中成绩计算的结果进行输出
}
void del(LinkList L)                                            //构造删除学生信息函数
{
    int x;
    LNode *p,*q;
    p=L->next;
    q=L;
    printf("▁▁▁▁▁▁▁▁\n");
    printf("▏请输入要删除的学号▏\n");
    printf("▏▂▂▂▂▂▂  ▏\n");
    scanf("%d",&x);
    while(p)
{
if(p->xue.num==x)
{
    q->next=p->next;
    break;
}
else
{
    p=p->next;
    q=q->next;
}
}
    Shu--;
}
LinkList add(LinkList L)                                        //构造添加学生信息函数
{
    LNode *s;
    int n,i,x;
    float m,c,e;
    char name[30];
    i=0;
    printf("▁▁▁▁▁▁▁▁▁▁\n");
    printf("▏请输入要添加信息数▏\n");
    printf("▏▂▂▂▂▂▂▂▂  ▏\n");
    scanf("%d",&x);
    printf("\n号 姓名 数 语文 英语 \n");
    while(i<x)
{
    s=(LinkList)malloc(sizeof(LNode));
    scanf("%d",&n);
    s->xue.num=n;
    scanf("%s",&name);
      strcpy(s->xue.name,name);
    scanf("%f",&m);
    s->xue.mgar=m;
    scanf("%f",&c);
    s->xue.cgar=c;
    scanf("%f",&e);
    s->xue.egar=e;
    s->xue.zong=m+c+e;
    s->xue.ping=(m+c+e)/3;
    s->next=L->next;
    L->next=s;
    i++;
    Shu++;
}
return L;
}
LinkList pxm(LinkList L)                                            //新链表按照学生总成绩进行排名
{
    printf("▁▁▁▁▁▁▁▁▁\n");
    printf("▏按数据总成绩排名▏\n");
    printf("▏▂▂▂▂▂▂▂  ▏\n");
    int i;
    LNode *p,*q,*a;

for(i=0;i<Shu;i++)
{
    p=L->next;
    q=p->next;
    while(q)
{
if(p->xue.mgar<=q->xue.mgar)                                        //排序算法
{
    p->next=q->next;
    q->next=L->next;
    L->next=q;
    a=p;
    p=q;
    q=a;
}
    p=p->next;
    q=q->next;
}
}
prn(L);
return 0;
}
void cd()                                                          //构造函数 进入学生成绩系统基本框架
{
    printf("            ▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁    \n");
    printf("           ▏                       1、输入信息                                              ▏ \n");
    printf("           ▏▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁  ▏ \n");
    printf("           ▏                       2、查询号信息                                            ▏ \n");
    printf("           ▏▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁  ▏ \n");
    printf("           ▏                       3、查询成绩信息                                          ▏ \n");
    printf("           ▏▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁  ▏ \n");
    printf("           ▏                       4、班级平均成绩                                          ▏ \n");
    printf("           ▏▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁  ▏ \n");
    printf("           ▏                       5、删除学生信息及成绩                                    ▏ \n");
    printf("           ▏▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁  ▏ \n");
    printf("           ▏                       6、增加学生信息及成绩                                    ▏ \n");
    printf("           ▏▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁  ▏ \n");
    printf("           ▏                       7、学生信息成绩进行排序                                  ▏ \n");
    printf("           ▏▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁  ▏ \n");
    printf("           ▏             请先进行操作1再按数字8显示全部信息再进行其操作                     ▏ \n");
    printf("           ▏▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁  ▏ \n");
    printf("           ▏             请输入选项：                                                       ▏ \n");
    printf("           ▏▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁  ▏ \n");
}
int main()                                //主函数
{
    int i;
   system("color 1f");
   system("mode con: cols=140 lines=130");
    LinkList L;
    do
{
    cd();
    scanf("%d",&i);
    switch(i)                             //选择分支结构，输入1到7进行选择
{
case 1:                                   //以下运用case语句，分别表示具有某个条件时运行步骤下的函数程序
{
    system("cls");                        //清屏函数
    L=CreateTail();
    prn(L);
    break;
}
case 2:
{
    system("cls");
    prn1(L);
    break;
}
case 3:
{
    system("cls");
    xs(L);
    break;
}
case 4:
{
    system("cls");
    ren(L);
    break;
}
case 5:
{
    system("cls");
    del(L);
    break;
}
case 6:
{
    system("cls");
    add(L);
    prn(L);
    break;
}
case 7:
{
    system("cls");
    pxm(L);
    break;
}
case 8:
{
    prn(L);
    break;
}
 }
}
while(i<=8 && i>=1);
}
