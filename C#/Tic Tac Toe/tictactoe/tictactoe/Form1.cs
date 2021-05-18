using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace tictactoe
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        bool turno = true;
        int lb1=0, lb2=0, lb3=0, lb4=0, lb5=0, lb6=0, lb7=0, lb8=0, lb9=0;
        int lb11 = 0, lb22 = 0, lb33 = 0, lb44 = 0, lb55 = 0, lb66 = 0, lb77 = 0, lb88 = 0, lb99 = 0;
        private void Form1_Load(object sender, EventArgs e)
        {
            
        }
        
        private void verificar2()
        {
            if ((lb11 + lb22 + lb33) == 6)
            {
                label1.ForeColor = Color.Blue;
                label2.ForeColor = Color.Blue;
                label3.ForeColor = Color.Blue;
                MessageBox.Show("Gana O", "Ganador");
                reseteo();
            }
            else if ((lb44 + lb55 + lb66) == 6)
            {
                label4.ForeColor = Color.Blue;
                label5.ForeColor = Color.Blue;
                label6.ForeColor = Color.Blue;
                MessageBox.Show("Gana O", "Ganador");
                reseteo();
            }
            else if ((lb77 + lb88 + lb99) == 6)
            {
                label7.ForeColor = Color.Blue;
                label8.ForeColor = Color.Blue;
                label9.ForeColor = Color.Blue;
                MessageBox.Show("Gana O", "Ganador");
                reseteo();
            }
            else if ((lb11 + lb44 + lb77) == 6)
            {
                label1.ForeColor = Color.Blue;
                label4.ForeColor = Color.Blue;
                label7.ForeColor = Color.Blue;
                MessageBox.Show("Gana O", "Ganador");
                reseteo();
            }
            else if ((lb22 + lb55 + lb88) == 6)
            {
                label2.ForeColor = Color.Blue;
                label5.ForeColor = Color.Blue;
                label8.ForeColor = Color.Blue;
                MessageBox.Show("Gana O", "Ganador");
                reseteo();
            }
            else if ((lb33 + lb66 + lb99) == 6)
            {
                label3.ForeColor = Color.Blue;
                label6.ForeColor = Color.Blue;
                label9.ForeColor = Color.Blue;
                MessageBox.Show("Gana O", "Ganador");
                reseteo();
            }
            else if ((lb11 + lb55 + lb99) == 6)
            {
                label1.ForeColor = Color.Blue;
                label5.ForeColor = Color.Blue;
                label9.ForeColor = Color.Blue;
                MessageBox.Show("Gana O", "Ganador");
                reseteo();
            }
            else if ((lb33 + lb55 + lb77) == 6)
            {
                label3.ForeColor = Color.Blue;
                label5.ForeColor = Color.Blue;
                label7.ForeColor = Color.Blue;
                MessageBox.Show("Gana O", "Ganador");
                reseteo();
            }

        }
        private void verificar1()
        {
            if ((lb1 + lb2 + lb3) == 3)
            {
                label1.ForeColor = Color.Red;
                label2.ForeColor = Color.Red;
                label3.ForeColor = Color.Red;
                MessageBox.Show("Gana X", "Ganador");
                reseteo();
            }
            else if ((lb4 + lb5 + lb6) == 3)
            {
                label4.ForeColor = Color.Red;
                label5.ForeColor = Color.Red;
                label6.ForeColor = Color.Red;
                MessageBox.Show("Gana X", "Ganador");
                reseteo();
            }
            else if ((lb7 + lb8 + lb9) == 3)
            {
                label7.ForeColor = Color.Red;
                label8.ForeColor = Color.Red;
                label9.ForeColor = Color.Red;
                MessageBox.Show("Gana X", "Ganador");
                reseteo();
            }
            else if ((lb1 + lb4 + lb7) == 3)
            {
                label1.ForeColor = Color.Red;
                label4.ForeColor = Color.Red;
                label7.ForeColor = Color.Red;
                MessageBox.Show("Gana X", "Ganador");
                reseteo();
            }
            else if ((lb2 + lb5 + lb8) == 3)
            {
                label2.ForeColor = Color.Red;
                label5.ForeColor = Color.Red;
                label8.ForeColor = Color.Red;
                MessageBox.Show("Gana X", "Ganador");
                reseteo();
            }
            else if ((lb3 + lb6 + lb9) == 3)
            {
                label3.ForeColor = Color.Red;
                label6.ForeColor = Color.Red;
                label9.ForeColor = Color.Red;
                MessageBox.Show("Gana X", "Ganador");
                reseteo();
            }
            else if ((lb1 + lb5 + lb9) == 3)
            {
                label1.ForeColor = Color.Red;
                label5.ForeColor = Color.Red;
                label9.ForeColor = Color.Red;
                MessageBox.Show("Gana X", "Ganador");
                reseteo();
            }
            else if ((lb3 + lb5 + lb7) == 3)
            {
                label3.ForeColor = Color.Red;
                label5.ForeColor = Color.Red;
                label7.ForeColor = Color.Red;
                MessageBox.Show("Gana X", "Ganador");
                reseteo();
            }

        }


        private void label1_Click(object sender, EventArgs e)
        {
            if (label1.Text.Equals("-") && turno == true) {

                label1.Text = "X";
                lb1 = 1;
                turno = false;
            }
            else if (label1.Text.Equals("-") && turno == false) {

                label1.Text = "O";
                lb11 = 2;
                turno = true;
            }
            verificar1();
            verificar2();
             
        }

        private void label2_Click(object sender, EventArgs e)
        {
            if (label2.Text.Equals("-") && turno == true)
            {

                label2.Text = "X";
                lb2 = 1;
                turno = false;
            }
            else if (label2.Text.Equals("-") && turno == false)
            {

                label2.Text = "O";
                lb22 = 2;
                turno = true;
            }
            verificar1();
            verificar2();
           
        }

        private void label3_Click(object sender, EventArgs e)
        {
            if (label3.Text.Equals("-") && turno == true)
            {

                label3.Text = "X";
                lb3 = 1;
                turno = false;
            }
            else if (label3.Text.Equals("-") && turno == false)
            {

                label3.Text = "O";
                lb33 = 2;
                turno = true;
            }
            verificar1();
            verificar2();
             
        }

        private void label4_Click(object sender, EventArgs e)
        {
            if (label4.Text.Equals("-") && turno == true)
            {

                label4.Text = "X";
                lb4 = 1;
                turno = false;
            }
            else if (label4.Text.Equals("-") && turno == false)
            {

                label4.Text = "O";
                lb44 = 2;
                turno = true;
            }
            verificar1();
            verificar2();
            
        }

        private void label5_Click(object sender, EventArgs e)
        {
            if (label5.Text.Equals("-") && turno == true)
            {

                label5.Text = "X";
                lb5 = 1;
                turno = false;
            }
            else if (label5.Text.Equals("-") && turno == false)
            {

                label5.Text = "O";
                lb55 = 2;
                turno = true;
            }
            verificar1();
            verificar2();
             
        }

        private void label6_Click(object sender, EventArgs e)
        {
            if (label6.Text.Equals("-") && turno == true)
            {

                label6.Text = "X";
                lb6 = 1;
                turno = false;
            }
            else if (label6.Text.Equals("-") && turno == false)
            {

                label6.Text = "O";
                lb66 = 2;
                turno = true;
            
            }
            verificar1();
            verificar2();
            
        }

        private void label9_Click(object sender, EventArgs e)
        {
            if (label9.Text.Equals("-") && turno == true)
            {

                label9.Text = "X";
                lb9 = 1;
                turno = false;
            }
            else if (label9.Text.Equals("-") && turno == false)
            {

                label9.Text = "O";
                lb99 = 2;
                turno = true;
            }
            verificar1();
            verificar2();
            
        }

        private void label8_Click(object sender, EventArgs e)
        {
            if (label8.Text.Equals("-") && turno == true)
            {

                label8.Text = "X";
                lb8 = 1;
                turno = false;
            }
            else if (label8.Text.Equals("-") && turno == false)
            {

                label8.Text = "O";
                lb88 = 2;
                turno = true;
            }
            verificar1();
            verificar2();
           
        }

        private void label7_Click(object sender, EventArgs e)
        {
            if (label7.Text.Equals("-") && turno == true)
            {
                label7.Text = "X";
                lb7 = 1;
                turno = false;
            }
            else if (label7.Text.Equals("-") && turno == false)
            {

                label7.Text = "O";
                lb77 = 2;
                turno = true;
            }
            verificar1();
            verificar2();
            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            reseteo();
        }
        private void reseteo()
        {
            label1.Text = "-";
            label2.Text = "-";
            label3.Text = "-";
            label4.Text = "-";
            label5.Text = "-";
            label6.Text = "-";
            label7.Text = "-";
            label8.Text = "-";
            label9.Text = "-";

            label1.ForeColor = Color.Black;
            label2.ForeColor = Color.Black;
            label3.ForeColor = Color.Black;
            label4.ForeColor = Color.Black;
            label5.ForeColor = Color.Black;
            label6.ForeColor = Color.Black;
            label7.ForeColor = Color.Black;
            label8.ForeColor = Color.Black;
            label9.ForeColor = Color.Black;

            lb1 = 0;
            lb11 = 0;
            lb2 = 0;
            lb22 = 0;
            lb3 = 0;
            lb33 = 0;
            lb4 = 0;
            lb44 = 0;
            lb5 = 0;
            lb55 = 0;
            lb6 = 0;
            lb66 = 0;
            lb7 = 0;
            lb77 = 0;
            lb8 = 0;
            lb88 = 0;
            lb9 = 0;
            lb99 = 0;
        }
    }
}
