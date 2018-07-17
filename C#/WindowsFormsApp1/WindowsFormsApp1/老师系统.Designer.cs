namespace WindowsFormsApp1
{
	partial class putong
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
			System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(putong));
			this.studentInformationBindingSource = new System.Windows.Forms.BindingSource(this.components);
			this.jiaowuDataSet1 = new WindowsFormsApp1.jiaowuDataSet1();
			this.studentInformationTableAdapter = new WindowsFormsApp1.jiaowuDataSet1TableAdapters.studentInformationTableAdapter();
			this.button2 = new System.Windows.Forms.Button();
			this.button3 = new System.Windows.Forms.Button();
			this.button1 = new System.Windows.Forms.Button();
			this.textBox2 = new System.Windows.Forms.TextBox();
			this.label1 = new System.Windows.Forms.Label();
			this.dataGridView1 = new System.Windows.Forms.DataGridView();
			this.学号DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.姓名DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.性别DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.出生年月DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.专业DataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.button4 = new System.Windows.Forms.Button();
			((System.ComponentModel.ISupportInitialize)(this.studentInformationBindingSource)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.jiaowuDataSet1)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
			this.SuspendLayout();
			// 
			// studentInformationBindingSource
			// 
			this.studentInformationBindingSource.DataMember = "studentInformation";
			this.studentInformationBindingSource.DataSource = this.jiaowuDataSet1;
			// 
			// jiaowuDataSet1
			// 
			this.jiaowuDataSet1.DataSetName = "jiaowuDataSet1";
			this.jiaowuDataSet1.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
			// 
			// studentInformationTableAdapter
			// 
			this.studentInformationTableAdapter.ClearBeforeFill = true;
			// 
			// button2
			// 
			this.button2.Anchor = System.Windows.Forms.AnchorStyles.None;
			this.button2.BackColor = System.Drawing.SystemColors.ButtonFace;
			this.button2.Font = new System.Drawing.Font("楷体", 10.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
			this.button2.Location = new System.Drawing.Point(673, 480);
			this.button2.Name = "button2";
			this.button2.Size = new System.Drawing.Size(75, 44);
			this.button2.TabIndex = 12;
			this.button2.Text = "再见";
			this.button2.UseVisualStyleBackColor = false;
			this.button2.Click += new System.EventHandler(this.button2_Click);
			// 
			// button3
			// 
			this.button3.Anchor = System.Windows.Forms.AnchorStyles.None;
			this.button3.BackColor = System.Drawing.Color.Lime;
			this.button3.Font = new System.Drawing.Font("楷体", 10.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
			this.button3.Location = new System.Drawing.Point(522, 166);
			this.button3.Name = "button3";
			this.button3.Size = new System.Drawing.Size(75, 44);
			this.button3.TabIndex = 17;
			this.button3.Text = "返回";
			this.button3.UseVisualStyleBackColor = false;
			this.button3.Click += new System.EventHandler(this.button3_Click);
			// 
			// button1
			// 
			this.button1.Anchor = System.Windows.Forms.AnchorStyles.None;
			this.button1.BackColor = System.Drawing.Color.Lime;
			this.button1.Font = new System.Drawing.Font("楷体", 10.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
			this.button1.Location = new System.Drawing.Point(412, 166);
			this.button1.Name = "button1";
			this.button1.Size = new System.Drawing.Size(75, 44);
			this.button1.TabIndex = 16;
			this.button1.Text = "查询";
			this.button1.UseVisualStyleBackColor = false;
			this.button1.Click += new System.EventHandler(this.button1_Click);
			// 
			// textBox2
			// 
			this.textBox2.Anchor = System.Windows.Forms.AnchorStyles.None;
			this.textBox2.BackColor = System.Drawing.SystemColors.Info;
			this.textBox2.Font = new System.Drawing.Font("宋体", 13.8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
			this.textBox2.Location = new System.Drawing.Point(412, 101);
			this.textBox2.Multiline = true;
			this.textBox2.Name = "textBox2";
			this.textBox2.Size = new System.Drawing.Size(185, 35);
			this.textBox2.TabIndex = 15;
			// 
			// label1
			// 
			this.label1.Anchor = System.Windows.Forms.AnchorStyles.None;
			this.label1.BackColor = System.Drawing.Color.Lime;
			this.label1.Font = new System.Drawing.Font("隶书", 16.2F, System.Drawing.FontStyle.Bold);
			this.label1.Location = new System.Drawing.Point(150, 101);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(256, 35);
			this.label1.TabIndex = 14;
			this.label1.Text = "请输入学号查询";
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
			this.dataGridView1.DataSource = this.studentInformationBindingSource;
			this.dataGridView1.Location = new System.Drawing.Point(3, 236);
			this.dataGridView1.Name = "dataGridView1";
			this.dataGridView1.RowTemplate.Height = 27;
			this.dataGridView1.Size = new System.Drawing.Size(758, 211);
			this.dataGridView1.TabIndex = 18;
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
			// button4
			// 
			this.button4.Anchor = System.Windows.Forms.AnchorStyles.None;
			this.button4.BackColor = System.Drawing.Color.Lime;
			this.button4.Font = new System.Drawing.Font("楷体", 10.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
			this.button4.Location = new System.Drawing.Point(585, 12);
			this.button4.Name = "button4";
			this.button4.Size = new System.Drawing.Size(163, 34);
			this.button4.TabIndex = 19;
			this.button4.Text = "更改登录密码";
			this.button4.UseVisualStyleBackColor = false;
			this.button4.Click += new System.EventHandler(this.button4_Click);
			// 
			// putong
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 15F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.ClientSize = new System.Drawing.Size(773, 550);
			this.Controls.Add(this.button4);
			this.Controls.Add(this.dataGridView1);
			this.Controls.Add(this.button3);
			this.Controls.Add(this.button1);
			this.Controls.Add(this.textBox2);
			this.Controls.Add(this.label1);
			this.Controls.Add(this.button2);
			this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
			this.Name = "putong";
			this.Text = "教务系统";
			this.Load += new System.EventHandler(this.老师系统_Load);
			((System.ComponentModel.ISupportInitialize)(this.studentInformationBindingSource)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.jiaowuDataSet1)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
			this.ResumeLayout(false);
			this.PerformLayout();

		}

		#endregion
		private jiaowuDataSet1 jiaowuDataSet1;
		private System.Windows.Forms.BindingSource studentInformationBindingSource;
		private jiaowuDataSet1TableAdapters.studentInformationTableAdapter studentInformationTableAdapter;
		private System.Windows.Forms.Button button2;
		private System.Windows.Forms.Button button3;
		private System.Windows.Forms.Button button1;
		public System.Windows.Forms.TextBox textBox2;
		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.DataGridView dataGridView1;
		private System.Windows.Forms.DataGridViewTextBoxColumn 学号DataGridViewTextBoxColumn;
		private System.Windows.Forms.DataGridViewTextBoxColumn 姓名DataGridViewTextBoxColumn;
		private System.Windows.Forms.DataGridViewTextBoxColumn 性别DataGridViewTextBoxColumn;
		private System.Windows.Forms.DataGridViewTextBoxColumn 出生年月DataGridViewTextBoxColumn;
		private System.Windows.Forms.DataGridViewTextBoxColumn 专业DataGridViewTextBoxColumn;
		private System.Windows.Forms.Button button4;
	}
}