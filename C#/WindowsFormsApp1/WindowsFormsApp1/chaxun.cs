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
	public partial class chaxun : Form
	{
		public chaxun()
		{
			InitializeComponent();
		}

		private void chaxun_Load(object sender, EventArgs e)
		{
			// TODO: 这行代码将数据加载到表“jiaowuDataSet4.studentInformation”中。您可以根据需要移动或删除它。
			this.studentInformationTableAdapter1.Fill(this.jiaowuDataSet4.studentInformation);
			// TODO: 这行代码将数据加载到表“jiaowuDataSet3.studentInformation”中。您可以根据需要移动或删除它。
			this.studentInformationTableAdapter.Fill(this.jiaowuDataSet3.studentInformation);

		}

		private void textBox2_TextChanged(object sender, EventArgs e)
		{

		}

		private void button2_Click(object sender, EventArgs e)
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

		private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
		{

		}

		private void button1_Click(object sender, EventArgs e)
		{
			DataSet ds = new DataSet();
			using (SqlConnection conn = new SqlConnection())
			{
				conn.ConnectionString = "server=(local);database=jiaowu;Integrated Security=True";
				conn.Open();			using (SqlCommand command = conn.CreateCommand())
				{
					command.CommandText = "select * from studentInformation";
					SqlDataAdapter da = new SqlDataAdapter(command);

					try
					{
						da.Fill(ds);
					}
					catch
					{ }
				}
			}
			DataTable dt = new DataTable();
			dt = ds.Tables[0].Copy();
			this.dataGridView1.DataSource = dt;  //绑定到datagridview中显示

		}

		private void label5_Click(object sender, EventArgs e)
		{

		}

		private void label2_Click(object sender, EventArgs e)
		{

		}

		private void button3_Click(object sender, EventArgs e)
		{
			this.Close();
		}

		private void dataGridView1_CellContentClick_1(object sender, DataGridViewCellEventArgs e)
		{

		}
	}
}
