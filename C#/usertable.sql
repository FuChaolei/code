CREATE TABLE  usertable

          (userid  varchar(32), 

           password  varchar(32),  

		  


           PRIMARY KEY (userid),  

         foreign key (userid) references studentInformation(ѧ��)

                         /* ��������Լ��������Sno�����룬�����ձ���Student */

          
          
        );