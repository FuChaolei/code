#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 50//最大人数
#define G 150//字符串个数
typedef struct student
{
	long studentID;
	char studentName[10];
	int score[6];//6门课程的成绩
}STUDENT;
void Inputscore(STUDENT str[],int n,int m);/*n为学生人数，m为科目的数目,输入的功能*/
void Printscore(STUDENT str[],float aver[],int n,int m);//输出
void santisfaic(STUDENT str[],int n,int m);/*计算*/
void Everystuscore(STUDENT str[],int n,int m);/*计算每个学生的总分和平均分*/
void Everycouscore(STUDENT str[],int n,int m);/*计算每门课程的总分和平均分*/
void datasort(STUDENT str[],int n,int m);/*排序*/
void datasort1(STUDENT str[],int n,int m);/*成绩由高到低进行排序*/
void datasort2(STUDENT str[],int n,int m);/*成绩由低到高进行排序*/
void datasort3(STUDENT str[],int n,int m);/*按学号由小到大进行排序*/
void datasort4(STUDENT str[],int n,int m);/*按姓名的字典顺序排出成绩表*/
void Search(STUDENT str[],int n,int m,long y);/*查询*/
void SearchNum(STUDENT str[],int n,int m,long y);/*按学号查询学生排名及考试成绩*/
void SearchName(STUDENT str[],int n,int m,char y[]);/*按姓名查询学生排名及考试成绩*/
void Analysis(STUDENT str[],int n,int m);/*分析类别*/
void PrintScore(STUDENT str[],int n,int m);/*信息浏览*/
void WritetoFile(STUDENT record[],int n,int m);/*将学生成绩导出至文件*/
void ReadfromFile(STUDENT record[],int *n,int *m);/*从文件导入学生成绩*/
int main()
{
    int w,v,u;
	int choice,n,x,pos,m;
	long y,z;
	STUDENT str[N];
	float a = 0, b = 0, c = 0, d = 0, e = 0;//表示学生的成绩等级高低
	printf("   \n\n\n\t\t\t\t☆☆☆☆☆☆☆☆学生成绩管理系统☆☆☆☆☆☆☆☆           \n\n");
    printf("          \t\t\t\t计算机类2班     20161101009张佳惠\n");
    printf("\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	do{
	printf("\t\t\t\t请输入学生人数：");
	scanf("%d", &n);
	}while(n<0);
	printf("\t\t\t\t请输入课程总数(最多不超过6门)：");
	scanf("%d",&m);
	while(m<0||m>6)//非法字符异常处理
	{
		while(getchar()!='\n');
	printf("\t\t\t\t你输入的课程多于6门或者输入非法字符，请重新输入：");
	scanf("%d",&m);
	}
	do {
		menu();//输出菜单
		scanf("%d", &choice);

		switch (choice) {
		    case 1:
		    Inputscore(str, n, m);//读入分数名字和学号
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
		 Analysis(str, n, m);//分析类别
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
			printf("\t\t\t\t你输入的数有误，请重新输入正确的数\n");//处理非法字符
		}
			getchar();
			getchar();
		}while (choice != 0);
	}
int menu()//输出菜单
{
     printf("\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	 printf("\t\t\t\t1.输入\t\t");
	 printf("2.计算\t\t");
	 printf("3.排序\n");
	 printf("\t\t\t\t4.查询\t\t");
	 printf("5.统计\t\t");
	 printf("6.浏览\n");
	 printf("\t\t\t\t7.导出\t\t");
	 printf("8.导入\t\t");
	 printf("0.退出\n\n");
	 printf("\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
	 printf("\t\t\t\t请输入你的选择：");
}
void Inputscore(STUDENT str[],int n,int m)//n为学生人数，m为科目的数目
{
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("\t\t\t\t请输入学生学号，姓名和各科成绩：(以空格作为间隔)\n");
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
    printf("\t\t\t\t1.求每个课程的平均分和总分\n\t\t\t\t2.求学生的平均分和总分\n\t\t\t\t0.返回上级目录\n");
		    for(w=1;;w++)
            {
                scanf("\t\t\t\t%d",&v);
                if(v==1)
                    {
                        Everycouscore( str, n, m);//求每个课程的平均分和总分}
                        break;
                 }
                 else if(v==2)
                 {
                     Everystuscore( str, n, m);//求学生的平均分和总分
			         break;
                 }
                 else if(v==0)
                 {
                     menu();
                     break;
                 }
                 else
                 {
                     printf("\t\t\t\t您的输入有误，请重新输入选项！");
                 }
                 break;
            }
            return 0;
}
void Everystuscore(STUDENT str[],int n,int m)/*计算每个学生的总分和平均分*/
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

		 printf("\t\t\t\t学号为%ld\t姓名为%s的总分为=%d，平均分=%2.1f\n",str[i].studentID,str[i].studentName,sum[i],aver[i]);
	}
}
void Everycouscore(STUDENT str[],int n,int m)//计算每门课程的总分和平均分
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
		 printf("\t\t\t\t科目%d的总分=%d,课程的平均分=%2.1f\n",i+1,sum[i],aver[i]);
	 }
}
void datasort(STUDENT str[],int n,int m)//排序
{
    int w,v,u;
     printf("\t\t\t\t1.按成绩\n\t\t\t\t2.按学号\n\t\t\t\t3.按姓名\n\t\t\t\t0.返回上级目录\n");
		    for(w=1;;w++)
            {
                scanf("\t\t\t\t%d",&v);
                if(v==1)
                    {
                        printf("\t\t\t\t1.升序排列\n\t\t\t\t2.降序排列\n\t\t\t\t0.返回上级目录\n");
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
                            printf("\t\t\t\t您的输入有误，请重新输入选项！");
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
                     printf("\t\t\t\t您的输入有误，请重新输入选项！");
                 }
            }
}
void datasort1(STUDENT str[],int n,int m)//成绩由高到低进行排序
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
		 printf("\t\t\t\t学号:%ld\t姓名:%s\t总分:%d\n",str[i].studentID,str[i].studentName,sum[i]);
	 }
}
void datasort2(STUDENT str[],int n,int m)//成绩由低到高进行排序
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
		 printf("\t\t\t\t学号:%ld\t姓名:%s\t总分:%d\n",str[i].studentID,str[i].studentName,sum[i]);
	 }
}
void datasort3(STUDENT str[],int n,int m)//按学号由小到大进行排序
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
		 printf("\t\t\t\t学号:%ld\t姓名:%s\t\n",str[i].studentID,str[i].studentName);
	 for(j=0;j<m;j++)
	 {
		 printf("科目%d的分数=%d\n",j+1,str[i].score[j]);
	 }
	 }
}
void datasort4(STUDENT str[],int n,int m)//按姓名的字典顺序排出成绩表
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
		 printf("\t\t\t\t学号:%ld\t姓名:%s\t\n",str[i].studentID,str[i].studentName);

	 for(j=0;j<m;j++)
	 {
		 printf("\t\t\t\t科目%d的分数=%d\n",j+1,str[i].score[j]);
	 }
	 }
}
void Search(STUDENT str[],int n,int m,long y)
{
    int w,v,u,z;
    char f[10];
    printf("\t\t\t\t1.按学号\n\t\t\t\t2.按姓名\n\t\t\t\t0.返回上级目录\n");
		    for(w=1;;w++)
            {
                scanf("%d",&v);
                if(v==1)
                    {
                        printf("\t\t\t\t请输入你要查询的学生的学号：");
			scanf("%ld",&z);
			SearchNum(str,n,m,z);//按学号查询学生排名及考试成绩
			break;
                 }
                 else if(v==2)
                 {
                     printf("\t\t\t\t请输入你要查询学生的姓名：");
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
                     printf("\t\t\t\t您的输入有误，请重新输入选项！");
                 }
            }
}
void SearchNum(STUDENT str[],int n,int m,long y)//按学号查询学生排名及考试成绩
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
		printf("\t\t\t\t没有找到！你输入的学号不正确！\n");
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
		 printf("\t\t\t\t学号:%ld\t姓名:%s\t\n",str[pos].studentID,str[pos].studentName);
		 for(j=0;j<m;j++)
		 {
			  printf("\t\t\t\t科目%d的分数=%d\n",j+1,str[pos].score[j]);
		 }
			  printf("\t\t\t\t总分为%d，排名为%d\n",sum[pos],rank);
	}
}
void SearchName(STUDENT str[],int n,int m,char y[])//按姓名查询学生排名及考试成绩
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
		printf("\t\t\t\t没有找到！你输入的姓名不正确！\n");
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
		 printf("\t\t\t\t学号:%ld\t姓名:%s\t\n",str[pos].studentID,str[pos].studentName);
		 for(j=0;j<m;j++)
		 {
			  printf("\t\t\t\t科目%d的分数=%d\n",j+1,str[pos].score[j]);
		 }
			  printf("\t\t\t\t总分为%d，排名为%d\n",sum[pos],rank);
	}
}
void Analysis(STUDENT str[],int n,int m)//分析类别
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
		printf("\t\t\t\t科目%d\n",j+1);
		printf("\t\t\t\t优秀人数有%d个，所占比例为%2.1f%%\n",a,A);
		printf("\t\t\t\t良好人数有%d个，所占比例为%2.1f%%\n",b,B);
		printf("\t\t\t\t中等人数有%d个，所占比例为%2.1f%%\n",c,C);
		printf("\t\t\t\t及格人数有%d个，所占比例为%2.1f%%\n",d,D);
		printf("\t\t\t\t不及格人数有%d个，所占比例为%2.1f%%\n",e,E);
	}
}
//打印学生成绩
void PrintScore(STUDENT str[],int n,int m)
{
    int i,j,sum[6];
	float aver[6];
    for(i=0;i<n;i++)
	{
	    sum[i]=aver[i]=0;
		 printf("\t\t\t\t学号为%ld\t姓名为%s\n",str[i].studentID,str[i].studentName);
		 for(j=0;j<m;j++)
		 {
			 printf("\t\t\t\t科目%d的分数分别为%d\n",j+1,str[i].score[j]);
			 sum[i]=sum[i]+str[i].score[j];
		 }
		 aver[i]=sum[i]/m;
		 printf("\t\t\t\t总分为%d,平均分为%2.1f\n",sum[i],aver[i]);
	}
}
//输出n个学生的考号、姓名及m门课程的成绩到文件student.txt中
void WritetoFile(STUDENT str[],int n,int m)
{
    int i;
    FILE *fp;
    if ((fp = fopen("student.txt", "w")) == NULL)
    {
        printf("\t\t\t\t文件导出失败！\n");
        exit(1);
    }
    for(i=0;i<n;i++)
    {
      fseek(fp,0,SEEK_END);
      fwrite(&str[i],sizeof(STUDENT),i,fp);
    }
    printf("\t\t\t\t导出文件已成功保存至d:\\学生成绩统计.txt，请查看！\n");
    fclose(fp);
}
//从文件中读取学生的学号、姓名及成绩等信息写入到结构体数组stu中
void ReadfromFile(STUDENT str[],int *n,int *m)
{
    printf("\t\t\t\t请输入要导入文件的地址!\n\t\t\t\t例如： student.txt\n");
    char ppt[30];
    printf("\t\t\t\t");
    getchar();
    gets(ppt);
    int t = 0;
    FILE *fp;
    if ((fp = fopen(ppt, "r")) == NULL)
    {
        printf("\t\t\t\t读入失败！请检查文件地址输入是否正确！\n");
        return 0;
    }
    while (!feof(fp))
    {
        fread(str,sizeof(STUDENT),*n,fp);
        t++;
    }
    *n = t;
    printf("\t\t\t\t读入成功！");
    fclose(fp);
}
