
public class notgate implements gate {

	line input1;
	line output;
	String name;
	
	public notgate(String n)
	{
		input1 = null;
		name = n;
		
	}
	
	public void addInputLine(line l,String port)
	{
		input1=l;
	}
	
	public line getOutputLine()
	{
		return output;
	}
	
	public void setOutputLine(line ol)
	{
		output = ol;
	}
	
	public void evaluate()
	{
		if(check() == true)
		{
			output.isevu = true;
			output.changestate(!input1.getstate());
		}
		else
		{
			output.isevu = false;
		}
		
	}
	
	
	public boolean check()
	{
		if( (input1.isevu == false))
			return false;
		else
			return true;
	
	}
	
	public String getname()
	{
		return name;
	}
}