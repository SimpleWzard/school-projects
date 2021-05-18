using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Semaforo
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        int caso = 1;
        private void BtnCambio_Click(object sender, EventArgs e)
        {
          

        }

        private void timer1_Tick(object sender, EventArgs e)
        {
       

            switch (caso)
            {
                case 0: pictureBox1.Image = Semaforo.Properties.Resources.SemaforoRojo; caso = 1; break;
                case 1: pictureBox1.Image = Semaforo.Properties.Resources.SemaforoAma; caso = 2;  break;
                case 2: pictureBox1.Image = Semaforo.Properties.Resources.SemaforoVerd; caso = 0; break;
            }
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            timer1.Stop();

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void Nombre_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Politecnico Virgen de la altagracia\nJaime Hernández\nNo.20, 5to E\nCopyright © 2018",  "Información");
        }

        private void Nombre_MouseHover(object sender, EventArgs e)
        {
            Nombre.ForeColor = Color.White;
           
        }

        private void Nombre_MouseLeave(object sender, EventArgs e)
        {
            Nombre.ForeColor = Color.Black;
        
        }
    }
}
