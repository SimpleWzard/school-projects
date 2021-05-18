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
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            int caso = 1;
            switch (caso)
            {

                case 0: pictureBox1.Image = Semaforo_login.Properties.Resources.SemaforoRojo; caso = 1; break;
                case 1: pictureBox1.Image = Semaforo_login.Properties.Resources.SemaforoAma; caso = 2; break;
                case 2: pictureBox1.Image = Semaforo_login.Properties.Resources.SemaforoVerd; caso = 0; break;
            }
        }

        private void Form2_FormClosing(object sender, FormClosingEventArgs e)
        {
            timer1.Stop();
            

        }
    }
}
