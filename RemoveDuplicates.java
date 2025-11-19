import java.util.Scanner;

public class RemoveDuplicates {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int n = sc.nextInt();

        int[] arr = new int[n];

        System.out.println("Enter elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int[] unique = new int[n];
        int index = 0;

        for (int i = 0; i < n; i++) {
            boolean found = false;

            for (int j = 0; j < index; j++) {
                if (arr[i] == unique[j]) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                unique[index] = arr[i];
                index++;
            }
        }

        System.out.println("Array after removing duplicates:");
        for (int i = 0; i < index; i++) {
            System.out.print(unique[i] + " ");
        }
    }
}
