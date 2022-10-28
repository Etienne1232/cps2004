public class Employee {
    float salary;
    int hoursWorkedPerDay;
    String role;

    public Employee(float salaryIn, int hoursWorkedPerDayIn, String roleIn){
        salary = salaryIn;
        hoursWorkedPerDay = hoursWorkedPerDayIn;
        role = roleIn;
    }

    public void workSmart(){
        if(this.salary < 80000) salary = salary + 20000;
        else salary = salary*2;
        role = "Senior "+role;
    }

    public void workHard(){
        if(hoursWorkedPerDay >= 20) {
            hoursWorkedPerDay = 24;
        }
        else hoursWorkedPerDay += 4;
    }
    public void printInfo(){
        System.out.println("Salary: "+salary);
        System.out.println("Hours Today: "+hoursWorkedPerDay);
        System.out.println("Role: "+role);
    }

    public static void main(String[] args){
        Employee e1 = new Employee(40000,7, "Receptionist");
        e1.workSmart();
        e1.printInfo();
        e1.workHard();
        e1.printInfo();

        Employee e2 = new Employee(90000,7, "Manager");
        e2.workSmart();
        e2.printInfo();
        e2.workHard();
        e2.printInfo();

    }
}
