

public class GumballMachine {
 	statecontroller statecontroller;
 
	int count = 0;
	int isFake = 0;
 
	public GumballMachine(int numberGumballs) {
		
		this.count = numberGumballs;
		statecontroller = new statecontroller(this);
	}
 
	public void insertQuarter(int isFake) {
		statecontroller.insertQuarter(isFake);
	}
 
	public void ejectQuarter() {
		statecontroller.ejectQuarter();
	}
 
	public void turnCrank() {
		statecontroller.turnCrank();
		statecontroller.dispense();
	}


	void releaseBall() {
		System.out.println("A gumball comes rolling out the slot...");
		if (count != 0) {
			count = count - 1;
		}
	}
 
	int getCount() {
		return count;
	}
 


	public String toString() {
		StringBuffer result = new StringBuffer();
		result.append("\nMighty Gumball, Can Use Fake Quarter.");
		result.append("\nInventory: " + count + " gumball");
		if (count != 1) {
			result.append("s");
		}
		result.append("\n");
		return result.toString();
	}
}
