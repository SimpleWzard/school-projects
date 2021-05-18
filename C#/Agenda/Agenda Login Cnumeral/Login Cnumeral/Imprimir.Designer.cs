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
            this.loginCDataSet = new Login_Cnumeral.loginCDataSet();
            this.PersonasBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.PersonasTableAdapter = new Login_Cnumeral.loginCDataSetTableAdapters.PersonasTableAdapter();
            ((System.ComponentModel.ISupportInitialize)(this.loginCDataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.PersonasBindingSource)).BeginInit();
            this.SuspendLayout();
            // 
            // reportViewer1
            // 
            this.reportViewer1.Dock = System.Windows.Forms.DockStyle.Fill;
            reportDataSource1.Name = "Elreporte";
            reportDataSource1.Value = this.PersonasBindingSource;
            this.reportViewer1.LocalReport.DataSources.Add(reportDataSource1);
            this.reportViewer1.LocalReport.ReportEmbeddedResource = "Login_Cnumeral.Report1.rdlc";
            this.reportViewer1.Location = new System.Drawing.Point(0, 0);
            this.reportViewer1.Name = "reportViewer1";
            this.reportViewer1.Size = new System.Drawing.Size(618, 386);
            this.reportViewer1.TabIndex = 0;
            // 
            // loginCDataSet
            // 
            this.loginCDataSet.DataSetName = "loginCDataSet";
            this.loginCDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // PersonasBindingSource
            // 
            this.PersonasBindingSource.DataMember = "Personas";
            this.PersonasBindingSource.DataSource = this.loginCDataSet;
            // 
            // PersonasTableAdapter
            // 
            this.PersonasTableAdapter.ClearBeforeFill = true;
            // 
            // Imprimir
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(618, 386);
            this.Controls.Add(this.reportViewer1);
            this.Name = "Imprimir";
            this.ShowIcon = false;
            this.Text = "Imprimir";
            this.Load += new System.EventHandler(this.Imprimir_Load);
            ((System.ComponentModel.ISupportInitialize)(this.loginCDataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.PersonasBindingSource)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private Microsoft.Reporting.WinForms.ReportViewer reportViewer1;
        private System.Windows.Forms.BindingSource PersonasBindingSource;
        private loginCDataSet loginCDataSet;
        private loginCDataSetTableAdapters.PersonasTableAdapter PersonasTableAdapter;
    }
}