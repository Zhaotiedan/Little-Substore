using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class ArrayDescending : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }

    protected void Button1_Click(object sender, EventArgs e)
    {
        string sInput = Button1.Text.Trim() + " ";
        int j = 0;
        int[] aInput = new int[10];
        string temp = "0";
        for (int i = 0; i <= sInput.Length - 1; i++)
        {
            if (sInput.Substring(i, 1) != " ")
            {
                temp += sInput.Substring(i, 1);
            }
            else
            {
                aInput[j] = int.Parse(temp);
                j++;
                temp = "0";
            }
        }
        Array.Sort(aInput);
        Array.Reverse(aInput);
        foreach (int i in aInput)
        {
            if (i != 0)
            {
                Response.Write(i + "&nbsp; &nbsp; ");
            }
        }
    }
}