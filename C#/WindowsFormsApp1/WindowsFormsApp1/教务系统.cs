using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class guanli : Form
    {
		
		public guanli()
        {
            InitializeComponent();
        }

        private void panel1_Paint(object sender, PaintEventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
			
		}

        private void 教务系统_Load(object sender, EventArgs e)
        {
			
		}

		private void button2_Click(object sender, EventArgs e)
		{

		}

		private void 学ToolStripMenuItem_Click(object sender, EventArgs e)
		{
			
			xiugaimima form4 = new xiugaimima();
			form4.Show();
			
		}

		private void 修改登录密码ToolStripMenuItem_Click(object sender, EventArgs e)
		{
			xiugaimima st = new xiugaimima();
			st.Show();
		}

		private void 切换账号ToolStripMenuItem_Click(object sender, EventArgs e)
		{
			new denglu().Show();
			this.Close();
		}

		private void 添加学生信息ToolStripMenuItem_Click(object sender, EventArgs e)
		{
			tianjia ti = new tianjia();
			ti.Show();
		}

		private void 查询学生信息ToolStripMenuItem_Click(object sender, EventArgs e)
		{
			chaxun cha = new chaxun();
			cha.Show();
		}

		private void 修改学生信息ToolStripMenuItem_Click(object sender, EventArgs e)
		{
			xiugai xig = new xiugai();
			xig.Show();
		}

		private void 退出ToolStripMenuItem_Click(object sender, EventArgs e)
		{
			Application.Exit();
		}

		private void 删除学生信息ToolStripMenuItem_Click(object sender, EventArgs e)
		{
			shanchu shan = new shanchu();
			shan.Show();
		}

		private void 学生管理ToolStripMenuItem_Click(object sender, EventArgs e)
		{

		}
	}
}
