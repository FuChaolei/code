﻿using System;
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
	public partial class xiugai : Form
	{
		public xiugai()
		{
			InitializeComponent();
		}

		private void xiugai_Load(object sender, EventArgs e)
		{

		}

		private void button1_Click(object sender, EventArgs e)
		{

			SqlCommand cmd;
			if (textBox1.Text == "")
			{
				MessageBox.Show("请输入学号");
			}
			else
			{
				
				String StuID = textBox1.Text.Trim();

				String StuName = textBox2.Text.Trim();

				String xingbie = textBox3.Text.Trim();
				String chusheng = textBox4.Text.Trim();

				String zhuanye = textBox5.Text.Trim();

				SqlConnection con = new SqlConnection("Data Source=.;Initial Catalog=jiaowu;Persist Security Info=True;User ID=sa;Password=aA15227502025");
				int i = 0;
				if (StuName != "")

				{
					con.Open();

					string insertStr = "UPDATE studentInformation SET 姓名 = '" + StuName + "' WHERE 学号 = '" + StuID + "'";

					cmd = new SqlCommand(insertStr, con);
					cmd.ExecuteNonQuery();
				}
				else if (xingbie != "")
				{
					con.Open();

					string Xingbie = "UPDATE studentInformation SET 性别 = '" + xingbie + "' WHERE 学号 = '" + StuID + "'";

					cmd = new SqlCommand(Xingbie, con);
					cmd.ExecuteNonQuery();

				}
				else if (chusheng != "")
				{
					con.Open();

					string chus = "UPDATE studentInformation SET 出生年月 = '" + chusheng + "' WHERE 学号 = '" + StuID + "'";

					cmd = new SqlCommand(chus, con);
					cmd.ExecuteNonQuery();

				}
				else if (zhuanye != "")
				{
					con.Open();

					string zhuany = "UPDATE studentInformation SET 专业 = '" + zhuanye + "' WHERE 学号 = '" + StuID + "'";

					cmd = new SqlCommand(zhuany, con);

					cmd.ExecuteNonQuery();

				}
				

				else
				{
					MessageBox.Show("输入数据违反要求!");
					i = 1;
				}
			if (StuName != ""|| zhuanye != "" || chusheng != "" || xingbie != ""&& i!=1)
				{
					MessageBox.Show("恭喜你!修改成功!");
					con.Dispose();
					this.Close();
				}






				

				
			
			}
		}

		private void button3_Click(object sender, EventArgs e)
		{
			this.Close();
		}

		private void label4_Click(object sender, EventArgs e)
		{

		}
	}
}
