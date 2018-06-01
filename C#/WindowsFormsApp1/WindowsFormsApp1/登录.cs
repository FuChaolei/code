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
	public partial class denglu : Form
	{

		//随机码的长度
		private const int iVerifyCodeLength = 6;
		//随机码
		private String strVerifyCode = "";
		public denglu()
		{
			InitializeComponent();
			UpdateVerifyCode();

		}
		private void UpdateVerifyCode()
		{
			strVerifyCode = CreateRandomCode(iVerifyCodeLength);
			CreateImage(strVerifyCode);
		}
		private void CreateImage(string strVerifyCode)
		{
			try
			{
				int iRandAngle = 45;    //随机转动角度
				int iMapWidth = (int)(strVerifyCode.Length * 21);
				Bitmap map = new Bitmap(iMapWidth, 28);     //创建图片背景

				Graphics graph = Graphics.FromImage(map);
				graph.Clear(Color.AliceBlue);//清除画面，填充背景
				graph.DrawRectangle(new Pen(Color.Black, 0), 0, 0, map.Width - 1, map.Height - 1);//画一个边框
				graph.SmoothingMode = System.Drawing.Drawing2D.SmoothingMode.AntiAlias;//模式
				Random rand = new Random();
				//背景噪点生成
				Pen blackPen = new Pen(Color.LightGray, 0);
				for (int i = 0; i < 50; i++)
				{
					int x = rand.Next(0, map.Width);
					int y = rand.Next(0, map.Height);
					graph.DrawRectangle(blackPen, x, y, 1, 1);
				}
				//验证码旋转，防止机器识别
				char[] chars = strVerifyCode.ToCharArray();//拆散字符串成单字符数组
														   //文字距中
				StringFormat format = new StringFormat(StringFormatFlags.NoClip);
				format.Alignment = StringAlignment.Center;
				format.LineAlignment = StringAlignment.Center;
				//定义颜色
				Color[] c = { Color.Black, Color.Red, Color.DarkBlue, Color.Green, Color.Orange, Color.Brown, Color.DarkCyan, Color.Purple };
				//定义字体
				string[] font = { "Verdana", "Microsoft Sans Serif", "Comic Sans MS", "Arial", "宋体" };
				for (int i = 0; i < chars.Length; i++)
				{
					int cindex = rand.Next(7);
					int findex = rand.Next(5);
					Font f = new System.Drawing.Font(font[findex], 13, System.Drawing.FontStyle.Bold);//字体样式(参数2为字体大小)
					Brush b = new System.Drawing.SolidBrush(c[cindex]);
					Point dot = new Point(16, 16);

					float angle = rand.Next(-iRandAngle, iRandAngle);//转动的度数
					graph.TranslateTransform(dot.X, dot.Y);//移动光标到指定位置
					graph.RotateTransform(angle);
					graph.DrawString(chars[i].ToString(), f, b, 1, 1, format);

					graph.RotateTransform(-angle);//转回去
					graph.TranslateTransform(2, -dot.Y);//移动光标到指定位置
				}
				pictureBox2.Image = map;

			}
			catch (ArgumentException)
			{
				MessageBox.Show("创建图片错误。");
			}
		}
		private string CreateRandomCode(int iLength)
		{
			int rand;
			char code;
			string randomCode = String.Empty;
			//生成一定长度的验证码
			System.Random random = new Random();
			for (int i = 0; i < iLength; i++)
			{
				rand = random.Next();
				if (rand % 3 == 0)
				{
					code = (char)('A' + (char)(rand % 26));
				}
				else
				{
					code = (char)('0' + (char)(rand % 10));
				}
				randomCode += code.ToString();
			}
			return randomCode;
		}
		private void label3_Click(object sender, EventArgs e)
		{

		}

		public void button1_Click(object sender, EventArgs e)
		{

			string username,password;
			username = textBox2.Text.Trim();
			password = textBox1.Text.Trim();
			string myConn = "Data Source=.;Initial Catalog=jiaowu;Persist Security Info=True;User ID=sa;Password=aA15227502025";
			SqlConnection sqlConnection = new SqlConnection(myConn);  //实例化连接对象

			sqlConnection.Open();


			if (guanli.Checked == false && putong.Checked == false)
			{
				MessageBox.Show("请选择登录类型！");
			}
			else if (textBox3.Text.Equals("") || !textBox3.Text.Equals(strVerifyCode))//验证码为空或错误
			{
				MessageBox.Show("验证码错误");
			}
			else if (guanli.Checked == true)
			{
				string sql = "select userid,password from usertable where userid = '" + username + "' and password = '" + password + "'";                                            //编写SQL命令

				SqlCommand sqlCommand = new SqlCommand(sql, sqlConnection);

				byte[] result = Encoding.Default.GetBytes(this.textBox1.Text.Trim());  //输入密码的文本框
				MD5 md5 = new MD5CryptoServiceProvider();
				byte[] output = md5.ComputeHash(result);//加密后的登陆明文密码
				this.textBox1.Text = BitConverter.ToString(output).Replace("-", ""); //为输出加密文本的文本框


				SqlDataReader sqlDataReader = sqlCommand.ExecuteReader();

				if (sqlDataReader.HasRows)
				{
					MessageBox.Show("登陆成功！");

					jiaowuxitong form2 = new jiaowuxitong();
					this.Hide();
					form2.Show();
					this.Visible  = false;
					this.WindowState = FormWindowState.Minimized;
				}
				else
					MessageBox.Show("登录失败！");
			}
			else if (putong.Checked == true)
			{
				

				string sql = "select pno,pwd from putongtable where pno = '" + username + "' and pwd = '" + password + "'";                                            //编写SQL命令

				SqlCommand put = new SqlCommand(sql, sqlConnection);

				
				SqlDataReader puto = put.ExecuteReader();

				if (puto.HasRows)
				{
					MessageBox.Show("登陆成功！");
					putong form3 = new putong();
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
			this.ActiveControl = this.textBox2;
			label5.BackColor = Color.Transparent;

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

		private void button3_Click_1(object sender, EventArgs e)
		{
			UpdateVerifyCode();
		}

		private void pictureBox2_Click(object sender, EventArgs e)
		{

		}

		private void textBox3_TextChanged(object sender, EventArgs e)
		{
			


		}

		private void button4_Click(object sender, EventArgs e)
		{
			byte[] result = Encoding.Default.GetBytes(this.textBox1.Text.Trim());  //输入密码的文本框
			MD5 md5 = new MD5CryptoServiceProvider();
			byte[] output = md5.ComputeHash(result);//加密后的登陆明文密码
			this.textBox1.Text = BitConverter.ToString(output).Replace("-", ""); //为输出加密文本的文本框
		}

		private void button5_Click(object sender, EventArgs e)
		{
			string myConn = "Data Source=.;Initial Catalog=jiaowu;Persist Security Info=True;User ID=sa;Password=aA15227502025";
			SqlConnection sqlConnection = new SqlConnection(myConn);  //实例化连接对象

			sqlConnection.Open();

			if (this.textBox1.Text == "" || this.textBox2.Text == "" )
			{
				MessageBox.Show("你输入的学生信息不完整！");
			}
			else
			{

				SqlDataAdapter da = new SqlDataAdapter("select*from putongtable where pno='" + textBox2.Text + "'", sqlConnection);
				DataSet ds = new DataSet("ssss1");
				da.Fill(ds);
				if (ds.Tables[0].Rows.Count > 0)
				{
					MessageBox.Show("此记录已存在");
				}
				else
				{
					string insertStr = "INSERT INTO putongtable(pno,pwd)   values('" + textBox2.Text + "', '" + textBox1.Text + "')";
					MessageBox.Show("注册成功");
					SqlCommand cmd = new SqlCommand(insertStr, sqlConnection);
					cmd.ExecuteNonQuery();//添加记录
					sqlConnection.Close();
					
				}
			}
		}

		private void label5_Click(object sender, EventArgs e)
		{

		}
	}
}
