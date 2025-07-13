<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.ArrayList" import="customer.CustomerBean"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%

ArrayList<CustomerBean> custall= (ArrayList<CustomerBean>) request.getAttribute("data");
for(CustomerBean a : custall)
{
	out.println(a.getId());
	out.println(a.getName());
	out.println(a.getCity());
	out.println(a.getPhno()+"<br>");
	
}

%>

</body>
</html>