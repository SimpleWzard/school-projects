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
        public static int suma = 0;
        public bool cerrao = true;
        private void button1_Click(object sender, EventArgs e)
        {


            
            double itbis, precom, preven, ganan, menositbis;

            
            precom = Convert.ToDouble(Txt_PrecioCompra.Text);
            preven = Convert.ToDouble(Txt_PrecioVenta.Text);

            itbis = (preven * 0.18);

            menositbis = preven - itbis;

            ganan = menositbis - precom;

            Txt_ITBIS.Text = Convert.ToString(itbis);
            Txt_Ganancia.Text = Convert.ToString(ganan);




                if (Txt_Nombre_Producto.Text == "" || Txt_Cantidates.Text == "" || Txt_PrecioCompra.Text == "" || Txt_PrecioVenta.Text == "")
                {
                    MessageBox.Show("TODOS los datos son necesarios. ", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);

                }
                else
                {
                    try
                    {
                        string time = Convert.ToString(Txt_Fecha_Entrega.Text);

                        string CMDD = string.Format("Insert into PRODUCTOS_AGRICOL (Nombre_Producto, Cantidades, Precio_Venta, Precio_Compra, Itbis, Ganancia, Fecha_Venta) values ('{0}','{1}','{2}','{3}','{4}','{5}', '{6}')",
                            Txt_Nombre_Producto.Text.Trim(), Txt_Cantidates.Text.Trim(), Txt_PrecioCompra.Text.Trim(), Txt_PrecioVenta.Text, Txt_ITBIS.Text, Txt_Ganancia.Text, time);
                        DataSet DS = utilidades.Ejecutar(CMDD);

                        MessageBox.Show("Se Ingresaron los datos con exito", "Guardado", MessageBoxButtons.OK, MessageBoxIcon.Information);
                    }
                    catch (Exception ex)
                    {
                        MessageBox.Show("Error:  " + ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }



                    actual();
                
            }
        }
        public void actual() 
        {

            try
            {

                SqlConnection conex = new SqlConnection("Data Source=.;Initial Catalog=ALMACEN;Integrated Security=True");
                conex.Open();

                DataTable DS;
                SqlDataAdapter DP = new SqlDataAdapter("select * from PRODUCTOS_AGRICOL", conex);
                DS = new DataTable();
                DP.Fill(DS);
                dataGridView1.DataSource = DS;
                dataGridView1.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;

                
               

            }
            catch (Exception ex)
            {
                MessageBox.Show("Error: " + ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            actualprove();

        }
        public void actualprove()
        {
            try
            {

                
                SqlConnection conex = new SqlConnection("Data Source=.;Initial Catalog=ALMACEN;Integrated Security=True");
                SqlCommand DC = new SqlCommand("select ganancia from PRODUCTOS_AGRICOL", conex);
                conex.Open();

                int suma = 0;
                SqlDataReader dr = DC.ExecuteReader();
                while (dr.Read() == true)
                {

                    suma = suma + Convert.ToInt32(dr[0]);
                  
                }
                
                conex.Close();
                Txt_Total.Text = Convert.ToString(suma);
                 
            }
            catch (Exception ex)
            {
                MessageBox.Show("Ha sucedido un error: " + ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
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

                string CMDD = string.Format("Delete from PRODUCTOS_AGRICOL where Nombre_Producto ='{0}'", Txt_Nombre_Producto.Text.Trim());
                DataSet DS = utilidades.Ejecutar(CMDD);

            

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


                string nombree,cantidades, precioven, preciocom, fecha,  ganancia, itbis;


                
                nombree = dataGridView1.CurrentRow.Cells["Nombre_Producto"].Value.ToString();
                preciocom = dataGridView1.CurrentRow.Cells["Precio_Compra"].Value.ToString();
                cantidades = dataGridView1.CurrentRow.Cells["Cantidades"].Value.ToString();
                precioven = dataGridView1.CurrentRow.Cells["Precio_venta"].Value.ToString();
                fecha = dataGridView1.CurrentRow.Cells["Fecha_Venta"].Value.ToString();
                itbis = dataGridView1.CurrentRow.Cells["Itbis"].Value.ToString();
                ganancia = dataGridView1.CurrentRow.Cells["ganancia"].Value.ToString();


                Txt_Nombre_Producto.Text = nombree;
                Txt_Cantidates.Text = cantidades;
                Txt_PrecioCompra.Text = preciocom;
                Txt_PrecioVenta.Text = precioven;
                Txt_Fecha_Entrega.Text = fecha;
                Txt_Ganancia.Text = ganancia;
                Txt_ITBIS.Text = itbis;
               
               
            
             

            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }

          
        }

        private void FormAdmin_FormClosing(object sender, FormClosingEventArgs e)
        {
         
          
        }

        private void Btn_buscar_Click(object sender, EventArgs e)
        {
            try
            {

                SqlConnection conex = new SqlConnection("Data Source=.;Initial Catalog=ALMACEN;Integrated Security=True");
                conex.Open();

                DataTable DS;
                SqlDataAdapter DP = new SqlDataAdapter("select * from PRODUCTOS_AGRICOL where nombre_producto = '"+ Txt_Nombre_Producto.Text+"'", conex);
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
                string code, time;
                code = dataGridView1.CurrentRow.Cells["Nombre_Producto"].Value.ToString();
                time = Txt_Fecha_Entrega.Text;

                string CMDD = string.Format("Update PRODUCTOS_AGRICOL set  nombre_producto = '{0}', categoria = '{1}', cantidades ='{2}', precio='{3}', fecha_entrada= '{4}', proveedor ='{5}' where Nombre_producto = '"+ code +"'", Txt_Nombre_Producto.Text.Trim(), Txt_Cantidates.Text.Trim(), Txt_PrecioCompra.Text.Trim(), Txt_PrecioVenta.Text, Txt_ITBIS.Text, Txt_Ganancia.Text, time);
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
       
        }

        private void acercaDeToolStripMenuItem_Click(object sender, EventArgs e)
        {
           
        }

        private void imprimirToolStripMenuItem_Click(object sender, EventArgs e)
        {
            suma = Convert.ToInt32(Txt_Total.Text);
            Imprimir imp = new Imprimir();
            imp.Show();
        }

        private void cerrarSesiónToolStripMenuItem_Click(object sender, EventArgs e)
        {
          
        }

        private void Btn_limpiar_Click(object sender, EventArgs e)
        {
            Txt_Nombre_Producto.Clear();
            Txt_PrecioVenta.Clear();
            Txt_ITBIS.Clear();
            Txt_Ganancia.Clear();
            Txt_Cantidates.Clear();
            Txt_PrecioCompra.Clear();
            Txt_Fecha_Entrega.BringToFront();
          
        }

        private void proveedoresToolStripMenuItem1_Click(object sender, EventArgs e)
        {
          
        }

        private void Btn_Truncatear_Click(object sender, EventArgs e)
        {
            object pregu = MessageBox.Show("Se eliminaran TODOS los datos de la tabla \n¿Está seguro de que desea continuar?", "Eliminar todos los datos", MessageBoxButtons.YesNo, MessageBoxIcon.Warning);

            if (pregu.Equals(System.Windows.Forms.DialogResult.Yes))
            {

                try
                {

                    string CMDD = string.Format("Truncate table PRODUCTOS_AGRICOL");
                    DataSet DS = utilidades.Ejecutar(CMDD);

                    

                }
                catch (Exception ex)
                {
                    MessageBox.Show("Error: " + ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
                actual();

            }
        }

        private void salirToolStripMenuItem_Click(object sender, EventArgs e)
        {
            
         
        }

        private void FormAdmin_FormClosed(object sender, FormClosedEventArgs e)
        {
            
        }

        private void FormAdmin_Move(object sender, EventArgs e)
        {

      

        }

        private void Btn_Calcular_Click(object sender, EventArgs e)
        {
            cerrao = false;

            double itbis, precom, preven, ganan, menositbis;

            
            precom = Convert.ToDouble(Txt_PrecioCompra.Text);
            preven = Convert.ToDouble(Txt_PrecioVenta.Text);

            itbis = (preven * 0.18);

            menositbis = preven - itbis;

            ganan = menositbis - precom;

            Txt_ITBIS.Text = Convert.ToString(itbis);
            Txt_Ganancia.Text = Convert.ToString(ganan);


        }

        private void Txt_PrecioVenta_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (char.IsNumber(e.KeyChar))
            {
                e.Handled = false;
            }
            else if (char.IsControl(e.KeyChar))
            {
                e.Handled = false;
            }
            else if (char.IsSeparator(e.KeyChar))
            {
                e.Handled = false;
            }
            else
            {
                e.Handled = true;
            }
        }

        private void Txt_Nombre_Producto_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (char.IsLetter(e.KeyChar))
            {
                e.Handled = false;
            }
            else if (char.IsControl(e.KeyChar))
            {
                e.Handled = false;
            }
            else if (char.IsSeparator(e.KeyChar))
            {
                e.Handled = false;
            }
            else
            {
                e.Handled = true;
            }
        }

        private void Txt_PrecioCompra_TextChanged(object sender, EventArgs e)
        {

        }

        private void Txt_PrecioVenta_TextChanged(object sender, EventArgs e)
        {

        }

        private void Txt_Total_TextChanged(object sender, EventArgs e)
        {

        }
        
        
   
    }
}
