
public class SoldOutState implements State {
	statecontroller statecontroller;
 
    public SoldOutState(statecontroller statecontroll) {
        this.statecontroller = statecontroll;
    }
 
	public void insertQuarter(int isFake) {
		System.out.println("You can't insert a quarter, the machine is sold out");
	}
 
	public void ejectQuarter() {
		System.out.println("You can't eject, you haven't inserted a quarter yet");
	}
 
	public void turnCrank() {
		System.out.println("You turned, but there are no gumballs");
	}
 
	public void dispense() {
		System.out.println("No gumball dispensed");
	}
 
	public String toString() {
		return "sold out";
	}
}
