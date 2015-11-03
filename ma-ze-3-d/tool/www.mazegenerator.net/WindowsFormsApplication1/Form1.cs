using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        void writefile(int i)
        {
            string Name = textBox1.Text + i.ToString();
            using (System.IO.StreamWriter file =
            new System.IO.StreamWriter(Name + ".cs", true))
            {

                file.WriteLine("using UnityEngine;");
                file.WriteLine("using System.Collections;");

                file.WriteLine("public class " + Name + " : Level");
                file.WriteLine("{");
                file.WriteLine("public override void init()");
                file.WriteLine("{");
                //file.WriteLine("Debug.Log("Init Level 2");
                loadImage(textBoxImageName.Text,file);
                file.WriteLine("}");
                file.WriteLine("}");
            }
        }
        private void button1_Click(object sender, EventArgs e)
        {
            int index = int.Parse(textBoxImageName.Text.Substring(0, textBoxImageName.TextLength -4)); 
            writefile(index);
        }

        int pixelPerCell = 0;
        void loadImage(string name, System.IO.StreamWriter file)
        {
            Bitmap image1 = (Bitmap)Image.FromFile(name, true);          
            System.Console.WriteLine("Width " + image1.Width);
            System.Console.WriteLine("Height " + image1.Height);
            pixelPerCell = (image1.Width - 2) / Int32.Parse(textBoxWidth.Text);
            System.Console.WriteLine("pixelPerCell " + pixelPerCell);
            Color c, cNorth, cEast, cSouth, cWest;
            //chu y luc nao cung phai +1 de loai pixel dau tien ra

            /*
            new IntVector2(0, 1),//south      
		    new IntVector2(1, 0),//west
		    new IntVector2(0, -1),//north
		    new IntVector2(-1, 0)//east
            */
            List<Point> listHint = new List<Point>();
            file.WriteLine("array2D = new int[,] {");
            
            System.Console.WriteLine("array2D = new int[,] {");

            for (int i = 0; i < Int32.Parse(textBoxHeight.Text); i++)
            {
                System.Console.Write("{");
                file.Write("{");
                for (int j = 0; j < Int32.Parse(textBoxWidth.Text); j++)
                {
                    //pixel o giua
                    int y = 1 + i * pixelPerCell + pixelPerCell / 2;//dien giua cua cell
                    int x = pixelPerCell * j + 1 + pixelPerCell / 2;//diem giua cua cell
                    c = image1.GetPixel(x, y);
                    //neu c = mau do thi co nghia no chinh la duong di
                    if (c.R == Color.Red.R && c.G == Color.Red.G && c.B == Color.Red.B)
                    {//dung duong di
                     //  System.Console.WriteLine(i + "," + j + "=" + c);
                        listHint.Add(new Point(i, j));
                    }
                    //          cNorth1
                    //   cWest8          cEast2
                    //           cSouth4  
                    cNorth = image1.GetPixel(x, y - pixelPerCell / 2);
                    cSouth = image1.GetPixel(x, y + pixelPerCell / 2);
                    cEast = image1.GetPixel(x + pixelPerCell / 2, y);
                    cWest = image1.GetPixel(x - pixelPerCell / 2, y);
                    int direction = 0;
                    //000 -> den
                    //fff ->trang
                    if (cNorth.R == 0)//co mau den
                    {
                        direction += 1 << 0;
                    }
                    if (cSouth.R == 0)//co mau den
                    {
                        direction += 1 << 2;
                    }
                    if (cEast.R == 0)//co mau den
                    {
                        direction += 1 << 1;
                    }
                    if (cWest.R == 0)//co mau den
                    {
                        direction += 1 << 3;
                    }
                    if (j < (Int32.Parse(textBoxWidth.Text) - 1))
                    {
                        System.Console.Write(direction + ",");
                        file.Write(direction + ",");
                    }
                    else
                    {
                        System.Console.Write(direction);
                        file.Write(direction);
                    }
                }
                System.Console.WriteLine("},");
                file.WriteLine("},");
            }
            System.Console.WriteLine("};");
            file.WriteLine("};");

            //tim begin end


            for (int j = 0; j < Int32.Parse(textBoxWidth.Text); j++)
                {
                    int y = image1.Height;
                    int x = pixelPerCell * j + 1 + pixelPerCell / 2;
                
                Color c1 = image1.GetPixel(x, 0);
                Color c2 = image1.GetPixel(x, y-1);
                if (c1.R == Color.Red.R && c1.G == Color.Red.G && c1.B == Color.Red.B)
                {//dung duong di End

                    System.Console.WriteLine("POS_END = new Vector2(" + j+"," + 0 +");");
                    file.WriteLine("POS_END = new Vector2(" + j + "," + 0 + ");");
                }

                if (c2.R == Color.Red.R && c2.G == Color.Red.G && c2.B == Color.Red.B)
                {//dung duong di End

                    System.Console.WriteLine("POS_BEGIN= new Vector2(" + j + "," + (Int32.Parse(textBoxWidth.Text) -1) + ");");
                    file.WriteLine("POS_BEGIN= new Vector2(" + j + "," + (Int32.Parse(textBoxWidth.Text) - 1) + ");");
                }
            }

            for (int i = 0; i < listHint.Count; i++)
            {
                System.Console.Write("," + listHint[i].X + "," + listHint[i].Y);
                if (i == 0)
                    file.Write("HintArray = new int[] {"+ listHint[i].X + "," + listHint[i].Y); 
                else
                    file.Write("," + listHint[i].X + "," + listHint[i].Y);
            }
            file.WriteLine("};");
            file.WriteLine("WIDTH = array2D.GetLength(1);");
            file.WriteLine("HEIGHT = array2D.GetLength(0);");
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBoxWidth_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
