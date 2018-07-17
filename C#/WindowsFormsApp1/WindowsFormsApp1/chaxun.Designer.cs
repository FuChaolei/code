namespace WindowsFormsApp1
{
	partial class chaxun
	{
		/// <summary>
		/// Required designer variable.
		/// </summary>
		private System.ComponentModel.IContainer components = null;

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		/// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
		protected override void Dispose(bool disposing)
		{
			if (disposing && (components != null))
			{
				components.Dispose();
			}
			base.Dispose(disposing);
		}

		#region Windows Form Designer generated code

		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
			this.components = new System.ComponentModel.Container();
			System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(chaxun));
			this.label1 = new System.Windows.Forms.Label();
			this.textBox2 = new System.Windows.Forms.TextBox();
			this.button2 = new System.Windows.Forms.Button();
			this.button3 = new System.Windows.Forms.Button();
			this.studentInformationBindingSource = new System.Windows.Forms.BindingSource(this.components);
			this.jiaowuDataSet3 = new WindowsFormsApp1.jiaowuDataSet3();
			this.studentInformationTableAdapter = new WindowsFormsApp1.jiaowuDataSet3TableAdapters.studentInformationTableAdapter();
			this.dataGridView1 = new System.Windows.Forms.DataGridView();
			this.学号DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.姓名DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.性别DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.出生年月DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.专业DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.studentInformationBindingSource1 = new System.Windows.Forms.BindingSource(this.components);
			this.jiaowuDataSet4 = new WindowsFormsApp1.jiaowuDataSet4();
			this.studentInformationTableAdapter1 = new WindowsFormsApp1.jiaowuDataSet4TableAdapters.studentInformationTableAdapter();
			((System.ComponentModel.ISupportInitialize)(this.studentInformationBindingSource)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.jiaowuDataSet3)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.studentInformationBindingSource1)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.jiaowuDataSet4)).BeginInit();
			this.SuspendLayout();
			// 
			// label1
			// 
			this.label1.Anchor = System.Windows.Forms.AnchorStyles.None;
			this.label1.BackColor = System.Drawing.Color.Lime;
			this.label1.Font = new System.Drawing.Font("隶书", 16.2F, System.Drawing.FontStyle.Bold);
			this.label1.Location = new System.Drawing.Point(44, 61);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(245, 35);
			this.label1.TabIndex = 9;
			this.label1.Text = "请输入学号查询";
			// 
			// textBox2
			// 
			this.textBox2.Anchor = System.Windows.Forms.AnchorStyles.None;
			this.textBox2.BackColor = System.Drawing.SystemColors.Info;
			this.textBox2.Font = new System.Drawing.Font("宋体", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
			this.textBox2.Location = new System.Drawing.Point(295, 61);
			this.textBox2.Multiline = true;
			this.textBox2.Name = "textBox2";
			this.textBox2.Size = new System.Drawing.Size(185, 35);
			this.textBox2.TabIndex = 10;
			this.textBox2.TextChanged += new System.EventHandler(this.textBox2_TextChanged);
			// 
			// button2
			// 
			this.button2.Anchor = System.Windows.Forms.AnchorStyles.None;
			this.button2.BackColor = System.Drawing.Color.Lime;
			this.button2.Font = new System.Drawing.Font("楷体", 10.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
			this.button2.Location = new System.Drawing.Point(295, 126);
			this.button2.Name = "button2";
			this.button2.Size = new System.Drawing.Size(75, 44);
			this.button2.TabIndex = 11;
			this.button2.Text = "查询";
			this.button2.UseVisualStyleBackColor = false;
			this.button2.Click += new System.EventHandler(this.button2_Click);
			// 
			// button3
			// 
			this.button3.Anchor = System.Windows.Forms.AnchorStyles.None;
			this.button3.BackColor = System.Drawing.Color.Lime;
			this.button3.Font = new System.Drawing.Font("楷体", 10.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
			this.button3.Location = new System.Drawing.Point(405, 126);
			this.button3.Name = "button3";
			this.button3.Size = new System.Drawing.Size(75, 44);
			this.button3.TabIndex = 12;
			this.button3.Text = "返回";
			this.button3.UseVisualStyleBackColor = false;
			this.button3.Click += new System.EventHandler(this.button3_Click);
			// 
			// studentInformationBindingSource
			// 
			this.studentInformationBindingSource.DataMember = "studentInformation";
			this.studentInformationBindingSource.DataSource = this.jiaowuDataSet3;
			// 
			// jiaowuDataSet3
			// 
			this.jiaowuDataSet3.DataSetName = "jiaowuDataSet3";
			this.jiaowuDataSet3.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
			// 
			// studentInformationTableAdapter
			// 
			this.studentInformationTableAdapter.ClearBeforeFill = true;
			// 
			// dataGridView1
			// 
			this.dataGridView1.AutoGenerateColumns = false;
			this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
			this.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.学号DataGridViewTextBoxColumn,
            this.姓名DataGridViewTextBoxColumn,
            this.性别DataGridViewTextBoxColumn,
            this.出生年月DataGridViewTextBoxColumn,
            this.专业DataGridViewTextBoxColumn});
			this.dataGridView1.DataSource = this.studentInformationBindingSource1;
			this.dataGridView1.Location = new System.Drawing.Point(2, 198);
			this.dataGridView1.Name = "dataGridView1";
			this.dataGridView1.RowTemplate.Height = 27;
			this.dataGridView1.Size = new System.Drawing.Size(583, 169);
			this.dataGridView1.TabIndex = 13;
			this.dataGridView1.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView1_CellContentClick_1);
			// 
			// 学号DataGridViewTextBoxColumn
			// 
			this.学号DataGridViewTextBoxColumn.DataPropertyName = "学号";
			this.学号DataGridViewTextBoxColumn.HeaderText = "学号";
			this.学号DataGridViewTextBoxColumn.Name = "学号DataGridViewTextBoxColumn";
			// 
			// 姓名DataGridViewTextBoxColumn
			// 
			this.姓名DataGridViewTextBoxColumn.DataPropertyName = "姓名";
			this.姓名DataGridViewTextBoxColumn.HeaderText = "姓名";
			this.姓名DataGridViewTextBoxColumn.Name = "姓名DataGridViewTextBoxColumn";
			// 
			// 性别DataGridViewTextBoxColumn
			// 
			this.性别DataGridViewTextBoxColumn.DataPropertyName = "性别";
			this.性别DataGridViewTextBoxColumn.HeaderText = "性别";
			this.性别DataGridViewTextBoxColumn.Name = "性别DataGridViewTextBoxColumn";
			// 
			// 出生年月DataGridViewTextBoxColumn
			// 
			this.出生年月DataGridViewTextBoxColumn.DataPropertyName = "出生年月";
			this.出生年月DataGridViewTextBoxColumn.HeaderText = "出生年月";
			this.出生年月DataGridViewTextBoxColumn.Name = "出生年月DataGridViewTextBoxColumn";
			// 
			// 专业DataGridViewTextBoxColumn
			// 
			this.专业DataGridViewTextBoxColumn.DataPropertyName = "专业";
			this.专业DataGridViewTextBoxColumn.HeaderText = "专业";
			this.专业DataGridViewTextBoxColumn.Name = "专业DataGridViewTextBoxColumn";
			// 
			// studentInformationBindingSource1
			// 
			this.studentInformationBindingSource1.DataMember = "studentInformation";
			this.studentInformationBindingSource1.DataSource = this.jiaowuDataSet4;
			// 
			// jiaowuDataSet4
			// 
			this.jiaowuDataSet4.DataSetName = "jiaowuDataSet4";
			this.jiaowuDataSet4.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
			// 
			// studentInformationTableAdapter1
			// 
			this.studentInformationTableAdapter1.ClearBeforeFill = true;
			// 
			// chaxun
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 15F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.BackgroundImage = global::WindowsFormsApp1.Properties.Resources.捕获;
			this.ClientSize = new System.Drawing.Size(594, 704);
			this.Controls.Add(this.dataGridView1);
			this.Controls.Add(this.button3);
			this.Controls.Add(this.button2);
			this.Controls.Add(this.textBox2);
			this.Controls.Add(this.label1);
			this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
			this.Name = "chaxun";
			this.Text = "欢迎进入信息查询界面";
			this.Load += new System.EventHandler(this.chaxun_Load);
			((System.ComponentModel.ISupportInitialize)(this.studentInformationBindingSource)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.jiaowuDataSet3)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.studentInformationBindingSource1)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.jiaowuDataSet4)).EndInit();
			this.ResumeLayout(false);
			this.PerformLayout();

		}

		#endregion
		private System.Windows.Forms.Label label1;
		public System.Windows.Forms.TextBox textBox2;
		private System.Windows.Forms.Button button2;
		private System.Windows.Forms.Button button3;
		private jiaowuDataSet3 jiaowuDataSet3;
		private System.Windows.Forms.BindingSource studentInformationBindingSource;
		private jiaowuDataSet3TableAdapters.studentInformationTableAdapter studentInformationTableAdapter;
		private System.Windows.Forms.DataGridView dataGridView1;
		private jiaowuDataSet4 jiaowuDataSet4;
		private System.Windows.Forms.BindingSource studentInformationBindingSource1;
		private jiaowuDataSet4TableAdapters.studentInformationTableAdapter studentInformationTableAdapter1;
		private System.Windows.Forms.DataGridViewTextBoxColumn 学号DataGridViewTextBoxColumn;
		private System.Windows.Forms.DataGridViewTextBoxColumn 姓名DataGridViewTextBoxColumn;
		private System.Windows.Forms.DataGridViewTextBoxColumn 性别DataGridViewTextBoxColumn;
		private System.Windows.Forms.DataGridViewTextBoxColumn 出生年月DataGridViewTextBoxColumn;
		private System.Windows.Forms.DataGridViewTextBoxColumn 专业DataGridViewTextBoxColumn;
	}
}