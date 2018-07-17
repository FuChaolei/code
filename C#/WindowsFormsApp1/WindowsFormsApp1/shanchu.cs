using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
	public partial class shanchu : Form
	{
		public shanchu()
		{
			InitializeComponent();
		}

		private void button3_Click(object sender, EventArgs e)
		{
			this.Close();
		}

		private void button1_Click(object sender, EventArgs e)
		{
			if (this.textBox1.Text == "")
			{
				MessageBox.Show("请输入要删除的学生学号");
			}
			else
			{

				SqlConnection conn = new SqlConnection();
				conn.ConnectionString = "Data Source=.;Initial Catalog=jiaowu;Persist Security Info=True;User ID=sa;Password=aA15227502025";
				conn.Open();//连接数据库
				SqlDataAdapter da = new SqlDataAdapter("select*from usertable where userid='" + textBox1.Text + "'", conn);
				DataSet ds = new DataSet("ssss1");
				da.Fill(ds);
				if (ds.Tables[0].Rows.Count > 0)
				{
					SqlCommand cmd = new SqlCommand();
					cmd.CommandType = CommandType.Text;
					cmd.CommandText = "delete from usertable where userid='" + textBox1.Text.ToString() + "'";
					cmd.Connection = conn;
					cmd.ExecuteNonQuery();//添加记录
					MessageBox.Show("删除成功");
					conn.Close();
					this.Close();
				}
				else
				{

					MessageBox.Show("此用户不存在");
					textBox1.Text = "";
					//textBox2.Text = "";
					textBox1.Focus();

				}
			}

		}

		private void shanchu_Load(object sender, EventArgs e)
		{

		}
	}
}
