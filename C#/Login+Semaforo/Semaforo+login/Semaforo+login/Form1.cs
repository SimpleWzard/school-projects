using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Semaforo_login
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void BtnAceptar_Click(object sender, EventArgs e)
        {
            string nombre, contraseña;
            nombre = TxtNombre.Text;
            contraseña = TxtContraseña.Text;

            if (nombre.Equals("") | contraseña.Equals(""))
            {

                MessageBox.Show("Todos los datos son necesarios", "Error");


            }
            else
            {


                if (nombre.Equals("jaime"))
                {

                    if (contraseña.Equals("pepito"))
                    {

                        MessageBox.Show("Bienvenido :D", "Hola.");
                        Form2 form1 = new Form2();
                        form1.Show();
                        this.Hide();

                    }
                    else
                    {

                        MessageBox.Show("Reingrese la contraseña", "Error");
                        TxtContraseña.Clear();
                    }
                }
                else
                {

                    MessageBox.Show("Reingrese el usuario", "Error");
                    TxtNombre.Clear();

                }


            }
           
        }

        private void BtnCancelar_Click(object sender, EventArgs e)
        {
            TxtContraseña.Clear();
            TxtNombre.Clear();  
        }

        private void pictureBox2_Click(object sender, EventArgs e)
        {
            if (TxtContraseña.UseSystemPasswordChar == false)
            {

                TxtContraseña.UseSystemPasswordChar = true;

            }
            else if (TxtContraseña.UseSystemPasswordChar == true)
            {


                TxtContraseña.UseSystemPasswordChar = false;
            }
        }
    }
}
