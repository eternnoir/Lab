
public class input implements circuitdecorator {

	
	
	circuitdecorator cur;
	gate g;
	String gname;
	public input(circuitdecorator c)
	{
		gname = "input";
		cur = c;
		g=new andgate("input");
	}
	
	public void addGate(gate g) {
		// TODO Auto-generated method stub

	}

	@Override
	public void addLine(line l) {
		// TODO Auto-generated method stub

	}

	@Override
	public void evaluate() {
		cur.evaluate();

	}

	@Override
	public gate searchgate(String s) {
		if(this.g.getname().equals(s))
			return g;
		else
			return cur.searchgate(s);
	}

	@Override
	public line searchline(String s) {
		// TODO Auto-generated method stub
		return cur.searchline(s);
	}

	@Override
	public void listgate() {
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
