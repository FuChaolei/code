USE [jiaowu]
GO
/****** Object:  Trigger [dbo].[trdStudent]    Script Date: 2018/6/2 8:58:21 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
 ALTER trigger [dbo].[trdStudent]
      On [dbo].[studentInformation]
	
      after Delete
	  
    As begin Delete usertable
	  alter   table   usertable nocheck   constraint   all 
        where
	  usertable.userid in(
	  select studentInformation.学号
	  from deleted)
		alter   table  usertable  check   constraint   all
		end