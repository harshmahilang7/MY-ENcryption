<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8" import="java.util.*" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>result</title>
</head>
<body>
<%
if(request.getParameter("Prime")!=null)
{
boolean bb=(boolean)request.getAttribute("msg");
out.println(bb);
}
else{}
if(request.getParameter("factorial")!=null)
{
int bb=(int)request.getAttribute("msg");
out.println(bb);
}
else{}
if(request.getParameter("Square")!=null)
{
int bb=(int)request.getAttribute("msg");
out.println(bb);
}
else{}
if(request.getParameter("factor")!=null)
{
ArrayList<Integer> bb=(ArrayList<Integer>)request.getAttribute("msg");
for(Integer i : bb)
{
	out.println(i);
}
}
else{}
%>

</body>
</html>