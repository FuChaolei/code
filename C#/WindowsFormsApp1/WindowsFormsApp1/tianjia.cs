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
	public partial class tianjia : Form
	{
		public tianjia()
		{
			InitializeComponent();
		}
	
		private void button1_Click(object sender, EventArgs e)
		{
			string myConn = "Data Source=.;Initial Catalog=jiaowu;Persist Security Info=True;User ID=sa;Password=aA15227502025";
			SqlConnection sqlConnection = new SqlConnection(myConn);  //实例化连接对象

			sqlConnection.Open();

			if (this.textBox1.Text == "" || this.textBox2.Text == "" || this.textBox3.Text == "" || this.textBox4.Text == "" || this.textBox5.Text == "" )
			{
				MessageBox.Show("你输入的学生信息不完整！");
			}
			else
			{
				
				SqlDataAdapter da = new SqlDataAdapter("select*from studentInformation where 学号='" + textBox1.Text + "'", sqlConnection);
				DataSet ds = new DataSet("ssss1");
				da.Fill(ds);
				if (ds.Tables[0].Rows.Count > 0)
				{
					MessageBox.Show("此记录已存在");
				}
				else
				{
					string insertStr = "INSERT INTO studentInformation(学号,姓名,性别,出生年月,专业)   values('" + textBox1.Text + "','" + textBox2.Text + "','" + textBox3.Text + "','" + textBox4.Text + "','" + textBox5.Text + "')";
					SqlCommand cmd = new SqlCommand(insertStr, sqlConnection);
					cmd.ExecuteNonQuery();//添加记录
					MessageBox.Show("添加成功");
					sqlConnection.Close();
					
				}
			}

		}

		private void button2_Click(object sender, EventArgs e)
		{
			this.Close();
		}
	}
}
