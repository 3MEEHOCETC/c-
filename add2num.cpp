#include <iostream>

//определение структуры узла односвязного списка
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode( int x, ListNode* next) : val(x), next(next) {}
    };

    class Solution {
        public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode dummyHead(0); //узел упрощения логики
            ListNode* curr = &dummyHead;
            int carry = 0; //перенос разряда (1 или 0)

            while (l1 != nullptr || l2 != nullptr || carry !=0) {
                //если один из списков короче, подставляем 0
                int x = (l1 != nullptr) ? l1->val : 0;
                int y = (l2 != nullptr) ? l2->val : 0;

                int sum = carry + x +  y;
                carry = sum / 10; //целочисленное деление дает нам перенос

                //создаем новый узел с остатком от деления а 10
                curr->next = new ListNode(sum % 10);
                curr = curr->next;

                //переходим к следующим узлам если они есть
                if (l1 != nullptr) l1 = l1->next;
                if (l2 != nullptr) l2 = l2->next;
                        }
        return dummyHead.next;
                    }
    };

    //вспомогательная функция для вывода списка в консоль
    void printList(ListNode* node) {
        while (node != nullptr) {
            std::cout << node->val << (node->next ? " -> " : "");
            node = node->next;
        }
        std::cout << std::endl;
    }

    int main() {
        //число 342: ( 2 -> 4 -> 3)
        ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));

        //число 465: (5 -> 6 -> 4)
        ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));

        Solution solution;
        ListNode* result = solution.addTwoNumbers(l1, l2);

        std::cout << "Результат сложения: ";
        printList(result); //ожидаемый вывод: 7 -> 0 -> 8 (807)
        return 0;
    }
    
