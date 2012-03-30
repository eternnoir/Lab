

public class statecontroller implements State {
	GumballMachine gunballmachine;
	
	State currentstate;
	State soldOutState;
	State noQuarterState;
	State hasQuarterState;
	State soldState;
	State winnerState;
	State checkState;
	
	public statecontroller (GumballMachine g)
	{
		soldOutState = new SoldOutState(this);
		noQuarterState = new NoQuarterState(this);
		hasQuarterState = new HasQuarterState(this);
		soldState = new SoldState(this);
		winnerState = new WinnerState(this);
		checkState = new CheckQuarterState(this);
		
		this.gunballmachine = g;
		
		currentstate = noQuarterState;
		
	}

	
	public void insertQuarter(int isFake)
	{
		currentstate.insertQuarter(isFake);
	}
	public void ejectQuarter()
	{
		currentstate.ejectQuarter();
	}
	public void turnCrank()
	{
		currentstate.turnCrank();
	}
	public void dispense()
	{
		currentstate.turnCrank();
		currentstate.dispense();
	}
    public GumballMachine getMachine()
    {
    	return this.gunballmachine;
    }
	
 // State TRANS
    public void initState()
    {
    	currentstate = noQuarterState;
    }
    
    public void hasquarter()
    {
    	currentstate = hasQuarterState;
    }
    
    public void trunCranked()
    {
    	currentstate = checkState;
    }
    
    public void issoldout()
    {
    	currentstate = soldOutState;
    }
    
    public void checked()
    {
    	currentstate = soldState;
    }   

}
