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
	public partial class putong : Form
	{
		public putong()
		{
			InitializeComponent();
		}

		private void 老师系统_Load(object sender, EventArgs e)
		{
			// TODO: 这行代码将数据加载到表“jiaowuDataSet1.studentInformation”中。您可以根据需要移动或删除它。
			this.studentInformationTableAdapter.Fill(this.jiaowuDataSet1.studentInformation);

		}

		private void button2_Click(object sender, EventArgs e)
		{
			Application.Exit();
		}

		private void button1_Click(object sender, EventArgs e)
		{


			String StuID = textBox2.Text.Trim();

			String conn = "Data Source =.; Initial Catalog = jiaowu; Persist Security Info = True; User ID = sa; Password = aA15227502025";

			SqlConnection sqlConnection = new SqlConnection(conn);  //实例化连接对象

			try

			{

				sqlConnection.Open();

				String select_by_id = "select * from studentInformation where 学号='" + StuID + "'";

				SqlCommand sqlCommand = new SqlCommand(select_by_id, sqlConnection);

				SqlDataReader sqlDataReader = sqlCommand.ExecuteReader();

				BindingSource bindingSource = new BindingSource();

				bindingSource.DataSource = sqlDataReader;

				dataGridView1.DataSource = bindingSource;

			}

			catch

			{

				MessageBox.Show("查询语句有误，请认真检查SQL语句!");

			}

			finally

			{

				sqlConnection.Close();

			}
		}

		private void button3_Click(object sender, EventArgs e)
		{
			new denglu().Show();
			this.Close();
		}

		private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
		{

		}

		private void button4_Click(object sender, EventArgs e)
		{
			pu p = new pu();
			p.Show();
		}
	}
}
