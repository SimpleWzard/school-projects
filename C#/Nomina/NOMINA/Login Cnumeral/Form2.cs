using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;
using System.Data.Sql;

namespace Login_Cnumeral
{
    public partial class FormAdmin : Form
    {
        public FormAdmin()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            
            try
            {

            string CMDD = string.Format("Insert into nomina values ('{0}','{1}','{2}','{3}', '{4}', '{5}' )", nombreTextBox.Text,apellidoTextBox.Text,cedulaTextBox.Text,Convert.ToInt64(prestamoTextBox.Text), Convert.ToInt64(sueldoBrutoTextBox.Text), Convert.ToInt64(sueldoNetoTextBox.Text));
            DataSet DS = utilidades.Ejecutar(CMDD);

            MessageBox.Show("Se Ingresaron los datos con exito", "Guardado", MessageBoxButtons.OK, MessageBoxIcon.Information);


            }catch(Exception ex)
            {
                MessageBox.Show("Error: " + ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }

            actual();

        }
        public void actual() 
        {

            try
            {

                SqlConnection conex = new SqlConnection("Data Source=.;Initial Catalog=master;Integrated Security=True");
                conex.Open();

                DataTable DS;
                SqlDataAdapter DP = new SqlDataAdapter("select * from nomina", conex);
                DS = new DataTable();
                DP.Fill(DS);
                dataGridView1.DataSource = DS;
                dataGridView1.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;

                
               

            }
            catch (Exception ex)
            {
                MessageBox.Show("Error: " + ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            } 

        }

        private void Form2_Load(object sender, EventArgs e)
        {
            actual();
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void Btn_Eliminar_Click(object sender, EventArgs e)
        {

        }
        private void dataGridView1_SelectionChanged(object sender, EventArgs e)
        {


          
        }

        private void FormAdmin_FormClosing(object sender, FormClosingEventArgs e)
        {
            
        }

        private void FormAdmin_FormClosed(object sender, FormClosedEventArgs e)
        {
     
        }

        private void Btn_buscar_Click(object sender, EventArgs e)
        {
            
          
        }

        private void dataGridView1_CellContentClick_1(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void Btn_Actualizar_Click(object sender, EventArgs e)
        {
        }

        private void registrarUsuariosToolStripMenuItem_Click(object sender, EventArgs e)
        {
           
        }

        private void acercaDeToolStripMenuItem_Click(object sender, EventArgs e)
        {
           
        }

        private void imprimirToolStripMenuItem_Click(object sender, EventArgs e)
        {
           
        }

        private void cerrarSesiónToolStripMenuItem_Click(object sender, EventArgs e)
        {
          
        }

        private void button1_Click_1(object sender, EventArgs e)
        {

            try { 
             float sb, p, res;
            sb = Convert.ToInt64(sueldoBrutoTextBox.Text);
            p = Convert.ToInt64(prestamoTextBox.Text);

            res = (sb - p);

            sueldoNetoTextBox.Text = res.ToString();
            
            }
            catch (Exception ex) { MessageBox.Show("Error" + ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error); }
            
            
            
           
        }
        
        
   
    }
}
