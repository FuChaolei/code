#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 50//�������
#define G 150//�ַ�������
typedef struct student
{
	long studentID;
	char studentName[10];
	int score[6];//6�ſγ̵ĳɼ�
}STUDENT;
void Inputscore(STUDENT str[],int n,int m);/*nΪѧ��������mΪ��Ŀ����Ŀ,����Ĺ���*/
void Printscore(STUDENT str[],float aver[],int n,int m);//���
void santisfaic(STUDENT str[],int n,int m);/*����*/
void Everystuscore(STUDENT str[],int n,int m);/*����ÿ��ѧ�����ֺܷ�ƽ����*/
void Everycouscore(STUDENT str[],int n,int m);/*����ÿ�ſγ̵��ֺܷ�ƽ����*/
void datasort(STUDENT str[],int n,int m);/*����*/
void datasort1(STUDENT str[],int n,int m);/*�ɼ��ɸߵ��ͽ�������*/
void datasort2(STUDENT str[],int n,int m);/*�ɼ��ɵ͵��߽�������*/
void datasort3(STUDENT str[],int n,int m);/*��ѧ����С�����������*/
void datasort4(STUDENT str[],int n,int m);/*���������ֵ�˳���ų��ɼ���*/
void Search(STUDENT str[],int n,int m,long y);/*��ѯ*/
void SearchNum(STUDENT str[],int n,int m,long y);/*��ѧ�Ų�ѯѧ�����������Գɼ�*/
void SearchName(STUDENT str[],int n,int m,char y[]);/*��������ѯѧ�����������Գɼ�*/
void Analysis(STUDENT str[],int n,int m);/*�������*/
void PrintScore(STUDENT str[],int n,int m);/*��Ϣ���*/
void WritetoFile(STUDENT record[],int n,int m);/*��ѧ���ɼ��������ļ�*/
void ReadfromFile(STUDENT record[],int *n,int *m);/*���ļ�����ѧ���ɼ�*/
int main()
{
    int w,v,u;
	int choice,n,x,pos,m;
	long y,z;
	STUDENT str[N];
	float a = 0, b = 0, c = 0, d = 0, e = 0;//��ʾѧ���ĳɼ��ȼ��ߵ�
	printf("   \n\n\n\t\t\t\t���������ѧ���ɼ�����ϵͳ���������           \n\n");
    printf("          \t\t\t\t�������2��     20161101009�żѻ�\n");
    printf("\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	do{
	printf("\t\t\t\t������ѧ��������");
	scanf("%d", &n);
	}while(n<0);
	printf("\t\t\t\t������γ�����(��಻����6��)��");
	scanf("%d",&m);
	while(m<0||m>6)//�Ƿ��ַ��쳣����
	{
		while(getchar()!='\n');
	printf("\t\t\t\t������Ŀγ̶���6�Ż�������Ƿ��ַ������������룺");
	scanf("%d",&m);
	}
	do {
		menu();//����˵�
		scanf("%d", &choice);

		switch (choice) {
		    case 1:
		    Inputscore(str, n, m);//����������ֺ�ѧ��
		    break;

		case 2:
		   santisfaic(str,n,m);
		   break;
        case 3:
            datasort(str,n,m);
            break;
		case 4:
			Search(str,n,m,y);
			break;
		case 5:
		 Analysis(str, n, m);//�������
			break;
        case 6:PrintScore(str,n,m);
                break;
            case 7:WritetoFile(str,n,m);
                break;
            case 8:ReadfromFile(str,&n,&m);
                break;
		case 0:
		    exit(0);

		default:
			printf("\t\t\t\t�������������������������ȷ����\n");//����Ƿ��ַ�
		}
			getchar();
			getchar();
		}while (choice != 0);
	}
int menu()//����˵�
{
     printf("\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	 printf("\t\t\t\t1.����\t\t");
	 printf("2.����\t\t");
	 printf("3.����\n");
	 printf("\t\t\t\t4.��ѯ\t\t");
	 printf("5.ͳ��\t\t");
	 printf("6.���\n");
	 printf("\t\t\t\t7.����\t\t");
	 printf("8.����\t\t");
	 printf("0.�˳�\n\n");
	 printf("\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
	 printf("\t\t\t\t���������ѡ��");
}
void Inputscore(STUDENT str[],int n,int m)//nΪѧ��������mΪ��Ŀ����Ŀ
{
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("\t\t\t\t������ѧ��ѧ�ţ������͸��Ƴɼ���(�Կո���Ϊ���)\n");
		scanf("\t\t\t\t%ld%*c%s",&str[i].studentID,str[i].studentName);
		for(j=0;j<m;j++)
		{
			scanf("\t\t\t\t%d",&str[i].score[j]);
		}
	}
}
void santisfaic(STUDENT str[],int n,int m)
{
    int w,v,u;
    printf("\t\t\t\t1.��ÿ���γ̵�ƽ���ֺ��ܷ�\n\t\t\t\t2.��ѧ����ƽ���ֺ��ܷ�\n\t\t\t\t0.�����ϼ�Ŀ¼\n");
		    for(w=1;;w++)
            {
                scanf("\t\t\t\t%d",&v);
                if(v==1)
                    {
                        Everycouscore( str, n, m);//��ÿ���γ̵�ƽ���ֺ��ܷ�}
                        break;
                 }
                 else if(v==2)
                 {
                     Everystuscore( str, n, m);//��ѧ����ƽ���ֺ��ܷ�
			         break;
                 }
                 else if(v==0)
                 {
                     menu();
                     break;
                 }
                 else
                 {
                     printf("\t\t\t\t����������������������ѡ�");
                 }
                 break;
            }
            return 0;
}
void Everystuscore(STUDENT str[],int n,int m)/*����ÿ��ѧ�����ֺܷ�ƽ����*/
{
    int i,j,sum[6];
	float aver[6];
	for ( i = 0; i < n; i++)
	{

		sum[i]=0;
		for ( j= 0; j < m; j++)
		{
			sum[i]=sum[i]+str[i].score[j];
		}
		aver[i]=(float)sum[i]/m;

	}
	for(i=0;i<n;i++)
	{

		 printf("\t\t\t\tѧ��Ϊ%ld\t����Ϊ%s���ܷ�Ϊ=%d��ƽ����=%2.1f\n",str[i].studentID,str[i].studentName,sum[i],aver[i]);
	}
}
void Everycouscore(STUDENT str[],int n,int m)//����ÿ�ſγ̵��ֺܷ�ƽ����
{
	int i,j;
	int sum[6];
	float aver[6];
	for(j=0;j<m;j++)
	{
	   sum[j]=0;
	   for(i=0;i<n;i++)
	   {
		   sum[j]=sum[j]+str[i].score[j];
	   }
	   aver[j]=(float)sum[j]/n;
	}
	for(i=0;i<m;i++)
	 {
		 printf("\t\t\t\t��Ŀ%d���ܷ�=%d,�γ̵�ƽ����=%2.1f\n",i+1,sum[i],aver[i]);
	 }
}
void datasort(STUDENT str[],int n,int m)//����
{
    int w,v,u;
     printf("\t\t\t\t1.���ɼ�\n\t\t\t\t2.��ѧ��\n\t\t\t\t3.������\n\t\t\t\t0.�����ϼ�Ŀ¼\n");
		    for(w=1;;w++)
            {
                scanf("\t\t\t\t%d",&v);
                if(v==1)
                    {
                        printf("\t\t\t\t1.��������\n\t\t\t\t2.��������\n\t\t\t\t0.�����ϼ�Ŀ¼\n");
                        {
                            for(w=1;;w++)
                           {
                            scanf("\t\t\t\t\t%d",&u);
                            if(u==1)
                            {
                                datasort2(str, n, m);
			                     break;
                            }
                             else if(u==2)
                            {
                                datasort1(str, n, m);
			                     break;
                            }
                            else if(u==0)
                            {
                                datasort(str, n, m);
			                     break;
                            }
                            else
                            {
                            printf("\t\t\t\t����������������������ѡ�");
                            }
                           }
                        }
                        break;
                 }
                 else if(v==2)
                 {
                    datasort3(str, n, m);
			         break;
                 }
                 else if(v==3)
                 {
                     datasort4(str, n, m);
			         break;
                 }
                 else if(v==0)
                 {
                     menu();
                     break;
                 }
                 else
                 {
                     printf("\t\t\t\t����������������������ѡ�");
                 }
            }
}
void datasort1(STUDENT str[],int n,int m)//�ɼ��ɸߵ��ͽ�������
{
	int i, j,sum[N];
	STUDENT temp1;
	int  temp2;
	for ( i = 0; i < n; i++)
	{
		sum[i]=0;
		for ( j= 0; j < m; j++)
		{
			sum[i]=sum[i]+str[i].score[j];
		}
	}
	for (i = 0;i<n - 1;i++)
	{
		for (j = i + 1;j<n;j++)
		{
			if (sum[j]>sum[i])
			{
				temp1 = str[j];
				temp2 = sum[j];
				str[j]=str[i];
				sum[j] = sum[i];
				str[i] = temp1;
				sum[i] = temp2;
			}
		}
	}
	 for(i=0;i<n;i++)
	 {
		 printf("\t\t\t\tѧ��:%ld\t����:%s\t�ܷ�:%d\n",str[i].studentID,str[i].studentName,sum[i]);
	 }
}
void datasort2(STUDENT str[],int n,int m)//�ɼ��ɵ͵��߽�������
{
	int i, j,sum[N];
	STUDENT temp1;
	int  temp2;
	for ( i = 0; i < n; i++)
	{
		sum[i]=0;
		for ( j= 0; j < m; j++)
		{
			sum[i]=sum[i]+str[i].score[j];
		}
	}
	for (i = 0;i<n - 1;i++)
	{
		for (j = i + 1;j<n;j++)
		{
			if (sum[j]<sum[i])
			{
				temp1 = str[j];
				temp2 = sum[j];
				str[j]=str[i];
				sum[j] = sum[i];
				str[i] = temp1;
				sum[i] = temp2;
			}
		}
	}
	 for(i=0;i<n;i++)
	 {
		 printf("\t\t\t\tѧ��:%ld\t����:%s\t�ܷ�:%d\n",str[i].studentID,str[i].studentName,sum[i]);
	 }
}
void datasort3(STUDENT str[],int n,int m)//��ѧ����С�����������
{
	int i, j;
	STUDENT temp1;
	int  temp2;
	for (i = 0;i<n - 1;i++)
	{
		for (j = i + 1;j<n;j++)
		{
			if (str[j].studentID<str[i].studentID)
			{
				temp1 = str[j];
				str[j]=str[i];
				str[i] = temp1;
			}
		}
	}
	 for(i=0;i<n;i++)
	 {
		 printf("\t\t\t\tѧ��:%ld\t����:%s\t\n",str[i].studentID,str[i].studentName);
	 for(j=0;j<m;j++)
	 {
		 printf("��Ŀ%d�ķ���=%d\n",j+1,str[i].score[j]);
	 }
	 }
}
void datasort4(STUDENT str[],int n,int m)//���������ֵ�˳���ų��ɼ���
{
	int i, j;
	STUDENT temp1;
	int  temp2;
	for (i = 0;i<n - 1;i++)
	{
		for (j = i + 1;j<n;j++)
		{
			if (strcmp(str[j].studentName,str[i].studentName)<0)
			{
				temp1 = str[j];
				str[j]=str[i];
				str[i] = temp1;
			}
		}
	}
	 for(i=0;i<n;i++)
	 {
		 printf("\t\t\t\tѧ��:%ld\t����:%s\t\n",str[i].studentID,str[i].studentName);

	 for(j=0;j<m;j++)
	 {
		 printf("\t\t\t\t��Ŀ%d�ķ���=%d\n",j+1,str[i].score[j]);
	 }
	 }
}
void Search(STUDENT str[],int n,int m,long y)
{
    int w,v,u,z;
    char f[10];
    printf("\t\t\t\t1.��ѧ��\n\t\t\t\t2.������\n\t\t\t\t0.�����ϼ�Ŀ¼\n");
		    for(w=1;;w++)
            {
                scanf("%d",&v);
                if(v==1)
                    {
                        printf("\t\t\t\t��������Ҫ��ѯ��ѧ����ѧ�ţ�");
			scanf("%ld",&z);
			SearchNum(str,n,m,z);//��ѧ�Ų�ѯѧ�����������Գɼ�
			break;
                 }
                 else if(v==2)
                 {
                     printf("\t\t\t\t��������Ҫ��ѯѧ����������");
			scanf("%s",f);
		SearchName(str, n, m, f);
			break;
                 }
                 else if(v==0)
                 {
                     menu();
                     break;
                 }
                 else
                 {
                     printf("\t\t\t\t����������������������ѡ�");
                 }
            }
}
void SearchNum(STUDENT str[],int n,int m,long y)//��ѧ�Ų�ѯѧ�����������Գɼ�
{
	int i,j,rank=1,find=0,sum[N],pos;
	for ( i = 0; i < n; i++)
	{
		sum[i]=0;
		for ( j= 0; j < m; j++)
		{
			sum[i]=sum[i]+str[i].score[j];
		}
	}
	for (i = 0; i < n; i++)
	{
		if(str[i].studentID==y)
		{
			find=1;
			pos=i;
			break;
		}
	}
	if (find==0)
	{
		printf("\t\t\t\tû���ҵ����������ѧ�Ų���ȷ��\n");
	}
	else
	{
		for ( i = 0; i < n; i++)
			{
				if (sum[i] > sum[pos])
				{
					rank++;
				}
			}
		 printf("\t\t\t\tѧ��:%ld\t����:%s\t\n",str[pos].studentID,str[pos].studentName);
		 for(j=0;j<m;j++)
		 {
			  printf("\t\t\t\t��Ŀ%d�ķ���=%d\n",j+1,str[pos].score[j]);
		 }
			  printf("\t\t\t\t�ܷ�Ϊ%d������Ϊ%d\n",sum[pos],rank);
	}
}
void SearchName(STUDENT str[],int n,int m,char y[])//��������ѯѧ�����������Գɼ�
{
	int i,j,rank=1,find=0,sum[N],pos;
	for ( i = 0; i < n; i++)
	{
		sum[i]=0;
		for ( j= 0; j < m; j++)
		{
			sum[i]=sum[i]+str[i].score[j];
		}
	}
	for (i = 0; i < n; i++)
	{
		if(strcmp(str[i].studentName,y)==0)
		{
			find=1;
			pos=i;
			break;
		}
	}
	if (find==0)
	{
		printf("\t\t\t\tû���ҵ������������������ȷ��\n");
	}
	else
	{
		for ( i = 0; i < n; i++)
			{
				if (sum[i] > sum[pos])
				{
					rank++;
				}
			}
		 printf("\t\t\t\tѧ��:%ld\t����:%s\t\n",str[pos].studentID,str[pos].studentName);
		 for(j=0;j<m;j++)
		 {
			  printf("\t\t\t\t��Ŀ%d�ķ���=%d\n",j+1,str[pos].score[j]);
		 }
			  printf("\t\t\t\t�ܷ�Ϊ%d������Ϊ%d\n",sum[pos],rank);
	}
}
void Analysis(STUDENT str[],int n,int m)//�������
{
	int a=0,b=0,c=0,d=0,e=0,i,j;
	float A,B,C,D,E;
	for(j=0;j<m;j++)
	{
		a=0,b=0,c=0,d=0,e=0;
		for(i=0;i<n;i++)
		{
			if(str[i].score[j]>=90)
			{
				a++;
			}
			else if(str[i].score[j]>=80)
			{
				b++ ;
			}
			else if(str[i].score[j]>=70)
			{
				c++;
			}
			else if(str[i].score[j]>=60)
			{
				d++;
			}
			else
			{
				e++;
			}
	A=((float)a/n)*100;
	B=((float)b/n)*100;
	C=((float)c/n)*100;
	D=((float)d/n)*100;
	E=((float)e/n)*100;}
		printf("\t\t\t\t��Ŀ%d\n",j+1);
		printf("\t\t\t\t����������%d������ռ����Ϊ%2.1f%%\n",a,A);
		printf("\t\t\t\t����������%d������ռ����Ϊ%2.1f%%\n",b,B);
		printf("\t\t\t\t�е�������%d������ռ����Ϊ%2.1f%%\n",c,C);
		printf("\t\t\t\t����������%d������ռ����Ϊ%2.1f%%\n",d,D);
		printf("\t\t\t\t������������%d������ռ����Ϊ%2.1f%%\n",e,E);
	}
}
//��ӡѧ���ɼ�
void PrintScore(STUDENT str[],int n,int m)
{
    int i,j,sum[6];
	float aver[6];
    for(i=0;i<n;i++)
	{
	    sum[i]=aver[i]=0;
		 printf("\t\t\t\tѧ��Ϊ%ld\t����Ϊ%s\n",str[i].studentID,str[i].studentName);
		 for(j=0;j<m;j++)
		 {
			 printf("\t\t\t\t��Ŀ%d�ķ����ֱ�Ϊ%d\n",j+1,str[i].score[j]);
			 sum[i]=sum[i]+str[i].score[j];
		 }
		 aver[i]=sum[i]/m;
		 printf("\t\t\t\t�ܷ�Ϊ%d,ƽ����Ϊ%2.1f\n",sum[i],aver[i]);
	}
}
//���n��ѧ���Ŀ��š�������m�ſγ̵ĳɼ����ļ�student.txt��
void WritetoFile(STUDENT str[],int n,int m)
{
    int i;
    FILE *fp;
    if ((fp = fopen("student.txt", "w")) == NULL)
    {
        printf("\t\t\t\t�ļ�����ʧ�ܣ�\n");
        exit(1);
    }
    for(i=0;i<n;i++)
    {
      fseek(fp,0,SEEK_END);
      fwrite(&str[i],sizeof(STUDENT),i,fp);
    }
    printf("\t\t\t\t�����ļ��ѳɹ�������d:\\ѧ���ɼ�ͳ��.txt����鿴��\n");
    fclose(fp);
}
//���ļ��ж�ȡѧ����ѧ�š��������ɼ�����Ϣд�뵽�ṹ������stu��
void ReadfromFile(STUDENT str[],int *n,int *m)
{
    printf("\t\t\t\t������Ҫ�����ļ��ĵ�ַ!\n\t\t\t\t���磺 student.txt\n");
    char ppt[30];
    printf("\t\t\t\t");
    getchar();
    gets(ppt);
    int t = 0;
    FILE *fp;
    if ((fp = fopen(ppt, "r")) == NULL)
    {
        printf("\t\t\t\t����ʧ�ܣ������ļ���ַ�����Ƿ���ȷ��\n");
        return 0;
    }
    while (!feof(fp))
    {
        fread(str,sizeof(STUDENT),*n,fp);
        t++;
    }
    *n = t;
    printf("\t\t\t\t����ɹ���");
    fclose(fp);
}
