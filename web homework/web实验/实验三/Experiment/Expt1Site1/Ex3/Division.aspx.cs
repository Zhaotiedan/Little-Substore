using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Ex3_Division : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }

    protected void Button1_Click(object sender, EventArgs e)
    {
        try
        {
            float divsor = float.Parse(Button1.Text);
            float dividend = float.Parse(Button1.Text);
            Response.Write("商为: " + divsor / dividend);
        }
        catch (Exception ee)
        {
            Response.Write("请输入正确的数字! ");
        }
    }
}