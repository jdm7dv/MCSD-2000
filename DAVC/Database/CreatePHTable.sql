if exists (select * from sysobjects where id = object_id(N'[dbo].[pricehistory]') and OBJECTPROPERTY(id, N'IsUserTable') = 1)
drop table [dbo].[pricehistory]
GO

CREATE TABLE [dbo].[pricehistory] (
	[ph_fund] [char] (10) NOT NULL ,
	[ph_date] [datetime] NOT NULL ,
	[ph_price] [money] NULL ,
	[ph_uploadedby] [char] (10) NULL ,
	[ph_uploaddate] [datetime] NULL 
) ON [PRIMARY]
GO

ALTER TABLE [dbo].[pricehistory] WITH NOCHECK ADD 
	CONSTRAINT [PK_pricehistory] PRIMARY KEY  NONCLUSTERED 
	(
		[ph_fund],
		[ph_date]
	)  ON [PRIMARY] 
GO

