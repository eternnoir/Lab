

public interface circuitdecorator {
	
	public void addGate(gate g);
	
	public void addLine(line l);
	
	public void evaluate();
	
	public gate searchgate(String s);
	public line searchline(String s);
	public void listgate();
	public void listline();
	public void clearall();

}
