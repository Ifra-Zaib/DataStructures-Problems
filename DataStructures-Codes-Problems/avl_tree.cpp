//#include<iostream>
//#include<string>
//using namespace std;
//
//struct node {
//    int data;
//    int height;
//    node* left;
//    node* right;
//
//    node(int d) : data(d), height(1), left(nullptr), right(nullptr) {}
//};
//
//class AVL {
//public:
//    AVL() {}
//
//    int getHeight(node* root) {
//        if (root)
//            return root->height;
//        else
//            return 0;
//    }
//
//    int getBalance(node* root) {
//        if (root)
//            return getHeight(root->left) - getHeight(root->right);
//        else
//            return 0;
//    }
//
//    node* leftRotate(node* y) {
//        node* x = y->right;
//        node* T2 = x->left;
//
//        x->left = y;
//        y->right = T2;
//
//        y->height = 1 + max(getHeight(y->left), getHeight(y->right));
//        x->height = 1 + max(getHeight(x->left), getHeight(x->right));
//
//        return x;
//    }
//
//    node* rightRotate(node* x) {
//        node* y = x->left;
//        node* T2 = y->right;
//
//        y->right = x;
//        x->left = T2;
//
//        x->height = 1 + max(getHeight(x->left), getHeight(x->right));
//        y->height = 1 + max(getHeight(y->left), getHeight(y->right));
//
//        return y;
//    }
//
//    node* insert(node* root, int val) {
//        if (!root)
//            return new node(val);
//
//        if (val < root->data)
//            root->left = insert(root->left, val);
//        else if (val > root->data)
//            root->right = insert(root->right, val);
//        else
//            return root;
//
//        root->height = 1 + max(getHeight(root->left), getHeight(root->right));
//
//        int balance = getBalance(root);
//
//        if (balance > 1 && val < root->left->data)
//            return rightRotate(root);
//        if (balance < -1 && val > root->right->data)
//            return leftRotate(root);
//        if (balance > 1 && val > root->left->data) {
//            root->left = leftRotate(root->left);
//            return rightRotate(root);
//        }
//        if (balance < -1 && val < root->right->data) {
//            root->right = rightRotate(root->right);
//            return leftRotate(root);
//        }
//
//        return root;
//    }
//
//    void inorder(node* root) {
//        if (!root)
//            return;
//        inorder(root->left);
//        cout << root->data << endl;
//        inorder(root->right);
//    }
//
//    node* deleteNode(node* root, int val) {
//        if (!root)
//            return root;
//
//        if (val < root->data)
//            root->left = deleteNode(root->left, val);
//        else if (val > root->data)
//            root->right = deleteNode(root->right, val);
//        else {
//            if (!root->left || !root->right) {
//                node* temp = root->left ? root->left : root->right;
//
//                if (!temp) {
//                    temp = root;
//                    root = nullptr;
//                }
//                else
//                    *root = *temp;
//
//                delete temp;
//            }
//            else {
//                node* temp = root->right;
//                while (temp->left)
//                    temp = temp->left;
//
//                root->data = temp->data;
//                root->right = deleteNode(root->right, temp->data);
//            }
//        }
//
//        if (!root)
//            return root;
//
//        root->height = 1 + max(getHeight(root->left), getHeight(root->right));
//
//        int balance = getBalance(root);
//
//        if (balance > 1 && getBalance(root->left) >= 0)
//            return rightRotate(root);
//        if (balance > 1 && getBalance(root->left) < 0) {
//            root->left = leftRotate(root->left);
//            return rightRotate(root);
//        }
//        if (balance < -1 && getBalance(root->right) <= 0)
//            return leftRotate(root);
//        if (balance < -1 && getBalance(root->right) > 0) {
//            root->right = rightRotate(root->right);
//            return leftRotate(root);
//        }
//
//        return root;
//    }
//};
//
//int main() {
//    AVL obj1;
//    node* root = nullptr;
//
//    root = obj1.insert(root, 14);
//    root = obj1.insert(root, 13);
//
//    cout << "Inorder Traversal after insertion:" << endl;
//    obj1.inorder(root);
//
//    root = obj1.deleteNode(root, 13);
//
//    cout << "Inorder Traversal after deletion:" << endl;
//    obj1.inorder(root);
//
//    return 0;
//}
