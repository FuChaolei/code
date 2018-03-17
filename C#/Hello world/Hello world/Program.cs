using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Hello_world
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello,world!中文");
            int num = 36;
            Console.WriteLine("这是一个数：{0}", num);
            string name;
            Console.Write("请输入你的姓名：");
            name = Console.ReadLine();
            Console.WriteLine("hello,{0}!", name);
        }
    }
}
