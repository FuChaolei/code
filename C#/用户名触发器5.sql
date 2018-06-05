 Create trigger trdStudent2
      On usertable
      for Delete
    As
	alter   table   studentInformation nocheck   constraint   all 
      Delete studentInformation 
        From usertable br , studentInformation d
        Where br.userid=d.Ñ§ºÅ
		alter   table  studentInformation  check   constraint   all