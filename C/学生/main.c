#include<stdlib.h>
#include<conio.h>
#include<string.h>
int Shu;
typedef struct student  //����һ���ṹ��
{
      int num;




      char name[40];
      float mgar,cgar,egar;                      //��ѧ ���� Ӣ��
       float zong,ping;                           //�༶�ܳɼ� ƽ���ɼ�
}stu;

typedef struct LNode                             //��������ģʽ
{
      stu xue;                                   //�ṹ��   ÿһ���ṹ��xue������һ�����stu
      struct LNode *next;
} LNode,*LinkList;

LinkList InitLinkList()
{
      LinkList L;
      L=(LinkList)malloc(sizeof(LNode));
      L->next=NULL;
      return L;
}                                                //��������ģʽ

LinkList CreateTail()                            //β������   ������
{
      LinkList L;
      LNode *s,*r;
      int i,x;
      char name[40];//������������ѧ���ɼ���Ϣ����
      float m,c,e;
      L=InitLinkList();
      r=L;
      x=0;
      printf(" �y�y�y�y�y�y\n");
      printf("��������Ϣ������\n");
      printf("���z�z�z�z�z����\n");
      scanf("%d",&Shu);
      printf(" �y�y�y�y�y�y�y�y�y�y�y�y   \n");
      printf("��  ѧ�� ���� �� ���� Ӣ��   ��\n");
      printf("���z�z�z�z�z�z�z�z�z�z�z   ��\n");
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
void prn(LinkList L)                                                  //����һ���º��� case������prn(L)���� ����ѧ����Ϣ ��Ŀ�ɼ��Լ�ƽ���ɼ��ܳɼ�
{
      LNode *p;
      p=L->next;
      printf("  �x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x\n");
      printf("  ��ѧ�� ������ | �� ������ ��Ӣ�� ��ƽ���ɼ� ���ܼ� ��\n");
      printf("    �x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x��\n");
while (p!=NULL)
{
      printf("%d %s %0.2f %0.2f %0.2f %0.2f %0.2f\n",p->xue.num,p->xue.name,p->xue.mgar,p->xue.cgar,p->xue.egar,p->xue.ping,p->xue.zong);
      p=p->next;
}
      printf("\n");
}
void prn1(LinkList L)                                                 //�����º���   ��ѯ����ӡĳ��ѧ������Ϣ���ɼ�
{
    LNode *p;
    int x,y;
    p=L->next;
    printf("�x�x�x�x�x�x�x�x\n");
    printf("��������Ҫ��ѯ�Ũ�\n");
    printf("���y�y�y�y�y�y�y��\n");
    scanf("%d",&x);
    while(p)
{
    if(x==p->xue.num )
{
    y=1;
    printf("  �x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x\n");
    printf("\n��ѧ�� ������| �� ������ ��Ӣ�� ��ƽ���ɼ� ���ܼ� ��\n");
    printf("  ���x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x��\n");
    printf("%d %s %0.2f %0.2f %0.2f %0.2f %0.2f\n",p->xue.num,p->xue.name,p->xue.mgar,p->xue.cgar,p->xue.egar,p->xue.ping,p->xue.zong);   //���������������
}
p=p->next;
}
    if(y!=1)
    printf("��\n");
}

void xs(LinkList L)                                                   //������һ����Χ����ӡ�����Χ�ڵ�ѧ������Ϣ��������ѧ�ɼ���70��80����
{
    LNode *p;

    p=L->next;
    float x,y;
    printf("�x�x�x�x�x�x�x�x�x�x\n");
    printf("������Ҫ��ѯ������Χ��\n");
    printf("���y�y�y�y�y�y�y�y�y��\n");
    scanf("%f",&x);
    scanf("%f",&y);
    while(p)
{
if(p->xue.mgar>=x && p->xue.mgar<=y)
{
    printf("  �x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x\n");
    printf("  ��ѧ�� ������| �� ������ ��Ӣ�� ��ƽ���ɼ� ���ܼ� ��\n");
    printf("  ���x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x��\n");
    printf("%d %s %0.2f %0.2f %0.2f %0.2f %0.2f\n",p->xue.num,p->xue.name,p->xue.mgar,p->xue.cgar,p->xue.egar,p->xue.ping,p->xue.zong);
}
p=p->next;
}
}
void ren(LinkList L)                                               //�º��� ����༶��ÿһ�Ƶ�ƽ���ɼ������ֱ��ӡ���ģ���ѧ�������ƽ���ɼ����������Ƽ���������ƽ����
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
    printf("�x�x�x�x�x�x�x�x\n");
    printf("���༶ƽ����    ��\n");
    printf("���y�y�y�y�y�y  ��\n");
    printf("�x�x�x�x�x�x�x�x�x�x�x�x�x�x\n");
    printf("������ ��ѧ  ���� Ӣ�� ��ƽ���� ������\n");
    printf("���y�y�y�y�y�y�y�y�y�y�y�y�y�y�y�y�y�y��");
    printf("%s %0.2f  %0.2f %0.2f %0.2f %d",name,m/i,c/i,e/i,j/i,i);     //�ֱ�Կ�ͼ�гɼ�����Ľ���������
}
void del(LinkList L)                                            //����ɾ��ѧ����Ϣ����
{
    int x;
    LNode *p,*q;
    p=L->next;
    q=L;
    printf("�x�x�x�x�x�x�x�x\n");
    printf("��������Ҫɾ����ѧ�Ũ�\n");
    printf("���y�y�y�y�y�y  ��\n");
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
LinkList add(LinkList L)                                        //�������ѧ����Ϣ����
{
    LNode *s;
    int n,i,x;
    float m,c,e;
    char name[30];
    i=0;
    printf("�x�x�x�x�x�x�x�x�x�x\n");
    printf("��������Ҫ�����Ϣ����\n");
    printf("���y�y�y�y�y�y�y�y  ��\n");
    scanf("%d",&x);
    printf("\n�� ���� �� ���� Ӣ�� \n");
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
LinkList pxm(LinkList L)                                            //��������ѧ���ܳɼ���������
{
    printf("�x�x�x�x�x�x�x�x�x\n");
    printf("���������ܳɼ�������\n");
    printf("���y�y�y�y�y�y�y  ��\n");
    int i;
    LNode *p,*q,*a;

for(i=0;i<Shu;i++)
{
    p=L->next;
    q=p->next;
    while(q)
{
if(p->xue.mgar<=q->xue.mgar)                                        //�����㷨
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
void cd()                                                          //���캯�� ����ѧ���ɼ�ϵͳ�������
{
    printf("            �x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x    \n");
    printf("           ��                       1��������Ϣ                                              �� \n");
    printf("           ���x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x  �� \n");
    printf("           ��                       2����ѯ����Ϣ                                            �� \n");
    printf("           ���x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x  �� \n");
    printf("           ��                       3����ѯ�ɼ���Ϣ                                          �� \n");
    printf("           ���x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x  �� \n");
    printf("           ��                       4���༶ƽ���ɼ�                                          �� \n");
    printf("           ���x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x  �� \n");
    printf("           ��                       5��ɾ��ѧ����Ϣ���ɼ�                                    �� \n");
    printf("           ���x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x  �� \n");
    printf("           ��                       6������ѧ����Ϣ���ɼ�                                    �� \n");
    printf("           ���x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x  �� \n");
    printf("           ��                       7��ѧ����Ϣ�ɼ���������                                  �� \n");
    printf("           ���x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x  �� \n");
    printf("           ��             ���Ƚ��в���1�ٰ�����8��ʾȫ����Ϣ�ٽ��������                     �� \n");
    printf("           ���x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x  �� \n");
    printf("           ��             ������ѡ�                                                       �� \n");
    printf("           ���x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x  �� \n");
}
int main()                                //������
{
    int i;
   system("color 1f");
   system("mode con: cols=140 lines=130");
    LinkList L;
    do
{
    cd();
    scanf("%d",&i);
    switch(i)                             //ѡ���֧�ṹ������1��7����ѡ��
{
case 1:                                   //��������case��䣬�ֱ��ʾ����ĳ������ʱ���в����µĺ�������
{
    system("cls");                        //��������
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
