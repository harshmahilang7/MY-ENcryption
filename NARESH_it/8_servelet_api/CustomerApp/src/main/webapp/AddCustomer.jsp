<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>ADD Successfully</title>
</head>
<body>
<h1>ADD Successfully👌✅</h1>
<% 
String msg= (String) request.getAttribute("msg");
out.println(msg);
%>
</body>
</html>