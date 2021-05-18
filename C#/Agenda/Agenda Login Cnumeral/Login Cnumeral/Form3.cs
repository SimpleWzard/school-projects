using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.Sql;
using System.Data.SqlClient;

namespace Login_Cnumeral
{
    public partial class Form3 : Form
    {
        public Form3()
        {
            InitializeComponent();
        }

        private void Form3_Load(object sender, EventArgs e)
        {
            actual();
        }

        private void Btn_Ingresar_Click(object sender, EventArgs e)
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


            }
            catch (Exception ex)
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

        private void Form3_FormClosing(object sender, FormClosingEventArgs e)
        {

        }

        private void Form3_FormClosed(object sender, FormClosedEventArgs e)
        {
            Application.Exit();
        }

        private void acercaDeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Acercade acerca = new Acercade();
            acerca.Show();
        }

        private void cerrarSesiónToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form1 fo1 = new Form1();
            fo1.Show();
        }
    }
}
