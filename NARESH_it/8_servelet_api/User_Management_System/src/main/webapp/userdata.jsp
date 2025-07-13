<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="app.UserBean"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
UserBean ub=(UserBean)request.getAttribute("userdata");
out.println(ub.getName()+"<br>");
out.println(ub.getEmail()+"<br>");
out.println(ub.getPassword()+"<br>");
out.println(ub.getPhone()+"<br>");
%>

</body>
</html>