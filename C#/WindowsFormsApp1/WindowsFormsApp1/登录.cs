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
    public partial class 登录 : Form
    {
        public 登录()
        {
            InitializeComponent();
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            string username, password;
            username = textBox2.Text;
            password = textBox1.Text;
            if (username == "付超磊" && password == "123")
            {
                MessageBox.Show("登陆成功！");
                教务系统 form2 = new 教务系统();
                form2.Show();
            }
            else
                MessageBox.Show("登录失败！");
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
