<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="customer.CustomerBean" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>

<%
CustomerBean cb=(CustomerBean)request.getAttribute("data");
out.println(cb.getId());
out.println(cb.getName());
out.println(cb.getCity());
out.println(cb.getPhno());
%>

</body>
</html>