<%@ Page Language="C#" AutoEventWireup="true" CodeFile="NavBootstrap.aspx.cs" Inherits="Ex2_NavBootstrap" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <meta name="viewport" content="width=device-width,initial-scale=1.0" />
    <link href="../Content/bootstrap.css" rel="stylesheet" type="text/css" />
    <script src="../Scripts/jquery-3.0.0.min.js"></script>
    <script src="../Scripts/bootstrap.min.js"></script>
    <title>Bootstrap响应式导航栏</title>
</head>
<body>
    <form id="form1" runat="server">
        <nav class="navbar navbar-default navbar-fixed-top" role="navigation">
            <div class="container">
                <div class="navbar-header">
                    <button type="button" class="navbar-toggle" data-toggle="collapse"
                        data-target="#navbar-menu">
                        <span class="sr-only"></span>
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                    </button>
                    <!--网站Logo-->
                    <a href="#" class="navbar-brand nav-title">MyPetShop</a>
                </div>
                <!--导航链接-->
                <div class="collapse navbar-collapse" id="navbar-menu">
                    <ul class="nav navbar-nav navbar-right">
                        <li class="cative"><a href="#">首页</a></li>
                        <li class="cative"><a href="#">注册</a></li>
                        <li class="cative"><a href="#">登录</a></li>
                        <li class="cative"><a href="#">购物车</a></li>
                        <li class="cative"><a href="#">网站地图</a></li>
                    </ul>
                </div>
            </div>
        </nav>
    </form>
</body>
</html>

