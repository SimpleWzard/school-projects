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
            if (Txt_Nombre.Text == "" && Txt_Apellido.Text == "" && Txt_Cedula.Text == "")
            {
                MessageBox.Show("TODOS los datos son necesarios. ", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);

            }
            try
            {

            string CMDD = string.Format("Insert into Personas(nombre, apellido, cedula) values ('{0}','{1}','{2}')", Txt_Nombre.Text.Trim(), Txt_Apellido.Text.Trim(), Txt_Cedula.Text.Trim());
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

                SqlConnection conex = new SqlConnection("Data Source=.;Initial Catalog=loginC;Integrated Security=True");
                conex.Open();

                DataTable DS;
                SqlDataAdapter DP = new SqlDataAdapter("select * from Personas", conex);
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
            try
            {

                string CMDD = string.Format("Delete from Personas where Cedula ='{0}'", Txt_Cedula.Text.Trim());
                DataSet DS = utilidades.Ejecutar(CMDD);

                MessageBox.Show("Se Eliminaron los datos con exito", "Eliminado", MessageBoxButtons.OK, MessageBoxIcon.Information);

            }
            catch (Exception ex)
            {
                MessageBox.Show("Error: " + ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            actual();
        }

        private void dataGridView1_SelectionChanged(object sender, EventArgs e)
        {
            try
            {


                string nombree, apellido, cedula;

                nombree = dataGridView1.CurrentRow.Cells["Nombre"].Value.ToString();
                apellido = dataGridView1.CurrentRow.Cells["Apellido"].Value.ToString();
                cedula = dataGridView1.CurrentRow.Cells["Cedula"].Value.ToString();
              
                Txt_Nombre.Text = nombree;
                Txt_Apellido.Text = apellido;
                Txt_Cedula.Text = cedula;
             

            }
            catch (Exception ex)
            {

            }

          
        }

        private void FormAdmin_FormClosing(object sender, FormClosingEventArgs e)
        {
            
        }

        private void FormAdmin_FormClosed(object sender, FormClosedEventArgs e)
        {
            Application.Exit();
        }

        private void Btn_buscar_Click(object sender, EventArgs e)
        {
            try
            {

                SqlConnection conex = new SqlConnection("Data Source=.;Initial Catalog=loginC;Integrated Security=True");
                conex.Open();

                DataTable DS;
                SqlDataAdapter DP = new SqlDataAdapter("select * from Personas where nombre = '"+ Txt_Nombre.Text+"'", conex);
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

        private void dataGridView1_CellContentClick_1(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void Btn_Actualizar_Click(object sender, EventArgs e)
        {
             try
            {
                string cedulaa;
                cedulaa = dataGridView1.CurrentRow.Cells["Cedula"].Value.ToString();

                string CMDD = string.Format("Update Personas set  nombre = '{0}', apellido = '{1}', Cedula ='{2}' where cedula = '"+ cedulaa +"'", Txt_Nombre.Text.Trim(), Txt_Apellido.Text.Trim(), Txt_Cedula.Text.Trim());
                DataSet DS = utilidades.Ejecutar(CMDD);

                MessageBox.Show("Se Actualizaron los datos con exito", "Actualizado", MessageBoxButtons.OK, MessageBoxIcon.Information);

            }
            catch (Exception ex)
            {

                MessageBox.Show("Error: " + ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            actual();
        }

        private void registrarUsuariosToolStripMenuItem_Click(object sender, EventArgs e)
        {
           Registro res = new Registro();
            res.Show();
        }

        private void acercaDeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Acercade acerca = new Acercade();
            acerca.Show();
        }

        private void imprimirToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Imprimir imp = new Imprimir();
            imp.Show();
        }

        private void cerrarSesiónToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form1 fo1 = new Form1();
            this.Hide();
            fo1.Show();
        }
        
        
   
    }
}
