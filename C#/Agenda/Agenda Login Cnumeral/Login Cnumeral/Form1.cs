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
using Login_Cnumeral;


namespace Login_Cnumeral
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        bool visi = true;
        private void button1_Click(object sender, EventArgs e)
        {

            try
            {
                string CMD = string.Format("Select * from usuarios where usuario = '{0}' AND contraseña = '{1}' AND tipo = '{2}'", Txt_usuario.Text.Trim(), Txt_contraseña.Text.Trim(), Cmb_Tipo.Text.Trim());

                DataSet ds = utilidades.Ejecutar(CMD);
                
                string cuenta = ds.Tables[0].Rows[0]["usuario"].ToString().Trim();
                string contra = ds.Tables[0].Rows[0]["contraseña"].ToString().Trim();
                string tipo = ds.Tables[0].Rows[0]["tipo"].ToString().Trim();

                if (cuenta == Txt_usuario.Text.Trim() && contra == Txt_contraseña.Text.Trim() && tipo == Cmb_Tipo.Text.Trim())
                {
                    MessageBox.Show("Ha iniciado sesión.", "Inicio Sesión", MessageBoxButtons.OK, MessageBoxIcon.Information);
                    
                   if (Cmb_Tipo.Text.Equals("Admin"))
                   {
                       FormAdmin fmr2 = new FormAdmin();
                       this.Hide();
                       fmr2.Show();
                   }
                   else{

                       Form3 fms = new Form3();
                       this.Hide();
                       fms.Show();
                   }
                    
                    
                }
                else
                {
                    
                    MessageBox.Show("Usuario o Contraseña incorrectos!...", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    Txt_usuario.Focus();
                }
                

            }
            catch (Exception ex) 
            {

                MessageBox.Show("Usuario o Contraseña incorrectos!...", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                Txt_usuario.Focus();
               
            }
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void Btn_salir_Click(object sender, EventArgs e)
        {
            Txt_contraseña.Clear();
            Txt_usuario.Clear();
            Txt_usuario.Focus();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {
            if (Txt_contraseña.UseSystemPasswordChar == false)
            {

                Txt_contraseña.UseSystemPasswordChar = true;

            }
            else if (Txt_contraseña.UseSystemPasswordChar == true)
            {


                Txt_contraseña.UseSystemPasswordChar = false;
            }
        }
    }
}
