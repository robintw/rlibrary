SQL for Library Software

CREATE TABLE Books (CopyID integer primary key autoincrement, ISBN varchar(15), Title varchar(150), Author varchar(150), Publisher varchar(150), Type boolean, Dewey varchar (20), Binding boolean, Pages varchar (20), Edition varchar (20), PublicationDate date, HaveRead boolean, PriceBought double, CoverImage blob, DateAdded date);

CREATE TABLE Keywords (ID integer primary key autoincrement, Name varchar(50));

CREATE TABLE KeywordsLink (BookID integer, KeywordID integer);