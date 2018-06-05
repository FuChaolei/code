CREATE TABLE  usertable

          (userid  varchar(32), 

           password  varchar(32),  

		  


           PRIMARY KEY (userid),  

         foreign key (userid) references studentInformation(学号)

                         /* 表级完整性约束条件，Sno是外码，被参照表是Student */

          
          
        );