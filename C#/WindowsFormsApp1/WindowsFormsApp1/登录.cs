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
	public partial class denglu : Form
	{
		
		
		public denglu()
		{
			InitializeComponent();
		}

		private void label3_Click(object sender, EventArgs e)
		{

		}

		public void button1_Click(object sender, EventArgs e)
		{

			string username,password;
			username = textBox2.Text;
			password = textBox1.Text;
			string myConn = "Data Source=.;Initial Catalog=jiaowu;Persist Security Info=True;User ID=sa;Password=aA15227502025";
			SqlConnection sqlConnection = new SqlConnection(myConn);  //实例化连接对象

			sqlConnection.Open();


			if (Student.Checked == false && Teacher.Checked == false)
			{
				MessageBox.Show("请选择登录类型！");
			}
			else if (Student.Checked == true)
			{
				string sql = "select userid,password from usertable where userid = '" + username + "' and password = '" + password + "'";                                            //编写SQL命令

				SqlCommand sqlCommand = new SqlCommand(sql, sqlConnection);



				SqlDataReader sqlDataReader = sqlCommand.ExecuteReader();

				if (sqlDataReader.HasRows)
				{
					MessageBox.Show("登陆成功！");

					jiaowuxitong form2 = new jiaowuxitong();
					this.Hide();
					form2.Show();
					//this.Visible  = false;
					//this.WindowState = FormWindowState.Minimized;
				}
				else
					MessageBox.Show("登录失败！");
			}
			else if (Teacher.Checked == true)
			{
				string sql = "select teachername,password from teachertable where teachername = '" + username + "' and password = '" + password + "'";                                            //编写SQL命令

				SqlCommand teacher = new SqlCommand(sql, sqlConnection);



				SqlDataReader teachers = teacher.ExecuteReader();

				if (teachers.HasRows)
				{
					MessageBox.Show("登陆成功！");
					老师系统 form3 = new 老师系统();
					form3.Show();
					this.Visible = false;
					this.WindowState = FormWindowState.Minimized;
				}
				else
					MessageBox.Show("登录失败！");
			}
			else
			{
				MessageBox.Show("登录失败！");
			}
		}


		private void textBox2_TextChanged(object sender, EventArgs e)
		{

		}

		private void Form1_Load(object sender, EventArgs e)
		{
		
		}

		private void label2_Click(object sender, EventArgs e)
		{

		}

		private void textBox1_TextChanged(object sender, EventArgs e)
		{

		}

		private void pictureBox1_Click(object sender, EventArgs e)
		{

		}

		private void button2_Click(object sender, EventArgs e)
		{
			this.Close();
		}

		private void radioButton2_CheckedChanged(object sender, EventArgs e)
		{

		}

		private void 学生_CheckedChanged(object sender, EventArgs e)
		{

		}

		private void button3_Click(object sender, EventArgs e)
		{
			
		}
	}
}
