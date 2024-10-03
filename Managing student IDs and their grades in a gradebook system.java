import java.util.Scanner;
public class Gradebook {
    private String[] studentIDs;
    private double[] grades;
    private int studentCount;

    public Gradebook(int capacity) {
        studentIDs = new String[capacity];
        grades = new double[capacity];
        studentCount = 0;
    } public void addStudent(String studentID, double grade) {
        if (studentCount < studentIDs.length) {
            studentIDs[studentCount] = studentID;
            grades[studentCount] = grade;
            studentCount++;
        } else {
            System.out.println("Gradebook is full. Cannot add more students.");
        }  }
  public void removeStudent(String studentID) {
        for (int i = 0; i < studentCount; i++) {
            if (studentIDs[i].equals(studentID)) {
                for (int j = i; j < studentCount - 1; j++) {
                    studentIDs[j] = studentIDs[j + 1];
                    grades[j] = grades[j + 1];
                }
                studentCount--;
                System.out.println("Student " + studentID + " removed.");
                return;
            } }
        System.out.println("Student " + studentID + " not found.");
    } public void displayStudents() {
        if (studentCount == 0) {
            System.out.println("No students in the gradebook.");
            return;}
        System.out.println("Student IDs and Grades:");
        for (int i = 0; i < studentCount; i++) {
            System.out.println("Student ID: " + studentIDs[i] + ", Grade: " + grades[i]);
        }}  public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Gradebook gradebook = new Gradebook(100);
   while (true) {
            System.out.println("\nGradebook System:");
            System.out.println("1. Add Student");
            System.out.println("2. Remove Student");
            System.out.println("3. Display Students");
            System.out.println("4. Exit");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();
            scanner.nextLine(); // Consume newline
switch (choice) {
                case 1:
                    System.out.print("Enter student ID: ");
                    String studentID = scanner.nextLine();
                    System.out.print("Enter grade: ");
                    double grade = scanner.nextDouble();
                    gradebook.addStudent(studentID, grade);
                    break;
                case 2:
                    System.out.print("Enter student ID to remove: ");
                    studentID = scanner.nextLine();
                    gradebook.removeStudent(studentID);
                    break;
                case 3:
                    gradebook.displayStudents();
                    break;
                case 4:
                    System.out.println("Exiting...");
                    scanner.close();
                    return;
                default:
                    System.out.println("Invalid choice. Please try again.");
            } 
       } 
    }
}
