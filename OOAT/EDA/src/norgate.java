
public class norgate implements gate {

	line input1;
	line input2;
	line output;
	String name;
	
	public norgate(String n)
	{
		input1 = null;
		input2 = null;
		name = n;
		
	}
	
	public void addInputLine(line l,String port)
	{
		if(port.equals("i1"))
			input1=l;
		else
			input2=l;
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
			output.changestate(!(input1.getstate()|input2.getstate()));
		}
		else
		{
			output.isevu = false;
		}
		
	}
	
	
	public boolean check()
	{
		if( (input1.isevu == false) || (input2.isevu == false))
			return false;
		else
			return true;
	
	}
	
	public String getname()
	{
		return name;
	}
}
