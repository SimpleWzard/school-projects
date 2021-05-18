using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data;
using System.Data.SqlClient;

namespace Login_Cnumeral
{
    public class utilidades
    {
        public static DataSet Ejecutar(string cmd)
        {
            SqlConnection conex = new SqlConnection("Data Source=.;Initial Catalog=master;Integrated Security=True");
            conex.Open();

            DataSet DS = new DataSet();
            SqlDataAdapter DP = new SqlDataAdapter(cmd, conex);

            DP.Fill(DS);

            conex.Close();

            return DS;
            
        }
  



    }
}
