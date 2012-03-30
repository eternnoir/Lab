
public class CheckQuarterState implements State  {
	statecontroller statecontroller;
	 
    public CheckQuarterState(statecontroller statecontroll) {
        this.statecontroller = statecontroll;
        
    }
	public void insertQuarter(int isFake)
	{
		System.out.println("Please wait, we're already giving you a Gumball");
	}
	public void ejectQuarter()
	{
		System.out.println("Please wait, we're already giving you a Gumball");
	}
	public void turnCrank()
	{
        if(this.statecontroller.getMachine().isFake == 1)
        {
        	System.out.println("You Insert A Fake Quarter");
        	this.statecontroller.initState();
        }
        else
        {
        	this.statecontroller.checked();
        }
		
	}
	public void dispense()
	{
		//this.statecontroller.dispense();
	}

}
