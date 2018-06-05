using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
	public partial class studentI : Form
	{

		public studentI()
		{
			InitializeComponent();
		}

		private void studentI_Load(object sender, EventArgs e)
		{

		}

		private void textBox1_TextChanged(object sender, EventArgs e)
		{

		}

		private void button2_Click(object sender, EventArgs e)
		{
			this.Close();
		}

		private void textBox5_TextChanged(object sender, EventArgs e)
		{

		}

		private void button1_Click(object sender, EventArgs e)
		{
			string connstr = "Data Source=.;Initial Catalog=jiaowu;Persist Security Info=True;User ID=sa;Password=aA15227502025";
			SqlConnection conn = new SqlConnection(connstr);
			string sql = "select password from usertable where userid ='" + textBox5.Text + "'";
			SqlCommand cmd = new SqlCommand(sql, conn);
			conn.Open();
			SqlDataReader sdr = cmd.ExecuteReader();
			if (sdr.Read())
			{
				string oldPwd = sdr.GetString(0).Trim();
				if (oldPwd == textBox2.Text)
				{
					if (textBox3.Text.Trim() == "" || textBox4.Text.Trim() == "")
					{
						MessageBox.Show("新密码确认不能为空!");
						return;
					}
					else if (textBox3.Text.Trim() != textBox4.Text.Trim())
					{
						MessageBox.Show("2次输入的新密码不一样,请重新输入!");
						textBox3.Text = "";
						textBox4.Text = "";
						return;
					}
					else
					{
						sdr.Close();
						string sqlUpdate = "update usertable set password ='" + textBox4.Text +
						"' where userid ='" + textBox5.Text + "'";
						SqlCommand cmdUp = new SqlCommand(sqlUpdate, conn);
						if (cmdUp.ExecuteNonQuery() == 0)
						{
							MessageBox.Show("未知错误!");
							return;
						}
						else
						{
							//MainForm mainForm = new MainForm();
							//mainForm.Show();
							this.Close();
							MessageBox.Show("恭喜你!密码修改成功!");
						}
					}
				}
				else
				{
					MessageBox.Show("旧密码错误或者不能为空");
					textBox2.Text = "";
					textBox3.Text = "";
					textBox4.Text = "";
					return;
				}
			}
			else
			{
				MessageBox.Show("用户名不存在,请重新输入!");
				textBox5.Text = "";
				textBox2.Text = "";
				textBox3.Text = "";
				textBox4.Text = "";
				return;
			}
			conn.Close();

			/*string username, password;
			username = textBox5.Text;
			password = textBox2.Text;
			string myConn = "Data Source=.;Initial Catalog=jiaowu;Persist Security Info=True;User ID=sa;Password=aA15227502025";
			SqlConnection sqlConnection = new SqlConnection(myConn);  //实例化连接对象

			sqlConnection.Open();

			string sql = "select userid,password from usertable where userid = '" + username + "' and password = '" + password + "'";                                            //编写SQL命令

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
					string sqlUpdate = "update usertable set password ='" + textBox3.Text +
					"' where userid ='" + textBox5.Text + "'";
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
					sqlConnection.Close();*/
				}

		private void label4_Click(object sender, EventArgs e)
		{

		}

		private void textBox4_TextChanged(object sender, EventArgs e)
		{

		}

		private void label3_Click(object sender, EventArgs e)
		{

		}

		private void textBox3_TextChanged(object sender, EventArgs e)
		{

		}

		private void label2_Click(object sender, EventArgs e)
		{

		}

		private void textBox2_TextChanged(object sender, EventArgs e)
		{

		}

		private void label1_Click(object sender, EventArgs e)
		{

		}

		private void button3_Click(object sender, EventArgs e)
		{
			byte[] result = Encoding.Default.GetBytes(this.textBox2.Text.Trim());  //输入密码的文本框
			MD5 md5 = new MD5CryptoServiceProvider();
			byte[] output = md5.ComputeHash(result);//加密后的登陆明文密码
			this.textBox2.Text = BitConverter.ToString(output).Replace("-", ""); //为输出加密文本的文本框
			byte[] results = Encoding.Default.GetBytes(this.textBox3.Text.Trim());  //输入密码的文本框
			MD5 md5s = new MD5CryptoServiceProvider();
			byte[] outputs = md5s.ComputeHash(results);//加密后的登陆明文密码
			this.textBox3.Text = BitConverter.ToString(outputs).Replace("-", ""); //为输出加密文本的文本框
			byte[] resultss = Encoding.Default.GetBytes(this.textBox4.Text.Trim());  //输入密码的文本框
			MD5 md5ss = new MD5CryptoServiceProvider();
			byte[] outputss = md5ss.ComputeHash(resultss);//加密后的登陆明文密码
			this.textBox4.Text = BitConverter.ToString(outputss).Replace("-", ""); //为输出加密文本的文本框
		}
	}
		}
	

		
