package com.nit.DAO;

import java.util.List;

import com.nit.model.Users;

//SQL> create table users(userid varchar2(30),username varchar2(30),userphoneno varchar2(30));
//
//Table created.
//
//SQL>
public interface UserDAO 
{
	
	public List<Users> AllUser();

}
