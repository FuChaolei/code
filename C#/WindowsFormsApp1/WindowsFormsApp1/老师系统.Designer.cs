namespace WindowsFormsApp1
{
	partial class 老师系统
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
			System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(老师系统));
			this.studentInformationBindingSource = new System.Windows.Forms.BindingSource(this.components);
			this.jiaowuDataSet1 = new WindowsFormsApp1.jiaowuDataSet1();
			this.studentInformationTableAdapter = new WindowsFormsApp1.jiaowuDataSet1TableAdapters.studentInformationTableAdapter();
			this.pictureBox1 = new System.Windows.Forms.PictureBox();
			this.button2 = new System.Windows.Forms.Button();
			((System.ComponentModel.ISupportInitialize)(this.studentInformationBindingSource)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.jiaowuDataSet1)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
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
			// pictureBox1
			// 
			this.pictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox1.Image")));
			this.pictureBox1.InitialImage = global::WindowsFormsApp1.Properties.Resources.捕获;
			this.pictureBox1.Location = new System.Drawing.Point(-3, 1);
			this.pictureBox1.Name = "pictureBox1";
			this.pictureBox1.Size = new System.Drawing.Size(764, 537);
			this.pictureBox1.TabIndex = 0;
			this.pictureBox1.TabStop = false;
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
			// 老师系统
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 15F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.ClientSize = new System.Drawing.Size(773, 550);
			this.Controls.Add(this.button2);
			this.Controls.Add(this.pictureBox1);
			this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
			this.Name = "老师系统";
			this.Text = "谢谢观看";
			this.Load += new System.EventHandler(this.老师系统_Load);
			((System.ComponentModel.ISupportInitialize)(this.studentInformationBindingSource)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.jiaowuDataSet1)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
			this.ResumeLayout(false);

		}

		#endregion
		private jiaowuDataSet1 jiaowuDataSet1;
		private System.Windows.Forms.BindingSource studentInformationBindingSource;
		private jiaowuDataSet1TableAdapters.studentInformationTableAdapter studentInformationTableAdapter;
		private System.Windows.Forms.PictureBox pictureBox1;
		private System.Windows.Forms.Button button2;
	}
}