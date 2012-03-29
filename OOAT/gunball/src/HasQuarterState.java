
import java.util.Random;

public class HasQuarterState implements State {
	Random randomWinner = new Random(System.currentTimeMillis());
	statecontroller statecontroller;

	 
    public HasQuarterState(statecontroller statecontroll) {
        this.statecontroller = statecontroll;
    }
  
	public void insertQuarter(int isFake) {
		System.out.println("You can't insert another quarter");
	}
 
	public void ejectQuarter() {
		System.out.println("Quarter returned");
		statecontroller.hasquarter();
	}
 
	public void turnCrank() {
		System.out.println("You turned...");
		statecontroller.trunCranked();
/*		
		int winner = randomWinner.nextInt(10);

		if ((winner == 0) && (statecontroller.gunballmachine.getCount() > 1)) {
			statecontroller.setState(statecontroller.getWinnerState());
		} else {
			statecontroller.setState(statecontroller.getSoldState());
		}
*/
	}

    public void dispense() {
        System.out.println("No gumball dispensed");
    }
 
	public String toString() {
		return "waiting for turn of crank";
	}
}
