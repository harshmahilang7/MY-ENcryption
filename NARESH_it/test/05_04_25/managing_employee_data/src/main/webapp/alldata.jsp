<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" 
    import="managing_employee_data.EmployeeBean" import="java.util.ArrayList" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%
ArrayList<EmployeeBean> all= (ArrayList<EmployeeBean>) request.getAttribute("alldata");
for (EmployeeBean e : all)
{
	out.println(e.getEid());
	out.println(e.getName());
	out.println(e.getEmail());
	out.println(e.getDept());
	out.println(e.getSal()+"<br>");
	
}
%>

</body>
</html>