 
 Create trigger trdStudent2
      On usertable
  after Delete
	  
    As begin Delete studentInformation

	
        where
	  studentInformation.ѧ�� in(
	  select userid
	  from deleted)
		
		end 