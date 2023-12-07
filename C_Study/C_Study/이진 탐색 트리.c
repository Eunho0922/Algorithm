//#include<stdio.h>
//#include<stdlib.h>
//
//struct Treenode {
//    int data;
//    struct Treenode *left, *right;
//};

//struct Treenode n1 = { 1, NULL, NULL };
//struct Treenode n2 = { 3, NULL, NULL };
//struct Treenode n3 = { 6, NULL, NULL };
//struct Treenode n4 = { 2, &n1, &n2 };
//struct Treenode n5 = { 5, NULL, &n3 };
//struct Treenode n6 = { 4, &n4, &n5 };
//struct Treenode* root;
//
//// 재귀함수 -> 시험은 재귀로
//struct Treenode* search(struct Treenode* node, int key) {
//    if (node == NULL) return NULL;
//    if (key == node->data) return node;
//    else if (key < node->data)
//        return search(node->left, key);
//    else
//        return search(node->right, key);
//}
//
//struct Treenode* new_node(int key) {
//    struct Treenode* new = (struct Treenode*)malloc(sizeof(struct Treenode));
//    new->data = key;
//    new->left = NULL;
//    new->right = NULL;
//    return new;
//}
//
//struct Treenode* insert(struct Treenode* node, int key) {
//    if (node == NULL) return new_node(key);
//    
//    if (node->data > key)
//        node->left = insert(node->left, key);
//    else if (node->data < key)
//        node->right = insert(node->right, key);
//    return node;
//}
//
//void inorder(struct Treenode* node) {
//    if (node != NULL) {
//        inorder(node->left);
//        printf("%d ", node->data);
//        inorder(node->right);
//    }
//}
//struct Treenode* min_value(struct Treenode* node) {
//    while (node->left != NULL) {
//        node = node->left;
//    }
//
//    return node;
//}
//
//struct Treenode* delete(struct Treenode* node, int key) {
//    if (node == NULL) return node;
//    
//    if (node->data > key)
//        node->left = delete(node->left, key);
//    else if (node->data < key)
//        node->right = delete(node->right, key);
//        else {
//            //첫번째나 두번째 경우일 때
//            if (node->left == NULL) {
//                struct Treenode* temp = node->right;
//                free(node);
//                return temp;
//            }
//            else if (node->right == NULL) {
//                struct Treenode* temp = node->left;
//                free(node);
//                return temp;
//            }
//            //세번째 경우일 때
//            struct Treenode* temp = min_value(node->right);
//            node->data = temp->data;
//            node->right = delete(node->right, temp->data);
//        }
//    
//    return node;
//}
//
//// 반복문 알아두기 만
////struct Treenode* search(struct Treenode* node, int key) {
////    while (node != NULL) {
////        if (key == node->data) return node;
////        else if (key < node->data)
////            node = node->left;
////        else
////            node = node->right;
////    }
////    return NULL;
////}
//
//int main(void) {
//    
//    //    int key;
//    //    scanf("%d", &key);
//    
//    root = insert(root, 18);
//    root = insert(root, 7);
//    root = insert(root, 26);
//    root = insert(root, 3);
//    root = insert(root, 12);
//    root = insert(root, 31);
//    root = insert(root, 27);
//
//    inorder(root);
//    printf("\n");
//
//    delete(root, 27);
//    delete(root, 33);
//    delete(root, 26);
//
//    inorder(root);
//    printf("\n");
//    
//    //    if (search(root, key) == NULL) {
//    //        printf("탐색 실패!\n");
//    //    } else {
//    //        printf("%d(은)는 탐색 성공!", key);
//    //    }
//    
//}
//
