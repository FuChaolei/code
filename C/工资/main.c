#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Salary_Info write();//���빤����Ϣ����
int write_txt();//д��aa.txt�ı���������
void read_txt(int number);//��ȡaa.txt�ı���������
//void look(struct Salary_Info look[],int number);//��ʾ���й�����Ϣ��������

struct Salary_Info
{
   int Card_No;                   //���ʿ���
   char name[20];                 //����
   int month;                     //�·�
   float Init_Salary;               //Ӧ������
   float Water_Rate;               //ˮ��
   float Electric_Rate;             //���
   float tax;                     //˰��
   float Final_Salary;             //ʵ������
};

struct Salary_Info write()//��aa.txt�ı���д��Ĺ�����Ϣ
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
	printf("Init_Salary:");//����Ӧ������
	scanf("%f",&a);
	writeaa.Init_Salary=a;
	printf("\n");
	printf("Water_Rate:");//����ˮ��
	scanf("%f",&b);
	writeaa.Water_Rate=b;
	printf("\n");


	printf("Electric_Rate:");//������
	scanf("%f",&c);
	writeaa.Electric_Rate=c;
	printf("\n");
	//˰��
	if(a<=800)writeaa.tax=0;
	if(a>800 && a<=1400)writeaa.tax=(a-800)*0.05;
	if(a>1400)writeaa.tax=(a-1400)*0.10;
	//ʵ������
	writeaa.Final_Salary=a-b-c-writeaa.tax;

	return writeaa;
}

int write_txt()
{
	struct Salary_Info write1;//��ʼ��д����write1

	int key=1,number=0,old=0;//¼�뿪��

	FILE *openaa;

	openaa=fopen("D:\\Desktop\\aa.txt","rb+");//���ı�

	if(openaa==NULL)//�ı���ʧ��
	{
		printf("open file aa.txt failed!\n");

	}
	else//�ı��򿪳ɹ�
	{
		printf("open file aa.txt succeed!\n");
		printf("�������ϴ�¼����Ϣ����:");
		scanf("%d",&number);
		printf("¼������1������¼������0��");
		scanf("%d",&key);

		while(key)//�ж��Ƿ��������
		{
			write1=write();//�������빤����Ϣ
			fseek(openaa, 0, SEEK_END);//��λ���ı�ĩ��
			fwrite(&write1,sizeof(struct Salary_Info),1,openaa);//���ı�ĩ��¼����Ϣ
			printf("����¼������1������¼������0��");
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
	for(x=0;x<i-1;x++)//�Թ��ʿ��Ž���ð������
		for(y=0;y<i-1;y++)
		{
			if(look[x].Card_No<look[y].Card_No)
			{
				j = look[x];
				look[x] = look[y];
				look[y] = j;
			}
		}
	printf("ͳ������2���������1����ѯ����0��");
	scanf("%d",&z);
	if(z==1)
	{
	    printf("����  ����  �·�    Ӧ������    ˮ��     ���    ��Ϣ     ʵ������\n");
		while(key<i)//��ʾ���й�����Ϣ
		{
			if(key%10==9)system("pause");//�����������,ÿ10������һ��

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
	if(z==0)//����ĳһ��Ź�����Ϣ
	{
		printf("�������ѯ��ţ�");
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
	if(z==2)//ͳ�Ƽ����·��й����ܺ�
	{
		int id=0,moth0=0,moth1=0;
		float s=0;
		printf("\n������ͳ�ƿ��ţ�");
		scanf("%d",&id);
		printf("��������ʼ�·ݣ�");
		scanf("%d",&moth0);
		printf("����������·ݣ�");
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
	struct Salary_Info read1[1000];//��ʼ��������,read1[1000]
	int i=0;
	FILE *openaa;
	openaa=fopen("D:\\Desktop\\aa.txt","rb+");//���ı�
	fread(read1,sizeof(struct Salary_Info),number,openaa); // �����нṹ��
	look(read1,number);
	fclose(openaa);//�ر��ı�
}


int main()
{
	int number=0;
	number=write_txt();
	printf("¼����Ϣ�ɹ���ϵͳ��ǰ��%d����Ϣ!\n",number);
	printf("������¼����Ϣ�������´ν����ϵͳ!\n",number);
	system("pause");
	read_txt(number);
	return 0;
}

