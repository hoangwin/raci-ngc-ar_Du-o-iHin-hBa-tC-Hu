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

        private void button1_Click(object sender, EventArgs e)
        {
            loadImage(textBoxImageName.Text);
        }

        int pixelPerCell = 0;
        void loadImage(string name)
        {
            Bitmap image1 = (Bitmap)Image.FromFile(name, true);
            System.Console.WriteLine("Width " + image1.Width);
            System.Console.WriteLine("Height "+image1.Height);
            pixelPerCell = (image1.Width - 2) /Int32.Parse(textBoxWidth.Text);
            System.Console.WriteLine("pixelPerCell " + pixelPerCell);
            Color c,cNorth,cEast,cSouth,cWest;
            //chu y luc nao cung phai +1 de loai pixel dau tien ra
           
            //chu y 1/2/4/8
            //North,1
            //East,2
            //South,3
            //West,4
            for (int i = 0;i< Int32.Parse(textBoxHeight.Text);i++)
            {
                System.Console.Write("{");
                for (int j = 0; j < Int32.Parse(textBoxWidth.Text); j++)
                {
                    //pixel o giua
                    int y = 1 + j * pixelPerCell + pixelPerCell / 2;//dien giua cua cell
                    int x = pixelPerCell * i + 1 + pixelPerCell / 2;//diem giua cua cell
                    c = image1.GetPixel(y, x);
                    //neu c = mau do thi co nghia no chinh la duong di
                    if (c.R == Color.Red.R && c.G == Color.Red.G && c.B == Color.Red.B)
                    {//dung udong di
                        //System.Console.WriteLine(i + "," + j + "=" + c);
                    }
                    //          cNorth1
                    //   cWest8          cEast4
                    //           cSouth 2  
                    cNorth = image1.GetPixel(x, y - pixelPerCell / 2);
                    cSouth = image1.GetPixel(x, y + pixelPerCell / 2);
                    cEast = image1.GetPixel(x + pixelPerCell / 2, y);
                    cWest = image1.GetPixel(x - pixelPerCell / 2, y);
                    int direction = 0;
                    //000 -> den
                    //fff ->trang
                    if (cNorth.G == 0)//co mau den
                    {
                        direction += 1;
                    }
                    if (cSouth.G == 0)//co mau den
                    {
                        direction += 1 << 1;
                    }
                    if (cEast.G == 0)//co mau den
                    {
                        direction += 1 << 2;
                    }
                    if (cWest.G == 0)//co mau den
                    {
                        direction += 1 << 3;
                    }
                    if (j < (Int32.Parse(textBoxWidth.Text) - 1))
                        System.Console.Write(direction + ",");
                    else
                        System.Console.Write(direction);

                }
                System.Console.Write("},");
                System.Console.WriteLine();
            }

        }
    }
}
