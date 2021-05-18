namespace Login_Cnumeral
{
    partial class Imprimir
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
            Microsoft.Reporting.WinForms.ReportDataSource reportDataSource1 = new Microsoft.Reporting.WinForms.ReportDataSource();
            this.reportViewer1 = new Microsoft.Reporting.WinForms.ReportViewer();
            this.PersonasBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.loginCDataSet = new Login_Cnumeral.loginCDataSet();
            this.PersonasTableAdapter = new Login_Cnumeral.loginCDataSetTableAdapters.PersonasTableAdapter();
            this.Total = new System.Windows.Forms.Label();
            this.Txt_Total = new System.Windows.Forms.TextBox();
            this.dateTimePicker1 = new System.Windows.Forms.DateTimePicker();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.PRODUCTOSBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.ALMACENDataSet = new Login_Cnumeral.ALMACENDataSet();
            this.PRODUCTOSTableAdapter = new Login_Cnumeral.ALMACENDataSetTableAdapters.PRODUCTOSTableAdapter();
            this.PRODUCTOS_AGRICOLBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.ALMACENDataSet1 = new Login_Cnumeral.ALMACENDataSet1();
            this.PRODUCTOS_AGRICOLTableAdapter = new Login_Cnumeral.ALMACENDataSet1TableAdapters.PRODUCTOS_AGRICOLTableAdapter();
            ((System.ComponentModel.ISupportInitialize)(this.PersonasBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.loginCDataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.PRODUCTOSBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.ALMACENDataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.PRODUCTOS_AGRICOLBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.ALMACENDataSet1)).BeginInit();
            this.SuspendLayout();
            // 
            // reportViewer1
            // 
            reportDataSource1.Name = "DataSetAgricola";
            reportDataSource1.Value = this.PRODUCTOS_AGRICOLBindingSource;
            this.reportViewer1.LocalReport.DataSources.Add(reportDataSource1);
            this.reportViewer1.LocalReport.ReportEmbeddedResource = "Login_Cnumeral.Report3.rdlc";
            this.reportViewer1.Location = new System.Drawing.Point(0, 39);
            this.reportViewer1.Name = "reportViewer1";
            this.reportViewer1.Size = new System.Drawing.Size(642, 675);
            this.reportViewer1.TabIndex = 0;
            this.reportViewer1.Load += new System.EventHandler(this.reportViewer1_Load);
            // 
            // PersonasBindingSource
            // 
            this.PersonasBindingSource.DataMember = "Personas";
            this.PersonasBindingSource.DataSource = this.loginCDataSet;
            // 
            // loginCDataSet
            // 
            this.loginCDataSet.DataSetName = "loginCDataSet";
            this.loginCDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // PersonasTableAdapter
            // 
            this.PersonasTableAdapter.ClearBeforeFill = true;
            // 
            // Total
            // 
            this.Total.AutoSize = true;
            this.Total.Font = new System.Drawing.Font("Cambria", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Total.Location = new System.Drawing.Point(388, 740);
            this.Total.Name = "Total";
            this.Total.Size = new System.Drawing.Size(43, 19);
            this.Total.TabIndex = 46;
            this.Total.Text = "Total";
            // 
            // Txt_Total
            // 
            this.Txt_Total.Font = new System.Drawing.Font("Cambria", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Txt_Total.Location = new System.Drawing.Point(459, 737);
            this.Txt_Total.Name = "Txt_Total";
            this.Txt_Total.ReadOnly = true;
            this.Txt_Total.Size = new System.Drawing.Size(147, 26);
            this.Txt_Total.TabIndex = 45;
            this.Txt_Total.TextChanged += new System.EventHandler(this.Txt_Total_TextChanged);
            // 
            // dateTimePicker1
            // 
            this.dateTimePicker1.Enabled = false;
            this.dateTimePicker1.Format = System.Windows.Forms.DateTimePickerFormat.Short;
            this.dateTimePicker1.Location = new System.Drawing.Point(43, 737);
            this.dateTimePicker1.Name = "dateTimePicker1";
            this.dateTimePicker1.Size = new System.Drawing.Size(151, 20);
            this.dateTimePicker1.TabIndex = 47;
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(43, 12);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(151, 20);
            this.textBox1.TabIndex = 48;
            this.textBox1.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(5, 14);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(32, 13);
            this.label1.TabIndex = 49;
            this.label1.Text = "Filtrar";
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(209, 10);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 50;
            this.button1.Text = "Filtrar";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // PRODUCTOSBindingSource
            // 
            this.PRODUCTOSBindingSource.DataMember = "PRODUCTOS";
            this.PRODUCTOSBindingSource.DataSource = this.ALMACENDataSet;
            // 
            // ALMACENDataSet
            // 
            this.ALMACENDataSet.DataSetName = "ALMACENDataSet";
            this.ALMACENDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // PRODUCTOSTableAdapter
            // 
            this.PRODUCTOSTableAdapter.ClearBeforeFill = true;
            // 
            // PRODUCTOS_AGRICOLBindingSource
            // 
            this.PRODUCTOS_AGRICOLBindingSource.DataMember = "PRODUCTOS_AGRICOL";
            this.PRODUCTOS_AGRICOLBindingSource.DataSource = this.ALMACENDataSet1;
            // 
            // ALMACENDataSet1
            // 
            this.ALMACENDataSet1.DataSetName = "ALMACENDataSet1";
            this.ALMACENDataSet1.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // PRODUCTOS_AGRICOLTableAdapter
            // 
            this.PRODUCTOS_AGRICOLTableAdapter.ClearBeforeFill = true;
            // 
            // Imprimir
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(638, 791);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.dateTimePicker1);
            this.Controls.Add(this.Total);
            this.Controls.Add(this.Txt_Total);
            this.Controls.Add(this.reportViewer1);
            this.Name = "Imprimir";
            this.ShowIcon = false;
            this.Text = "Imprimir productos";
            this.Load += new System.EventHandler(this.Imprimir_Load);
            ((System.ComponentModel.ISupportInitialize)(this.PersonasBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.loginCDataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.PRODUCTOSBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.ALMACENDataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.PRODUCTOS_AGRICOLBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.ALMACENDataSet1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private Microsoft.Reporting.WinForms.ReportViewer reportViewer1;
        private System.Windows.Forms.BindingSource PersonasBindingSource;
        private loginCDataSet loginCDataSet;
        private loginCDataSetTableAdapters.PersonasTableAdapter PersonasTableAdapter;
        private System.Windows.Forms.BindingSource PRODUCTOSBindingSource;
        private ALMACENDataSet ALMACENDataSet;
        private ALMACENDataSetTableAdapters.PRODUCTOSTableAdapter PRODUCTOSTableAdapter;
        private System.Windows.Forms.BindingSource PRODUCTOS_AGRICOLBindingSource;
        private ALMACENDataSet1 ALMACENDataSet1;
        private ALMACENDataSet1TableAdapters.PRODUCTOS_AGRICOLTableAdapter PRODUCTOS_AGRICOLTableAdapter;
        private System.Windows.Forms.Label Total;
        private System.Windows.Forms.TextBox Txt_Total;
        private System.Windows.Forms.DateTimePicker dateTimePicker1;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button button1;
    }
}