﻿using System;
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
            // TODO: esta línea de código carga datos en la tabla 'loginCDataSet.Personas' Puede moverla o quitarla según sea necesario.
            this.PersonasTableAdapter.Fill(this.loginCDataSet.Personas);

            this.reportViewer1.RefreshReport();
        }
    }
}
