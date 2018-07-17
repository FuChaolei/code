#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Salary_Info write();//输入工资信息函数
int write_txt();//写入aa.txt文本操作函数
void read_txt(int number);//读取aa.txt文本操作函数
//void look(struct Salary_Info look[],int number);//显示所有工资信息操作函数

struct Salary_Info
{
   int Card_No;                   //工资卡号
   char name[20];                 //姓名
   int month;                     //月份
   float Init_Salary;               //应发工资
   float Water_Rate;               //水费
   float Electric_Rate;             //电费
   float tax;                     //税金
   float Final_Salary;             //实发工资
};

struct Salary_Info write()//给aa.txt文本内写入的工资信息
{
    struct Salary_Info writeaa;
	float a=0.0,b=0.0,c=0.0,d=0.0,e=0.0,f=0.0;

	printf("Card_No:");
	scanf("%d",&writeaa.Card_No);
	printf("\n");
	printf("name:");
	scanf("%s",writeaa.name);
	printf("\n");
	printf("month:");
	scanf("%d",&writeaa.month);
	printf("\n");
	printf("Init_Salary:");//输入应发工资
	scanf("%f",&a);
	writeaa.Init_Salary=a;
	printf("\n");
	printf("Water_Rate:");//输入水费
	scanf("%f",&b);
	writeaa.Water_Rate=b;
	printf("\n");


	printf("Electric_Rate:");//输入电费
	scanf("%f",&c);
	writeaa.Electric_Rate=c;
	printf("\n");
	//税金
	if(a<=800)writeaa.tax=0;
	if(a>800 && a<=1400)writeaa.tax=(a-800)*0.05;
	if(a>1400)writeaa.tax=(a-1400)*0.10;
	//实发工资
	writeaa.Final_Salary=a-b-c-writeaa.tax;

	return writeaa;
}

int write_txt()
{
	struct Salary_Info write1;//初始化写操作write1

	int key=1,number=0,old=0;//录入开关

	FILE *openaa;

	openaa=fopen("D:\\Desktop\\aa.txt","rb+");//打开文本

	if(openaa==NULL)//文本打开失败
	{
		printf("open file aa.txt failed!\n");

	}
	else//文本打开成功
	{
		printf("open file aa.txt succeed!\n");
		printf("请输入上次录入信息条数:");
		scanf("%d",&number);
		printf("录入请输1，结束录入请输0：");
		scanf("%d",&key);

		while(key)//判断是否继续输入
		{
			write1=write();//键盘输入工资信息
			fseek(openaa, 0, SEEK_END);//定位到文本末端
			fwrite(&write1,sizeof(struct Salary_Info),1,openaa);//在文本末端录入信息
			printf("继续录入请输1，结束录入请输0：");
			scanf("%d",&key);
			number++;
		}
	}
	fclose(openaa);
	return number+old;
}
void look(struct Salary_Info look[],int number)
{
	struct Salary_Info j;
	int i=0,x=0,y=0,key=0,z=1,w=0;
	i=number;
	for(x=0;x<i-1;x++)//对工资卡号进行冒泡排序
		for(y=0;y<i-1;y++)
		{
			if(look[x].Card_No<look[y].Card_No)
			{
				j = look[x];
				look[x] = look[y];
				look[y] = j;
			}
		}
	printf("统计输入2，浏览输入1，查询输入0：");
	scanf("%d",&z);
	if(z==1)
	{
	    printf("卡号  姓名  月份    应发工资    水费     电费    利息     实发工资\n");
		while(key<i)//显示所有工资信息
		{
			if(key%10==9)system("pause");//按任意键继续,每10条出现一次

			printf("%d  ",look[key].Card_No);
			printf("%s  ",look[key].name);
			printf("%d  ",look[key].month);
			printf("%f  ",look[key].Init_Salary);
			printf("%f  ",look[key].Water_Rate);
			printf("%f  ",look[key].Electric_Rate);
			printf("%f  ",look[key].tax);
			printf("%f  \n",look[key].Final_Salary);
			key++;
		}
	}
	if(z==0)//查找某一编号工资信息
	{
		printf("请输入查询编号：");
		scanf("%d",&w);
		i=0;
		while(look[i].Card_No!=look[w].Card_No)
		{
		i++;
		}
		key=i-1;

			printf("%d  ",look[key].Card_No);
			printf("%s  ",look[key].name);
			printf("%d  ",look[key].month);
			printf("%f  ",look[key].Init_Salary);
			printf("%f  ",look[key].Water_Rate);
			printf("%f  ",look[key].Electric_Rate);
			printf("%f  ",look[key].tax);
			printf("%f  \n",look[key].Final_Salary);

	}
	if(z==2)//统计几个月份中工资总和
	{
		int id=0,moth0=0,moth1=0;
		float s=0;
		printf("\n请输入统计卡号：");
		scanf("%d",&id);
		printf("请输入起始月份：");
		scanf("%d",&moth0);
		printf("请输入结束月份：");
		scanf("%d",&moth1);
		key=0;
		while(key<i)
		{
			if(look[key].Card_No==id && look[key].month >=moth0 && look[key].month <= moth1)
				s=s+look[key].Final_Salary;
			key++;
		}
		printf("%f\n",s);
	}

}

void read_txt(int number)
{
	struct Salary_Info read1[1000];//初始化读操作,read1[1000]
	int i=0;
	FILE *openaa;
	openaa=fopen("D:\\Desktop\\aa.txt","rb+");//打开文本
	fread(read1,sizeof(struct Salary_Info),number,openaa); // 读所有结构体
	look(read1,number);
	fclose(openaa);//关闭文本
}


int main()
{
	int number=0;
	number=write_txt();
	printf("录入信息成功，系统当前有%d条信息!\n",number);
	printf("请您记录该信息，方便下次进入该系统!\n",number);
	system("pause");
	read_txt(number);
	return 0;
}

