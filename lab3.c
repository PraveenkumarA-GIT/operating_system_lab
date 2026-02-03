class Main {
    public static void main(String[] args) {
        int[] a = {51, 33, 56, 76, 23};
        int n = 5;
        int i, j, t;
         for (i = 1; i < n; i++) {
            t = a[i];
            j = i - 1;

            while (j >= 0 && a[j] > t) {
                a[j + 1] = a[j];
                j--;
            }

            a[j + 1] = t;
             printArray(a);
        }
    }

    static void printArray(int[] a) {
        for (int x : a) {
            System.out.print(x + " ");
        }
        System.out.println();
    }
}
