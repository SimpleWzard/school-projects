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
            this.Btn_Ingresar = new System.Windows.Forms.Button();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.Btn_Eliminar = new System.Windows.Forms.Button();
            this.Btn_buscar = new System.Windows.Forms.Button();
            this.Btn_Actualizar = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.Txt_Nombre_Producto = new System.Windows.Forms.TextBox();
            this.Txt_Cantidates = new System.Windows.Forms.TextBox();
            this.Txt_PrecioCompra = new System.Windows.Forms.TextBox();
            this.Txt_Fecha_Entrega = new System.Windows.Forms.DateTimePicker();
            this.Btn_limpiar = new System.Windows.Forms.Button();
            this.Txt_ITBIS = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.Txt_Ganancia = new System.Windows.Forms.TextBox();
            this.label6 = new System.Windows.Forms.Label();
            this.Txt_PrecioVenta = new System.Windows.Forms.TextBox();
            this.label7 = new System.Windows.Forms.Label();
            this.Txt_Total = new System.Windows.Forms.TextBox();
            this.Total = new System.Windows.Forms.Label();
            this.Btn_Informe = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            this.SuspendLayout();
            // 
            // Btn_Ingresar
            // 
            this.Btn_Ingresar.BackColor = System.Drawing.Color.YellowGreen;
            this.Btn_Ingresar.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F);
            this.Btn_Ingresar.ForeColor = System.Drawing.Color.Linen;
            this.Btn_Ingresar.Location = new System.Drawing.Point(32, 157);
            this.Btn_Ingresar.Name = "Btn_Ingresar";
            this.Btn_Ingresar.Size = new System.Drawing.Size(124, 36);
            this.Btn_Ingresar.TabIndex = 7;
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
            this.dataGridView1.Location = new System.Drawing.Point(-2, 225);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.Size = new System.Drawing.Size(1025, 198);
            this.dataGridView1.TabIndex = 28;
            this.dataGridView1.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView1_CellContentClick_1);
            this.dataGridView1.SelectionChanged += new System.EventHandler(this.dataGridView1_SelectionChanged);
            // 
            // Btn_Eliminar
            // 
            this.Btn_Eliminar.BackColor = System.Drawing.Color.YellowGreen;
            this.Btn_Eliminar.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F);
            this.Btn_Eliminar.ForeColor = System.Drawing.Color.Linen;
            this.Btn_Eliminar.Location = new System.Drawing.Point(200, 157);
            this.Btn_Eliminar.Name = "Btn_Eliminar";
            this.Btn_Eliminar.Size = new System.Drawing.Size(124, 36);
            this.Btn_Eliminar.TabIndex = 8;
            this.Btn_Eliminar.Text = "Eliminar";
            this.Btn_Eliminar.UseVisualStyleBackColor = false;
            this.Btn_Eliminar.Click += new System.EventHandler(this.Btn_Eliminar_Click);
            // 
            // Btn_buscar
            // 
            this.Btn_buscar.BackColor = System.Drawing.Color.YellowGreen;
            this.Btn_buscar.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F);
            this.Btn_buscar.ForeColor = System.Drawing.Color.Linen;
            this.Btn_buscar.Location = new System.Drawing.Point(368, 157);
            this.Btn_buscar.Name = "Btn_buscar";
            this.Btn_buscar.Size = new System.Drawing.Size(124, 36);
            this.Btn_buscar.TabIndex = 9;
            this.Btn_buscar.Text = "Buscar";
            this.Btn_buscar.UseVisualStyleBackColor = false;
            this.Btn_buscar.Click += new System.EventHandler(this.Btn_buscar_Click);
            // 
            // Btn_Actualizar
            // 
            this.Btn_Actualizar.BackColor = System.Drawing.Color.YellowGreen;
            this.Btn_Actualizar.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F);
            this.Btn_Actualizar.ForeColor = System.Drawing.Color.Linen;
            this.Btn_Actualizar.Location = new System.Drawing.Point(536, 157);
            this.Btn_Actualizar.Name = "Btn_Actualizar";
            this.Btn_Actualizar.Size = new System.Drawing.Size(124, 36);
            this.Btn_Actualizar.TabIndex = 10;
            this.Btn_Actualizar.Text = "Actualizar";
            this.Btn_Actualizar.UseVisualStyleBackColor = false;
            this.Btn_Actualizar.Click += new System.EventHandler(this.Btn_Actualizar_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Cambria", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(32, 28);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(66, 19);
            this.label1.TabIndex = 33;
            this.label1.Text = "Nombre";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Cambria", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(334, 28);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(85, 19);
            this.label2.TabIndex = 34;
            this.label2.Text = "Cantidades";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Cambria", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(32, 81);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(133, 19);
            this.label3.TabIndex = 35;
            this.label3.Text = "Precio de Compra";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Cambria", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.Location = new System.Drawing.Point(601, 28);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(112, 19);
            this.label4.TabIndex = 36;
            this.label4.Text = "Fecha de venta";
            // 
            // Txt_Nombre_Producto
            // 
            this.Txt_Nombre_Producto.Font = new System.Drawing.Font("Cambria", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Txt_Nombre_Producto.Location = new System.Drawing.Point(35, 52);
            this.Txt_Nombre_Producto.Name = "Txt_Nombre_Producto";
            this.Txt_Nombre_Producto.Size = new System.Drawing.Size(240, 26);
            this.Txt_Nombre_Producto.TabIndex = 1;
            this.Txt_Nombre_Producto.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.Txt_Nombre_Producto_KeyPress);
            // 
            // Txt_Cantidates
            // 
            this.Txt_Cantidates.Font = new System.Drawing.Font("Cambria", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Txt_Cantidates.Location = new System.Drawing.Point(337, 52);
            this.Txt_Cantidates.Name = "Txt_Cantidates";
            this.Txt_Cantidates.Size = new System.Drawing.Size(240, 26);
            this.Txt_Cantidates.TabIndex = 2;
            this.Txt_Cantidates.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.Txt_PrecioVenta_KeyPress);
            // 
            // Txt_PrecioCompra
            // 
            this.Txt_PrecioCompra.Font = new System.Drawing.Font("Cambria", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Txt_PrecioCompra.Location = new System.Drawing.Point(35, 104);
            this.Txt_PrecioCompra.Name = "Txt_PrecioCompra";
            this.Txt_PrecioCompra.Size = new System.Drawing.Size(163, 26);
            this.Txt_PrecioCompra.TabIndex = 4;
            this.Txt_PrecioCompra.TextChanged += new System.EventHandler(this.Txt_PrecioCompra_TextChanged);
            this.Txt_PrecioCompra.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.Txt_PrecioVenta_KeyPress);
            // 
            // Txt_Fecha_Entrega
            // 
            this.Txt_Fecha_Entrega.Font = new System.Drawing.Font("Cambria", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Txt_Fecha_Entrega.Format = System.Windows.Forms.DateTimePickerFormat.Short;
            this.Txt_Fecha_Entrega.Location = new System.Drawing.Point(604, 52);
            this.Txt_Fecha_Entrega.Name = "Txt_Fecha_Entrega";
            this.Txt_Fecha_Entrega.Size = new System.Drawing.Size(240, 26);
            this.Txt_Fecha_Entrega.TabIndex = 3;
            // 
            // Btn_limpiar
            // 
            this.Btn_limpiar.BackColor = System.Drawing.Color.YellowGreen;
            this.Btn_limpiar.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F);
            this.Btn_limpiar.ForeColor = System.Drawing.Color.Linen;
            this.Btn_limpiar.Location = new System.Drawing.Point(704, 157);
            this.Btn_limpiar.Name = "Btn_limpiar";
            this.Btn_limpiar.Size = new System.Drawing.Size(124, 36);
            this.Btn_limpiar.TabIndex = 11;
            this.Btn_limpiar.Text = "Limpiar";
            this.Btn_limpiar.UseVisualStyleBackColor = false;
            this.Btn_limpiar.Click += new System.EventHandler(this.Btn_limpiar_Click);
            // 
            // Txt_ITBIS
            // 
            this.Txt_ITBIS.Font = new System.Drawing.Font("Cambria", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Txt_ITBIS.Location = new System.Drawing.Point(523, 104);
            this.Txt_ITBIS.Name = "Txt_ITBIS";
            this.Txt_ITBIS.ReadOnly = true;
            this.Txt_ITBIS.Size = new System.Drawing.Size(163, 26);
            this.Txt_ITBIS.TabIndex = 6;
            this.Txt_ITBIS.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.Txt_PrecioVenta_KeyPress);
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Cambria", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label5.Location = new System.Drawing.Point(519, 81);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(46, 19);
            this.label5.TabIndex = 38;
            this.label5.Text = "ITBIS";
            // 
            // Txt_Ganancia
            // 
            this.Txt_Ganancia.Font = new System.Drawing.Font("Cambria", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Txt_Ganancia.Location = new System.Drawing.Point(767, 104);
            this.Txt_Ganancia.Name = "Txt_Ganancia";
            this.Txt_Ganancia.ReadOnly = true;
            this.Txt_Ganancia.Size = new System.Drawing.Size(163, 26);
            this.Txt_Ganancia.TabIndex = 7;
            this.Txt_Ganancia.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.Txt_PrecioVenta_KeyPress);
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Cambria", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label6.Location = new System.Drawing.Point(765, 81);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(72, 19);
            this.label6.TabIndex = 40;
            this.label6.Text = "Ganancia";
            // 
            // Txt_PrecioVenta
            // 
            this.Txt_PrecioVenta.Font = new System.Drawing.Font("Cambria", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Txt_PrecioVenta.Location = new System.Drawing.Point(279, 105);
            this.Txt_PrecioVenta.Name = "Txt_PrecioVenta";
            this.Txt_PrecioVenta.Size = new System.Drawing.Size(163, 26);
            this.Txt_PrecioVenta.TabIndex = 5;
            this.Txt_PrecioVenta.TextChanged += new System.EventHandler(this.Txt_PrecioVenta_TextChanged);
            this.Txt_PrecioVenta.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.Txt_PrecioVenta_KeyPress);
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Font = new System.Drawing.Font("Cambria", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label7.Location = new System.Drawing.Point(281, 82);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(116, 19);
            this.label7.TabIndex = 42;
            this.label7.Text = "Precio de venta";
            // 
            // Txt_Total
            // 
            this.Txt_Total.Font = new System.Drawing.Font("Cambria", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Txt_Total.Location = new System.Drawing.Point(869, 443);
            this.Txt_Total.Name = "Txt_Total";
            this.Txt_Total.ReadOnly = true;
            this.Txt_Total.Size = new System.Drawing.Size(147, 26);
            this.Txt_Total.TabIndex = 43;
            this.Txt_Total.TextChanged += new System.EventHandler(this.Txt_Total_TextChanged);
            // 
            // Total
            // 
            this.Total.AutoSize = true;
            this.Total.Font = new System.Drawing.Font("Cambria", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Total.Location = new System.Drawing.Point(798, 446);
            this.Total.Name = "Total";
            this.Total.Size = new System.Drawing.Size(43, 19);
            this.Total.TabIndex = 44;
            this.Total.Text = "Total";
            // 
            // Btn_Informe
            // 
            this.Btn_Informe.BackColor = System.Drawing.Color.YellowGreen;
            this.Btn_Informe.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F);
            this.Btn_Informe.ForeColor = System.Drawing.Color.Linen;
            this.Btn_Informe.Location = new System.Drawing.Point(872, 157);
            this.Btn_Informe.Name = "Btn_Informe";
            this.Btn_Informe.Size = new System.Drawing.Size(124, 36);
            this.Btn_Informe.TabIndex = 13;
            this.Btn_Informe.Text = "Informe";
            this.Btn_Informe.UseVisualStyleBackColor = false;
            this.Btn_Informe.Click += new System.EventHandler(this.imprimirToolStripMenuItem_Click);
            // 
            // FormAdmin
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DarkOrange;
            this.ClientSize = new System.Drawing.Size(1020, 498);
            this.Controls.Add(this.Btn_Informe);
            this.Controls.Add(this.Total);
            this.Controls.Add(this.Txt_Total);
            this.Controls.Add(this.Txt_PrecioVenta);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.Txt_Ganancia);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.Txt_ITBIS);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.Btn_limpiar);
            this.Controls.Add(this.Txt_Fecha_Entrega);
            this.Controls.Add(this.Txt_PrecioCompra);
            this.Controls.Add(this.Txt_Cantidates);
            this.Controls.Add(this.Txt_Nombre_Producto);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.Btn_Actualizar);
            this.Controls.Add(this.Btn_buscar);
            this.Controls.Add(this.Btn_Eliminar);
            this.Controls.Add(this.dataGridView1);
            this.Controls.Add(this.Btn_Ingresar);
            this.Name = "FormAdmin";
            this.ShowIcon = false;
            this.Text = "Administrador";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.FormAdmin_FormClosing);
            this.FormClosed += new System.Windows.Forms.FormClosedEventHandler(this.FormAdmin_FormClosed);
            this.Load += new System.EventHandler(this.Form2_Load);
            this.Move += new System.EventHandler(this.FormAdmin_Move);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button Btn_Ingresar;
        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.Button Btn_Eliminar;
        private System.Windows.Forms.Button Btn_buscar;
        private System.Windows.Forms.Button Btn_Actualizar;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox Txt_Nombre_Producto;
        private System.Windows.Forms.TextBox Txt_Cantidates;
        private System.Windows.Forms.TextBox Txt_PrecioCompra;
        private System.Windows.Forms.DateTimePicker Txt_Fecha_Entrega;
        private System.Windows.Forms.Button Btn_limpiar;
        private System.Windows.Forms.TextBox Txt_ITBIS;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox Txt_Ganancia;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox Txt_PrecioVenta;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label Total;
        private System.Windows.Forms.Button Btn_Informe;
        public System.Windows.Forms.TextBox Txt_Total;
    }
}