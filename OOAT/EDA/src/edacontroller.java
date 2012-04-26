
public class edacontroller {
	
	//static String[] commands;
	static circuitdecorator simplecorrentcircuit;
	static circuitdecorator correntcircuit;
	static line output;
	static String name;
	
	public edacontroller()
	{
		simplecorrentcircuit =null;
		correntcircuit = null;
		name="";
	}
	public String getedaname()
	{
		return name;
	}
	
	public void delete()
	{
		name="";
	}
	
	
	public void create(String[] c)
	{
		correntcircuit=new simplecircuit(c[2]);
		simplecorrentcircuit = correntcircuit;
		correntcircuit = new input(correntcircuit);
		correntcircuit = new output(correntcircuit);
		name = c[2];
	}
	
	public void addline(String[] c)
	{
		gate gate1 = correntcircuit.searchgate(c[4]);
		gate gate2 = correntcircuit.searchgate(c[7]);
		line l = new line (gate1,gate2,c[2],c[5],c[8]);
		gate1.setOutputLine(l);
		gate2.addInputLine(l, c[8]);
		simplecorrentcircuit.addLine(l);
		if(c[7].equals("output"))
		{
			output=l;
		}
	}
	
	public void addgate(String[] c)
	{
		correntcircuit = new circuit(correntcircuit,c[2],c[3]);
	}
	
	public void getlist()
	{
		System.out.printf("Gate information: \n");
		correntcircuit.listgate();
		System.out.printf("Line information: \n");
		correntcircuit.listline();
	}
	public void evaluate(String[] c)
	{
		correntcircuit.clearall();
		for(int i=1;i<c.length;)
		{
			line l1 = searchline(c[i]);
			l1.isevu=true;
			if(c[i+1].equals("1"))
				l1.changestate(true);
			else
				l1.changestate(false);
			i = i+2;
		}
		
		while(true)
		{
			correntcircuit.evaluate();
			if(output.isevu == true)
				break;
		}
		System.out.printf("Circuit eda output are:");
		System.out.printf(output.getname());
		if(output.state == true)
			System.out.printf(" 1\n");
		else
			System.out.printf(" 0\n");
		
		
	}
	
	public line searchline(String name)
	{
		
		return simplecorrentcircuit.searchline(name);
		
	}
}
