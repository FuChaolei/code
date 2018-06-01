namespace WindowsFormsApp1
{
    partial class jiaowuxitong
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
			System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(jiaowuxitong));
			this.contextMenuStrip1 = new System.Windows.Forms.ContextMenuStrip(this.components);
			this.系统 = new System.Windows.Forms.ContextMenuStrip(this.components);
			this.menuStrip1 = new System.Windows.Forms.MenuStrip();
			this.学生管理ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
			this.toolStripSeparator1 = new System.Windows.Forms.ToolStripSeparator();
			this.toolStripSeparator2 = new System.Windows.Forms.ToolStripSeparator();
			this.查询学生信息ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
			this.添加学生信息ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
			this.修改学生信息ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
			this.删除学生信息ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
			this.xiugaimimaToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
			this.切换账号ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
			this.退出ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
			this.menuStrip1.SuspendLayout();
			this.SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this.contextMenuStrip1.ImageScalingSize = new System.Drawing.Size(20, 20);
			this.contextMenuStrip1.Name = "contextMenuStrip1";
			this.contextMenuStrip1.Size = new System.Drawing.Size(61, 4);
			// 
			// 系统
			// 
			this.系统.ImageScalingSize = new System.Drawing.Size(20, 20);
			this.系统.Name = "系统";
			this.系统.Size = new System.Drawing.Size(61, 4);
			// 
			// menuStrip1
			// 
			this.menuStrip1.ImageScalingSize = new System.Drawing.Size(20, 20);
			this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.学生管理ToolStripMenuItem,
            this.xiugaimimaToolStripMenuItem,
            this.切换账号ToolStripMenuItem,
            this.退出ToolStripMenuItem});
			this.menuStrip1.Location = new System.Drawing.Point(0, 0);
			this.menuStrip1.Name = "menuStrip1";
			this.menuStrip1.Size = new System.Drawing.Size(582, 28);
			this.menuStrip1.TabIndex = 7;
			this.menuStrip1.Text = "menuStrip1";
			// 
			// 学生管理ToolStripMenuItem
			// 
			this.学生管理ToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.toolStripSeparator1,
            this.toolStripSeparator2,
            this.查询学生信息ToolStripMenuItem,
            this.添加学生信息ToolStripMenuItem,
            this.修改学生信息ToolStripMenuItem,
            this.删除学生信息ToolStripMenuItem});
			this.学生管理ToolStripMenuItem.Name = "学生管理ToolStripMenuItem";
			this.学生管理ToolStripMenuItem.Size = new System.Drawing.Size(81, 24);
			this.学生管理ToolStripMenuItem.Text = "学生管理";
			this.学生管理ToolStripMenuItem.Click += new System.EventHandler(this.学生管理ToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this.toolStripSeparator1.Name = "toolStripSeparator1";
			this.toolStripSeparator1.Size = new System.Drawing.Size(213, 6);
			// 
			// toolStripSeparator2
			// 
			this.toolStripSeparator2.Name = "toolStripSeparator2";
			this.toolStripSeparator2.Size = new System.Drawing.Size(213, 6);
			// 
			// 查询学生信息ToolStripMenuItem
			// 
			this.查询学生信息ToolStripMenuItem.Name = "查询学生信息ToolStripMenuItem";
			this.查询学生信息ToolStripMenuItem.Size = new System.Drawing.Size(216, 26);
			this.查询学生信息ToolStripMenuItem.Text = "查询学生信息";
			this.查询学生信息ToolStripMenuItem.Click += new System.EventHandler(this.查询学生信息ToolStripMenuItem_Click);
			// 
			// 添加学生信息ToolStripMenuItem
			// 
			this.添加学生信息ToolStripMenuItem.Name = "添加学生信息ToolStripMenuItem";
			this.添加学生信息ToolStripMenuItem.Size = new System.Drawing.Size(216, 26);
			this.添加学生信息ToolStripMenuItem.Text = "添加学生信息";
			this.添加学生信息ToolStripMenuItem.Click += new System.EventHandler(this.添加学生信息ToolStripMenuItem_Click);
			// 
			// 修改学生信息ToolStripMenuItem
			// 
			this.修改学生信息ToolStripMenuItem.Name = "修改学生信息ToolStripMenuItem";
			this.修改学生信息ToolStripMenuItem.Size = new System.Drawing.Size(216, 26);
			this.修改学生信息ToolStripMenuItem.Text = "修改学生信息";
			this.修改学生信息ToolStripMenuItem.Click += new System.EventHandler(this.修改学生信息ToolStripMenuItem_Click);
			// 
			// 删除学生信息ToolStripMenuItem
			// 
			this.删除学生信息ToolStripMenuItem.Name = "删除学生信息ToolStripMenuItem";
			this.删除学生信息ToolStripMenuItem.Size = new System.Drawing.Size(216, 26);
			this.删除学生信息ToolStripMenuItem.Text = "删除学生信息";
			this.删除学生信息ToolStripMenuItem.Click += new System.EventHandler(this.删除学生信息ToolStripMenuItem_Click);
			// 
			// xiugaimimaToolStripMenuItem
			// 
			this.xiugaimimaToolStripMenuItem.Name = "xiugaimimaToolStripMenuItem";
			this.xiugaimimaToolStripMenuItem.Size = new System.Drawing.Size(111, 24);
			this.xiugaimimaToolStripMenuItem.Text = "修改登录密码";
			this.xiugaimimaToolStripMenuItem.Click += new System.EventHandler(this.修改登录密码ToolStripMenuItem_Click);
			// 
			// 切换账号ToolStripMenuItem
			// 
			this.切换账号ToolStripMenuItem.Name = "切换账号ToolStripMenuItem";
			this.切换账号ToolStripMenuItem.Size = new System.Drawing.Size(81, 24);
			this.切换账号ToolStripMenuItem.Text = "切换账号";
			this.切换账号ToolStripMenuItem.Click += new System.EventHandler(this.切换账号ToolStripMenuItem_Click);
			// 
			// 退出ToolStripMenuItem
			// 
			this.退出ToolStripMenuItem.Name = "退出ToolStripMenuItem";
			this.退出ToolStripMenuItem.Size = new System.Drawing.Size(51, 24);
			this.退出ToolStripMenuItem.Text = "退出";
			this.退出ToolStripMenuItem.Click += new System.EventHandler(this.退出ToolStripMenuItem_Click);
			// 
			// jiaowuxitong
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 15F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.AutoScroll = true;
			this.AutoScrollMargin = new System.Drawing.Size(0, 10);
			this.BackgroundImage = global::WindowsFormsApp1.Properties.Resources.捕获;
			this.ClientSize = new System.Drawing.Size(582, 429);
			this.Controls.Add(this.menuStrip1);
			this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
			this.MainMenuStrip = this.menuStrip1;
			this.Name = "jiaowuxitong";
			this.StartPosition = System.Windows.Forms.FormStartPosition.CenterParent;
			this.Text = "教务系统";
			this.Load += new System.EventHandler(this.教务系统_Load);
			this.menuStrip1.ResumeLayout(false);
			this.menuStrip1.PerformLayout();
			this.ResumeLayout(false);
			this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.ContextMenuStrip contextMenuStrip1;
        private System.Windows.Forms.ContextMenuStrip 系统;
		private System.Windows.Forms.MenuStrip menuStrip1;
		private System.Windows.Forms.ToolStripMenuItem 学生管理ToolStripMenuItem;
		private System.Windows.Forms.ToolStripMenuItem xiugaimimaToolStripMenuItem;
		private System.Windows.Forms.ToolStripSeparator toolStripSeparator1;
		private System.Windows.Forms.ToolStripSeparator toolStripSeparator2;
		private System.Windows.Forms.ToolStripMenuItem 查询学生信息ToolStripMenuItem;
		private System.Windows.Forms.ToolStripMenuItem 添加学生信息ToolStripMenuItem;
		private System.Windows.Forms.ToolStripMenuItem 修改学生信息ToolStripMenuItem;
		private System.Windows.Forms.ToolStripMenuItem 删除学生信息ToolStripMenuItem;
		private System.Windows.Forms.ToolStripMenuItem 切换账号ToolStripMenuItem;
		private System.Windows.Forms.ToolStripMenuItem 退出ToolStripMenuItem;
	}
}