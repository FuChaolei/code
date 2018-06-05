CREATE TABLE  studentInformation

          (学号  varchar(32), 

           姓名  varchar(32),  

		   性别  varchar(2),

		   出生年月 varchar(32),

		   专业 varchar(32),


           PRIMARY KEY (学号),  

                          /* 主码由两个属性构成，必须作为表级完整性进行定义*/

          
        );