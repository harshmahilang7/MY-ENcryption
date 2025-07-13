<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="admin.*"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
AdminBean ab=(AdminBean)session.getAttribute("ab");
String msg= (String) request.getAttribute("msg");
out.println(msg);
%>
<h1>welecome <%=ab.getUsername() %></h1>

<a href="adminlogin.html">admin login</a>

</body>
</html>