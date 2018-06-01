set ANSI_NULLS ON
set QUOTED_IDENTIFIER ON
go

CREATE TRIGGER [trg_EncryptPwd]

ON  [dbo].[putongtable]

AFTER INSERT,UPDATE

AS 

BEGIN

    IF(UPDATE(pwd))

    BEGIN


        DECLARE @pwd varchar(32)

        -- ��ȡ�û�ID������

        SELECT @pwd=pwd FROM inserted

        -- ��������

        UPDATE putongtable SET pwd = dbo.MD5(@pwd,32)

    END

END