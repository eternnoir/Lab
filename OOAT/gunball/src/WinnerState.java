
public class WinnerState implements State {
	statecontroller statecontroller;
	 
    public WinnerState(statecontroller statecontroll) {
        this.statecontroller = statecontroll;
    }
 
	public void insertQuarter(int isFake) {
		System.out.println("Please wait, we're already giving you a Gumball");
	}
 
	public void ejectQuarter() {
		System.out.println("Please wait, we're already giving you a Gumball");
	}
 
	public void turnCrank() {
		System.out.println("Turning again doesn't get you another gumball!");
	}
 
	public void dispense() {
		System.out.println("YOU'RE A WINNER! You get two gumballs for your quarter");
		statecontroller.getMachine().releaseBall();
		if (statecontroller.getMachine().getCount() == 0) {
			statecontroller.issoldout();
		} else {
			statecontroller.getMachine().releaseBall();
			if (statecontroller.getMachine().getCount() > 0) {
				statecontroller.initState();
			} else {
            	System.out.println("Oops, out of gumballs!");
            	statecontroller.issoldout();
			}
		}
	}
 
	public String toString() {
		return "despensing two gumballs for your quarter, because YOU'RE A WINNER!";
	}
}
