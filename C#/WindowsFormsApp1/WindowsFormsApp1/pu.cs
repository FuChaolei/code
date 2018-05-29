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
	public partial class pu : Form
	{
		public pu()
		{
			InitializeComponent();
		}

		private void button2_Click(object sender, EventArgs e)
		{
			this.Close();
		}

		private void button1_Click(object sender, EventArgs e)
		{

			string teachername, password;
			teachername = textBox5.Text;
			password = textBox2.Text;
			string myConn = "Data Source=.;Initial Catalog=jiaowu;Persist Security Info=True;User ID=sa;Password=aA15227502025";
			SqlConnection sqlConnection = new SqlConnection(myConn);  //实例化连接对象

			sqlConnection.Open();

			string sql = "select teachername,password from teachertable where teachername = '" + teachername + "' and password = '" + password + "'";                                            //编写SQL命令

			SqlCommand sqlCommand = new SqlCommand(sql, sqlConnection);
			SqlDataReader sdr = sqlCommand.ExecuteReader();
			if (sdr.HasRows)
			{

				if (textBox3.Text.Trim() == "" || textBox4.Text.Trim() == "" || textBox5.Text.Trim() == "" || textBox2.Text.Trim() == "")
				{
					MessageBox.Show("不能存在空项!");

					return;
				}

				else if (textBox3.Text.Trim() != textBox4.Text.Trim())
				{
					MessageBox.Show("2次输入的新密码不一样,请重新输入!");
					textBox4.Text = "";
					textBox3.Text = "";
					return;
				}
				else
				{
					sdr.Close();
					string sqlUpdate = "update teachertable set password ='" + textBox3.Text +
					"' where teachername ='" + textBox5.Text + "'";
					SqlCommand cmdUp = new SqlCommand(sqlUpdate, sqlConnection);
					cmdUp.ExecuteNonQuery();
					MessageBox.Show("恭喜你!密码修改成功!");
					this.Close();

				}
			}

			else
			{
				MessageBox.Show("用户名不存在,请重新输入!");
				textBox5.Text = "";
				textBox4.Text = "";
				textBox3.Text = "";
				textBox2.Text = "";
				return;
			}
			sqlConnection.Close();
		}

		private void textBox2_TextChanged(object sender, EventArgs e)
		{

		}
	}
}
