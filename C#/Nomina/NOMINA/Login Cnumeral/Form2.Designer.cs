namespace Login_Cnumeral
{
    partial class FormAdmin
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
            System.Windows.Forms.Label sueldoNetoLabel;
            System.Windows.Forms.Label sueldoBrutoLabel;
            System.Windows.Forms.Label prestamoLabel;
            System.Windows.Forms.Label cedulaLabel;
            System.Windows.Forms.Label apellidoLabel;
            System.Windows.Forms.Label nombreLabel;
            this.Btn_Ingresar = new System.Windows.Forms.Button();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.button1 = new System.Windows.Forms.Button();
            this.sueldoNetoTextBox = new System.Windows.Forms.TextBox();
            this.sueldoBrutoTextBox = new System.Windows.Forms.TextBox();
            this.prestamoTextBox = new System.Windows.Forms.TextBox();
            this.cedulaTextBox = new System.Windows.Forms.TextBox();
            this.apellidoTextBox = new System.Windows.Forms.TextBox();
            this.nombreTextBox = new System.Windows.Forms.TextBox();
            sueldoNetoLabel = new System.Windows.Forms.Label();
            sueldoBrutoLabel = new System.Windows.Forms.Label();
            prestamoLabel = new System.Windows.Forms.Label();
            cedulaLabel = new System.Windows.Forms.Label();
            apellidoLabel = new System.Windows.Forms.Label();
            nombreLabel = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            this.SuspendLayout();
            // 
            // Btn_Ingresar
            // 
            this.Btn_Ingresar.BackColor = System.Drawing.Color.MediumOrchid;
            this.Btn_Ingresar.Font = new System.Drawing.Font("Verdana", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Btn_Ingresar.ForeColor = System.Drawing.SystemColors.Window;
            this.Btn_Ingresar.Location = new System.Drawing.Point(480, 12);
            this.Btn_Ingresar.Name = "Btn_Ingresar";
            this.Btn_Ingresar.Size = new System.Drawing.Size(28, 174);
            this.Btn_Ingresar.TabIndex = 5;
            this.Btn_Ingresar.Text = "Ingresar";
            this.Btn_Ingresar.UseVisualStyleBackColor = false;
            this.Btn_Ingresar.Click += new System.EventHandler(this.button1_Click);
            // 
            // dataGridView1
            // 
            this.dataGridView1.AllowUserToAddRows = false;
            this.dataGridView1.AllowUserToDeleteRows = false;
            this.dataGridView1.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Location = new System.Drawing.Point(-3, 200);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.Size = new System.Drawing.Size(570, 229);
            this.dataGridView1.TabIndex = 28;
            this.dataGridView1.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView1_CellContentClick_1);
            this.dataGridView1.SelectionChanged += new System.EventHandler(this.dataGridView1_SelectionChanged);
            // 
            // button1
            // 
            this.button1.BackColor = System.Drawing.Color.CadetBlue;
            this.button1.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button1.ForeColor = System.Drawing.SystemColors.Window;
            this.button1.Location = new System.Drawing.Point(151, 12);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(303, 22);
            this.button1.TabIndex = 41;
            this.button1.Text = "C A L C U L A   S U E L D O   N E T O";
            this.button1.UseVisualStyleBackColor = false;
            this.button1.Click += new System.EventHandler(this.button1_Click_1);
            // 
            // sueldoNetoLabel
            // 
            sueldoNetoLabel.AutoSize = true;
            sueldoNetoLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            sueldoNetoLabel.ForeColor = System.Drawing.SystemColors.Window;
            sueldoNetoLabel.Location = new System.Drawing.Point(206, 136);
            sueldoNetoLabel.Name = "sueldoNetoLabel";
            sueldoNetoLabel.Size = new System.Drawing.Size(113, 20);
            sueldoNetoLabel.TabIndex = 39;
            sueldoNetoLabel.Text = "Sueldo Neto:";
            // 
            // sueldoNetoTextBox
            // 
            this.sueldoNetoTextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.sueldoNetoTextBox.Location = new System.Drawing.Point(322, 133);
            this.sueldoNetoTextBox.Name = "sueldoNetoTextBox";
            this.sueldoNetoTextBox.ReadOnly = true;
            this.sueldoNetoTextBox.Size = new System.Drawing.Size(100, 26);
            this.sueldoNetoTextBox.TabIndex = 40;
            // 
            // sueldoBrutoLabel
            // 
            sueldoBrutoLabel.AutoSize = true;
            sueldoBrutoLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            sueldoBrutoLabel.ForeColor = System.Drawing.SystemColors.Window;
            sueldoBrutoLabel.Location = new System.Drawing.Point(201, 98);
            sueldoBrutoLabel.Name = "sueldoBrutoLabel";
            sueldoBrutoLabel.Size = new System.Drawing.Size(119, 20);
            sueldoBrutoLabel.TabIndex = 37;
            sueldoBrutoLabel.Text = "Sueldo Bruto:";
            // 
            // sueldoBrutoTextBox
            // 
            this.sueldoBrutoTextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.sueldoBrutoTextBox.Location = new System.Drawing.Point(322, 95);
            this.sueldoBrutoTextBox.Name = "sueldoBrutoTextBox";
            this.sueldoBrutoTextBox.Size = new System.Drawing.Size(100, 26);
            this.sueldoBrutoTextBox.TabIndex = 38;
            // 
            // prestamoLabel
            // 
            prestamoLabel.AutoSize = true;
            prestamoLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            prestamoLabel.ForeColor = System.Drawing.SystemColors.Window;
            prestamoLabel.Location = new System.Drawing.Point(221, 61);
            prestamoLabel.Name = "prestamoLabel";
            prestamoLabel.Size = new System.Drawing.Size(90, 20);
            prestamoLabel.TabIndex = 35;
            prestamoLabel.Text = "Prestamo:";
            // 
            // prestamoTextBox
            // 
            this.prestamoTextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.prestamoTextBox.Location = new System.Drawing.Point(322, 58);
            this.prestamoTextBox.Name = "prestamoTextBox";
            this.prestamoTextBox.Size = new System.Drawing.Size(100, 26);
            this.prestamoTextBox.TabIndex = 36;
            // 
            // cedulaLabel
            // 
            cedulaLabel.AutoSize = true;
            cedulaLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            cedulaLabel.ForeColor = System.Drawing.Color.White;
            cedulaLabel.Location = new System.Drawing.Point(26, 132);
            cedulaLabel.Name = "cedulaLabel";
            cedulaLabel.Size = new System.Drawing.Size(63, 20);
            cedulaLabel.TabIndex = 33;
            cedulaLabel.Text = "Cedula:";
            // 
            // cedulaTextBox
            // 
            this.cedulaTextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.cedulaTextBox.Location = new System.Drawing.Point(93, 129);
            this.cedulaTextBox.Name = "cedulaTextBox";
            this.cedulaTextBox.Size = new System.Drawing.Size(100, 26);
            this.cedulaTextBox.TabIndex = 34;
            // 
            // apellidoLabel
            // 
            apellidoLabel.AutoSize = true;
            apellidoLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            apellidoLabel.ForeColor = System.Drawing.Color.White;
            apellidoLabel.Location = new System.Drawing.Point(22, 97);
            apellidoLabel.Name = "apellidoLabel";
            apellidoLabel.Size = new System.Drawing.Size(69, 20);
            apellidoLabel.TabIndex = 31;
            apellidoLabel.Text = "Apellido:";
            // 
            // apellidoTextBox
            // 
            this.apellidoTextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.apellidoTextBox.Location = new System.Drawing.Point(93, 94);
            this.apellidoTextBox.Name = "apellidoTextBox";
            this.apellidoTextBox.Size = new System.Drawing.Size(100, 26);
            this.apellidoTextBox.TabIndex = 32;
            // 
            // nombreLabel
            // 
            nombreLabel.AutoSize = true;
            nombreLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            nombreLabel.ForeColor = System.Drawing.Color.White;
            nombreLabel.Location = new System.Drawing.Point(22, 64);
            nombreLabel.Name = "nombreLabel";
            nombreLabel.Size = new System.Drawing.Size(69, 20);
            nombreLabel.TabIndex = 29;
            nombreLabel.Text = "Nombre:";
            // 
            // nombreTextBox
            // 
            this.nombreTextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.nombreTextBox.Location = new System.Drawing.Point(93, 61);
            this.nombreTextBox.Name = "nombreTextBox";
            this.nombreTextBox.Size = new System.Drawing.Size(100, 26);
            this.nombreTextBox.TabIndex = 30;
            // 
            // FormAdmin
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DarkTurquoise;
            this.ClientSize = new System.Drawing.Size(565, 422);
            this.Controls.Add(this.button1);
            this.Controls.Add(sueldoNetoLabel);
            this.Controls.Add(this.sueldoNetoTextBox);
            this.Controls.Add(sueldoBrutoLabel);
            this.Controls.Add(this.sueldoBrutoTextBox);
            this.Controls.Add(prestamoLabel);
            this.Controls.Add(this.prestamoTextBox);
            this.Controls.Add(cedulaLabel);
            this.Controls.Add(this.cedulaTextBox);
            this.Controls.Add(apellidoLabel);
            this.Controls.Add(this.apellidoTextBox);
            this.Controls.Add(nombreLabel);
            this.Controls.Add(this.nombreTextBox);
            this.Controls.Add(this.dataGridView1);
            this.Controls.Add(this.Btn_Ingresar);
            this.Name = "FormAdmin";
            this.ShowIcon = false;
            this.Text = "Nomina :3";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.FormAdmin_FormClosing);
            this.FormClosed += new System.Windows.Forms.FormClosedEventHandler(this.FormAdmin_FormClosed);
            this.Load += new System.EventHandler(this.Form2_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button Btn_Ingresar;
        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.TextBox sueldoNetoTextBox;
        private System.Windows.Forms.TextBox sueldoBrutoTextBox;
        private System.Windows.Forms.TextBox prestamoTextBox;
        private System.Windows.Forms.TextBox cedulaTextBox;
        private System.Windows.Forms.TextBox apellidoTextBox;
        private System.Windows.Forms.TextBox nombreTextBox;
    }
}