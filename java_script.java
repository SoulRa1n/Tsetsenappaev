import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>();

        // Добавление элементов
        list.add(1);
        list.add(2);
        list.add(3);

        // Вставка элемента по индексу
        list.add(1, 10);

        // Удаление по значению
        list.remove(Integer.valueOf(2));

        // Удаление по индексу
        list.remove(0);
        }

        // Размер списка
        int size = list.size();

        System.out.println("Обновленный список: " + list);
        System.out.println("Размер списка: " + size);
    }
}
