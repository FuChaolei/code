 
 Create trigger trdStudent2
      On usertable
  after Delete
	  
    As begin Delete studentInformation

	
        where
	  studentInformation.Ñ§ºÅ in(
	  select userid
	  from deleted)
		
		end 