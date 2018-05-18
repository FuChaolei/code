namespace WindowsFormsApp1
{
    partial class studentI
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
			System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(studentI));
			this.label4 = new System.Windows.Forms.Label();
			this.textBox4 = new System.Windows.Forms.TextBox();
			this.label3 = new System.Windows.Forms.Label();
			this.textBox3 = new System.Windows.Forms.TextBox();
			this.label2 = new System.Windows.Forms.Label();
			this.textBox2 = new System.Windows.Forms.TextBox();
			this.textBox5 = new System.Windows.Forms.TextBox();
			this.button2 = new System.Windows.Forms.Button();
			this.button1 = new System.Windows.Forms.Button();
			this.label1 = new System.Windows.Forms.Label();
			this.SuspendLayout();
			// 
			// label4
			// 
			this.label4.BackColor = System.Drawing.Color.Lime;
			this.label4.Font = new System.Drawing.Font("楷体", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
			this.label4.Location = new System.Drawing.Point(44, 323);
			this.label4.Name = "label4";
			this.label4.Size = new System.Drawing.Size(225, 25);
			this.label4.TabIndex = 21;
			this.label4.Text = "再次输入新密码";
			// 
			// textBox4
			// 
			this.textBox4.Location = new System.Drawing.Point(324, 323);
			this.textBox4.Name = "textBox4";
			this.textBox4.Size = new System.Drawing.Size(155, 25);
			this.textBox4.TabIndex = 20;
			// 
			// label3
			// 
			this.label3.BackColor = System.Drawing.Color.Lime;
			this.label3.Font = new System.Drawing.Font("楷体", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
			this.label3.Location = new System.Drawing.Point(162, 243);
			this.label3.Name = "label3";
			this.label3.Size = new System.Drawing.Size(107, 25);
			this.label3.TabIndex = 19;
			this.label3.Text = "新密码";
			// 
			// textBox3
			// 
			this.textBox3.Location = new System.Drawing.Point(324, 247);
			this.textBox3.Name = "textBox3";
			this.textBox3.Size = new System.Drawing.Size(155, 25);
			this.textBox3.TabIndex = 18;
			// 
			// label2
			// 
			this.label2.BackColor = System.Drawing.Color.Lime;
			this.label2.Font = new System.Drawing.Font("楷体", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
			this.label2.Location = new System.Drawing.Point(162, 162);
			this.label2.Name = "label2";
			this.label2.Size = new System.Drawing.Size(107, 25);
			this.label2.TabIndex = 17;
			this.label2.Text = "旧密码";
			// 
			// textBox2
			// 
			this.textBox2.Location = new System.Drawing.Point(324, 166);
			this.textBox2.Name = "textBox2";
			this.textBox2.Size = new System.Drawing.Size(155, 25);
			this.textBox2.TabIndex = 16;
			// 
			// textBox5
			// 
			this.textBox5.Location = new System.Drawing.Point(324, 78);
			this.textBox5.Name = "textBox5";
			this.textBox5.Size = new System.Drawing.Size(155, 25);
			this.textBox5.TabIndex = 14;
			this.textBox5.TextChanged += new System.EventHandler(this.textBox5_TextChanged);
			// 
			// button2
			// 
			this.button2.BackColor = System.Drawing.Color.Lime;
			this.button2.Font = new System.Drawing.Font("楷体", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
			this.button2.Location = new System.Drawing.Point(436, 423);
			this.button2.Name = "button2";
			this.button2.Size = new System.Drawing.Size(81, 51);
			this.button2.TabIndex = 23;
			this.button2.Text = "返回";
			this.button2.UseVisualStyleBackColor = false;
			this.button2.Click += new System.EventHandler(this.button2_Click);
			// 
			// button1
			// 
			this.button1.BackColor = System.Drawing.Color.Lime;
			this.button1.Font = new System.Drawing.Font("楷体", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
			this.button1.Location = new System.Drawing.Point(310, 423);
			this.button1.Name = "button1";
			this.button1.Size = new System.Drawing.Size(83, 51);
			this.button1.TabIndex = 22;
			this.button1.Text = "确定";
			this.button1.UseVisualStyleBackColor = false;
			this.button1.Click += new System.EventHandler(this.button1_Click);
			// 
			// label1
			// 
			this.label1.BackColor = System.Drawing.Color.Lime;
			this.label1.Font = new System.Drawing.Font("楷体", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
			this.label1.Location = new System.Drawing.Point(193, 74);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(76, 25);
			this.label1.TabIndex = 15;
			this.label1.Text = "账号";
			// 
			// studentI
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 15F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.BackgroundImage = global::WindowsFormsApp1.Properties.Resources.捕获;
			this.ClientSize = new System.Drawing.Size(566, 501);
			this.Controls.Add(this.button2);
			this.Controls.Add(this.button1);
			this.Controls.Add(this.label4);
			this.Controls.Add(this.textBox4);
			this.Controls.Add(this.label3);
			this.Controls.Add(this.textBox3);
			this.Controls.Add(this.label2);
			this.Controls.Add(this.textBox2);
			this.Controls.Add(this.label1);
			this.Controls.Add(this.textBox5);
			this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
			this.Name = "studentI";
			this.Text = "修改密码";
			this.Load += new System.EventHandler(this.studentI_Load);
			this.ResumeLayout(false);
			this.PerformLayout();

        }

		#endregion

		private System.Windows.Forms.Label label4;
		private System.Windows.Forms.TextBox textBox4;
		private System.Windows.Forms.Label label3;
		private System.Windows.Forms.TextBox textBox3;
		private System.Windows.Forms.Label label2;
		private System.Windows.Forms.TextBox textBox2;
		private System.Windows.Forms.TextBox textBox5;
		private System.Windows.Forms.Button button2;
		private System.Windows.Forms.Button button1;
		private System.Windows.Forms.Label label1;
	}
}