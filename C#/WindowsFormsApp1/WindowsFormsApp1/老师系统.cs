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
	public partial class 老师系统 : Form
	{
		public 老师系统()
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
	}
}
