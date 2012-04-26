
public class output implements circuitdecorator {

	circuitdecorator cur;
	gate g;
	String gname;
	public output(circuitdecorator c)
	{
		gname = "output";
		cur = c;
		g=new andgate("output");
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
		// TODO Auto-generated method stub
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
