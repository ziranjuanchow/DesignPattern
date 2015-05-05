

// 简单工厂模式-Static Factory Method

/*
介绍：
	简单工厂模式又被称为静态工厂模式。简单工厂模式是由一个工厂对象决定创建出哪一种产品类的实例。
    简单工厂模式是工厂模式家族中最简单实用的模式，可以理解为是不同工厂模式的一个特殊实现。 
*/


/*
历史背景：
  
*/


/*
思路来源：
	
*/

/*


*/


// __________________________0  __________________________


// __________________________9 代码实现 __________________________
/// .h ===================================================




/// .cpp ===================================================

// 下面这些代码 是C# 的
// __________________________ 01-版本 __________________________
class Program
{

    static void Main(string[] args)
    {
        try
        {
            Console.Write("请输入数字A：");
            string strNumberA = Console.ReadLine();

            Console.Write("请选择运算符号(+,-,*,/):");
            string strOperate = Console.ReadLine();

            Console.Write("请输入数字B：");
            string strNumberB = Console.ReadLine();

            string strResult = "";
            switch(strOperate)
            {
                case "+":
                    strResult = Convert.ToString(Convert.ToDouble(strNumberA)
                        + Convert.ToDouble(strNumberB));
                    break;
                case "-":
                    strResult = Convert.ToString(Convert.ToDouble(strNumberA)
                        - Convert.ToDouble(strNumberB)); 
                    break; 
                case "*":
                    strResult = Convert.ToString(Convert.ToDouble(strNumberA)
                        * Convert.ToDouble(strNumberB)); 
                    break; 
                case "/":
                    if(strNumberB != "0" )
                    strResult = Convert.ToString(Convert.ToDouble(strNumberA)
                        / Convert.ToDouble(strNumberB)); 
                    else
                        strResult = "除数不能为0";
                    break;            
            }
            Console.WriteLine("结果是：" + strResult);
            Console.ReadLine();
        }
        catch(Exception ex)
        {
            Console.WriteLine("您的输入有错" + ex.Message);
        }
    }

};


// __________________________ 02- 业务的封装 版本 __________________________


// Operation 运算类
public class Operation
{
    public static double GetResult(double numberA,double numberB,string operate )
    {
        double result = 0d;
        switch(operate)
        {
            case "+":
                result = numberA + numberB;
                break;
            case "-":
                result = numberA - numberB;
                break; 
            case "*":
                result = numberA * numberB;
                break; 
            case "/":
                if(strNumberB != "0" )
                result = numberA / numberB; 
                else
                    strResult = "除数不能为0";
                break;            
        }
        return result;
    }
};


