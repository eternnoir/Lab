

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
		currentstate.dispense();
	}
	//set state function
	public void setState(State state)
	{
		currentstate = state;
	}
	public State getState() 
	{
	    return currentstate;
	}

	public State getSoldOutState() 
	{
		return soldOutState;
	 }

    public State getNoQuarterState() 
    {
        return noQuarterState;
    }

    public State getHasQuarterState() 
    {
        return hasQuarterState;
    }

    public State getSoldState() 
    {
        return soldState;
    }

    public State getWinnerState() 
    {
        return winnerState;
    }
    
    public State getCheckState()
    {
    	return checkState;
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
    
    public void checked()
    {
    	currentstate = soldState;
    }
    
    

}
