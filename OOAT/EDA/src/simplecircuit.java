import java.util.*;


public class simplecircuit implements circuitdecorator {

	String name;
	List<line> linelist = new ArrayList<line>();
	
	
	
	public simplecircuit(String n)
	{
		name = n;
		
		
		
	}
	
	public void addGate(gate g)
	{
		
	}
	
	public void addLine(line l)
	{
		linelist.add(l);
	}
	
	public void evaluate()
	{
		
	}

	@Override
	public gate searchgate(String s) {
		// TODO Auto-generated method stub
		return null;
	}
	
	public line searchline(String name)
	{
		for(int i=0;i<linelist.size();i++)
		{
			if(linelist.get(i).getname().equals(name))
				return linelist.get(i);
		}
		return null;
	}

	

	@Override
	public void listgate() {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void listline() {
		for(int i=0;i<linelist.size();i++)
		{
			System.out.printf("LINE ");
			System.out.printf(linelist.get(i).getname());
			System.out.printf(" :");
			System.out.printf(linelist.get(i)._from_gate.getname());
			System.out.printf(".");
			System.out.printf(linelist.get(i).fromname);
			System.out.printf("  ");
			System.out.printf(linelist.get(i)._to_gate.getname());
			System.out.printf(".");
			System.out.printf(linelist.get(i).toname);
			System.out.printf("\n");
			
			
		}
		
	}

	@Override
	public void clearall() {
		for(int i=0;i<linelist.size();i++)
		{
			linelist.get(i).isevu = false;
		}
		
	}
}
