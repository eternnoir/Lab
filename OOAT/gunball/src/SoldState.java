
public class SoldState implements State {
	statecontroller statecontroller;
	 
    public SoldState(statecontroller statecontroll) {
        this.statecontroller = statecontroll;
    }
	public void insertQuarter(int isFake) {
		System.out.println("Please wait, we're already giving you a gumball");
	}
 
	public void ejectQuarter() {
		System.out.println("Sorry, you already turned the crank");
	}
 
	public void turnCrank() {
		System.out.println("Turning twice doesn't get you another gumball!");
	}
 
	public void dispense() {
		statecontroller.getMachine().releaseBall();
		if (statecontroller.getMachine().getCount() > 0) {
			statecontroller.initState();
		} else {
			System.out.println("Oops, out of gumballs!");
			statecontroller.issoldout();
		}
	}
 
	public String toString() {
		return "dispensing a gumball";
	}
}
