
public class circuit implements circuitdecorator {
	
	circuitdecorator cur;
	gate g;
	String gname,type;
	
	public circuit(circuitdecorator c,String s,String name)
	{
		cur = c;
		if(s.equals("AND"))
		{
			g=new andgate(name);
		}
		else if(s.equals("NAND"))
		{
			g=new nandgate(name);
		}
		else if(s.equals("NOT"))
		{
			g=new notgate(name);
		}
		else if(s.equals("OR"))
		{
			g=new orgate(name);
		}
		else if(s.equals("NOR"))
		{
			g=new norgate(name);
		}
		gname = name;
		type = s;
	}


	public void addGate(gate g)
	{
		
	}
	
	public void addLine(line l)
	{
		
	}
	
	public void evaluate()
	{
		g.evaluate();
		cur.evaluate();
	}
	
	public gate searchgate(String s)
	{
		if(this.g.getname().equals(s))
			return g;
		else
			return cur.searchgate(s);
		
	}


	@Override
	public line searchline(String s) {
		// TODO Auto-generated method stub
		return null;
	}


	

	@Override
	public void listgate() {
		System.out.printf(gname);
		System.out.printf("    ");
		System.out.printf(type);
		System.out.printf("\n");
		cur.listgate();
		
	}


	@Override
	public void listline() {
		cur.listline();
		
	}


	@Override
	public void clearall() {
		cur.clearall();
		
	}
	
}
