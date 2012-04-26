
public class line {

 	gate _from_gate;
	gate _to_gate;
	String fromname;
	String toname;
	boolean isevu;
	boolean state;
	String name;
	
	public line(gate g1,gate g2,String n,String f,String t)
	{
		_from_gate = g1 ;
		_to_gate = g2;
		isevu = false;
		state = false;
		fromname = f;
		toname = t;
		name =n;
	}
	
	public boolean getstate()
	{
		return state;
	}
	
	public void changestate(boolean s)
	{
		state = s;
	}
	public String getname()
	{
		return name;
	}
	
	
	
}
