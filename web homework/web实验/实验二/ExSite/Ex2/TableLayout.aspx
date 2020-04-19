<%@ Page Language="C#" AutoEventWireup="true" CodeFile="TableLayout.aspx.cs" Inherits="Ex2_TableLayout" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
    <style>
        a {
            text-decoration: none;
        }
    </style>
    <title></title>
    <style type="text/css">
        .auto-style1 {
            width: 100%;
        }

        .auto-style2 {
            height: 24px;
        }
    </style>
</head>
<body style="background-color: #616378; font-size: 12px; text-align: center; margin: 0px">
    <form id="form1" runat="server">
        <div>
        </div>
        <table class="auto-style1" style="background-color: #fff; height: 86px; margin: 0px auto; padding: 4px 2px 2px 10px; text-align: left; width: 778px">
            <tr>
                <td rowspan="2">
                    <asp:Image ID="imgLogo" runat="server" Height="30px" ImageUrl="~/Images/Logo.gif" Width="72px" />
                </td>
                <td style="background-color: #8c8ea3; text-align: center; width: 96.4px">
                    <asp:LinkButton ID="lnkbtnDefault" runat="server" ForeColor="White">首页</asp:LinkButton>
                </td>
                <td style="background-color: #8c8ea3; text-align: center; width: 96.4px">
                    <asp:LinkButton ID="lnkbtnRegister" runat="server" ForeColor="White">注册</asp:LinkButton>
                </td>
                <td style="background-color: #8c8ea3; text-align: center; width: 96.4px">
                    <asp:LinkButton ID="lnkbtnLogin" runat="server" ForeColor="White">登录</asp:LinkButton>
                </td>
                <td style="background-color: #8c8ea3; text-align: center; width: 96.4px">
                    <asp:LinkButton ID="lnkbtnCart" runat="server" ForeColor="White">购物车</asp:LinkButton>
                </td>
                <td style="background-color: #8c8ea3; text-align: center; width: 96.4px">
                    <asp:LinkButton ID="lnkbtnSiteMap" runat="server" ForeColor="White">网站地图</asp:LinkButton>
                </td>
            </tr>
            <tr>
                <td class="auto-style2" colspan="5" style="background-color: #666688; color: #fff">登录状态</td>
            </tr>
            <tr>
                <td colspan="6" style="background-color: #ccccd4; padding-top: 6px; text-align: left; width: 778px; margin: 0 auto">您的位置</td>
            </tr>
        </table>
    </form>
</body>
</html>
