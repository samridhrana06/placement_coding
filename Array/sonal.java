import java.util.Scanner;

public class sonal {
    abstract static class Employee {
        private int salary;
        private String grade;

        void setSalary(int salary) {
            this.salary = salary;
        }

        int getSalary() {
            return this.salary;
        }

        void setGrade(String grade) {
            this.grade = grade;
        }

        String getGrade() {
            return this.grade;
        }

        void label() {
            System.out.println("Employee's data:");
        }
    }

    static class Engineer extends Employee {}

    static class Manager extends Employee {}

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        for(int i=0;i<n;i++){
            String[] input = sc.nextLine().split(" ");
            if(input[0].equalsIgnoreCase("ENGINEER")){
                Engineer e = new Engineer();
                e.setSalary(Integer.parseInt(input[2]));
                e.setGrade(input[1]);
                e.label();
                System.out.println("GRADE : " + e.getGrade());
                System.out.println("SALARY : " + e.getSalary());
            }
            if(input[0].equalsIgnoreCase("MANAGER")){
                Manager e = new Manager();
                e.setSalary(Integer.parseInt(input[2]));
                e.setGrade(input[1]);
                e.label();
                System.out.println("GRADE : " + e.getGrade());
                System.out.println("SALARY : " + e.getSalary());
            }
        }
        sc.close();
    }
}