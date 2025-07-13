<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="app.UserBean" import="java.util.*" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<h1>all user </h1>
<%

ArrayList<UserBean>all=(ArrayList<UserBean>)request.getAttribute("alldata");
for(UserBean ub : all)
{
	out.println("<hr>");
	out.println(ub.getName()+"|");
	out.println(ub.getEmail()+"|");
	out.println(ub.getPassword()+"|");
	out.println(ub.getPhone()+"|");
	out.println("<hr>");
}
%>
</body>
</html>