
public interface gate {
	
	public void addInputLine(line l,String port);
	
	public line getOutputLine();

	public void setOutputLine(line ol);
	
	public void evaluate();
	
	public boolean check();
	
	public String getname();
	
}
