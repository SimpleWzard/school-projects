using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Tabla_de_multiplicar { public partial class Form1 : Form { public Form1() { InitializeComponent(); } int b; 
    private void multiplica() { string a = comboBox1.Text; switch (a) { case "1": b = 1; break; case "2": b = 2; break; case "3": b = 3; break; case "4": b = 4; break; case "5": b = 5; break; case "6": b = 6; break; case "7": b = 7; break; case "8": b = 8; break; case "9": b = 9; break; case "10": b = 10; break; case "11": b = 11; break; case "12": b = 12; break; } } private void button1_Click(object sender, EventArgs e) { multiplica(); label1.Text = "1 x " + b + " = " + (b * 1).ToString(); label2.Text = "2 x " + b + " = " + (b * 2).ToString(); label3.Text = "3 x " + b + " = " + (b * 3).ToString(); label4.Text = "4 x " + b + " = " + (b * 4).ToString(); label5.Text = "5 x " + b + " = " + (b * 5).ToString(); label6.Text = "6 x " + b + " = " + (b * 6).ToString(); label7.Text = "7 x " + b + " = " + (b * 7).ToString(); label9.Text = "8 x " + b + " = " + (b * 8).ToString(); label8.Text = "9 x " + b + " = " + (b * 9).ToString(); label10.Text = "10 x " + b + " = " + (b * 10).ToString(); label11.Text = "11 x " + b + " = " + (b * 11).ToString(); label12.Text = "12 x " + b + " = " + (b * 12).ToString(); }
    private void Form1_Load(object sender, EventArgs e) { } } }
