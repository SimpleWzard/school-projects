using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Login_Cnumeral
{
    public partial class Imprimir : Form
    {
        public Imprimir()
        {
            InitializeComponent();
        }

        private void Imprimir_Load(object sender, EventArgs e)
        {
            // TODO: esta línea de código carga datos en la tabla 'ALMACENDataSet1.PRODUCTOS_AGRICOL' Puede moverla o quitarla según sea necesario.
            this.PRODUCTOS_AGRICOLTableAdapter.Fill(this.ALMACENDataSet1.PRODUCTOS_AGRICOL);
            // TODO: esta línea de código carga datos en la tabla 'ALMACENDataSet.PRODUCTOS' Puede moverla o quitarla según sea necesario.
            this.PRODUCTOSTableAdapter.Fill(this.ALMACENDataSet.PRODUCTOS);
             // TODO: esta línea de código carga datos en la tabla 'loginCDataSet.Personas' Puede moverla o quitarla según sea necesario.
            this.PersonasTableAdapter.Fill(this.loginCDataSet.Personas);

            this.reportViewer1.RefreshReport();
            string aaa = Convert.ToString(FormAdmin.suma);
            Txt_Total.Text = aaa;
            dateTimePicker1.BringToFront();
       
        }

        private void Cmb_Tabla_SelectedIndexChanged(object sender, EventArgs e)
        {
          
        }

        private void Txt_Total_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        
        private void reportViewer1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {

            try
            {
                this.PRODUCTOS_AGRICOLTableAdapter.FillBy(this.ALMACENDataSet1.PRODUCTOS_AGRICOL, textBox1.Text);
                this.reportViewer1.RefreshReport();
            }
            catch (System.Exception ex)
            {
                System.Windows.Forms.MessageBox.Show(ex.Message);
            }
           
        }

        private void fillByToolStripButton_Click(object sender, EventArgs e)
        {
            

        }

        private void fillByToolStrip_ItemClicked(object sender, ToolStripItemClickedEventArgs e)
        {

        }

        private void productoToolStripTextBox_Click(object sender, EventArgs e)
        {

        }
    }
}
