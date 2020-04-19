<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Timer.aspx.cs" Inherits="Ex2_Timer" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <script src="../Scripts/jquery-3.4.1.min.js"></script>
    <script>
        function refresh() {
            //设置id属性值为date的元素呈现内容为客户端的系统时间
            $("#date").text((new Date()).toString());
            setTimeout("refresh()", 1000);//过1秒后重复调用自定义的refresh()函数
        }
    </script>
    <title></title>
</head>
<body onload="refresh()">
    <form id="form1" runat="server">
   <div id="date"></div>
    </form>
</body>
</html>
