
public class Myclass {
int x;
int y;
public Myclass()
{
	System.out.println("without arguments");
}
public Myclass(int a)
{
	x=a;
	System.out.println("with one argument "+x);
}
public Myclass(int a,int b)
{
	x=a;
	y=b;
	System.out.println("with two arguments "+x +" "+y);
}
public static void main(String [] args)
{
	Myclass obj1=new Myclass();
			Myclass obj2=new Myclass(5);
			Myclass obj3=new Myclass(5,5);
			
}
}
