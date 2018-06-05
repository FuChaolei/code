 Create trigger trdStudent
      On usertable
      for Delete
    As
      Delete studentInformation 
        From usertable br , studentInformation d
        Where br.userid=d.Ñ§ºÅ