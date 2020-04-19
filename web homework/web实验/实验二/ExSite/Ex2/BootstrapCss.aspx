<%@ Page Language="C#" AutoEventWireup="true" CodeFile="BootstrapCss.aspx.cs" Inherits="Ex2_BootstrapCss" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <title>利用Bootstrap和自定义.css文件实现页面布局</title>
    <link href="../Content/bootstrap.css" rel="stylesheet" />
    <link href="../Styles/Style.css" rel="stylesheet" />
</head>
<body>
    <form id="form1" runat="server">
    <header class="header">
        <asp:Image ID="Image1" runat="server" ImageUrl="~/Images/logo.gif" />
        <ul class="nav nav-pills">
            <li class="navDark">
                <asp:LinkButton ID="lnkbtnDefault" ForeColor="White" runat="server">首页</asp:LinkButton></li>
            <li class="navDark">
                <asp:LinkButton ID="lnkbtnRegister" ForeColor="White" runat="server">注册</asp:LinkButton></li>
            <li class="navDark">
                <asp:LinkButton ID="lnkbtnLogin" ForeColor="White" runat="server">登录</asp:LinkButton></li>
            <li class="navDark">
                <asp:LinkButton ID="lnkbtnCart" ForeColor="White" runat="server">购物车</asp:LinkButton></li>
            <li class="navDark">
                <asp:LinkButton ID="lnkbtnSiteMap" ForeColor="White" runat="server">网站地图</asp:LinkButton></li>
        </ul>
        <div class="status">
            登录状态
        </div>
    </header>
        <nav class="sitemap">您的位置：</nav>
    </form>
</body>
</html>

