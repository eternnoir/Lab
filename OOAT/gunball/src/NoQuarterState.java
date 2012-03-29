
public class NoQuarterState implements State {
	statecontroller statecontroller;
	 
    public NoQuarterState(statecontroller statecontroll) {
        this.statecontroller = statecontroll;
    }
 
	public void insertQuarter(int isFake) {
		System.out.println("You inserted a quarter");
		statecontroller.getMachine().isFake=isFake;
		statecontroller.hasquarter();
	}
 
	public void ejectQuarter() {
		System.out.println("You haven't inserted a quarter");
	}
 
	public void turnCrank() {
		System.out.println("You turned, but there's no quarter");
	 }
 
	public void dispense() {
		System.out.println("You need to pay first");
	} 
 
	public String toString() {
		return "waiting for quarter";
	}
}
