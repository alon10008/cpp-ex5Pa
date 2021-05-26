#include <iostream>

using namespace std;

namespace ariel{


    template <typename T> class BinaryTree{
        

        public:
            class Node
            {
                public:
                    Node() : left(nullptr), right(nullptr){}
                    Node* left;
                    Node* right;
                    T data;
                    friend ostream& operator<<(ostream& os, Node n) {
                        os << "im a node";
                        return os;
                    }
            };

            class iterator_pre {

                Node *pt;
                public:
                    iterator_pre(Node* pt = nullptr) : pt(pt){}
                    T& operator*() const {
                        
                        return this->pt->data;
                    }
                    T* operator->()const {
                      
                        return &(this->pt->data);
                    }
                    iterator_pre& operator++() {
                    
                        this->pt = this->pt->left;
                        return *this;
                    }
                    const iterator_pre operator++(int) {
                    
                        iterator_pre it = *this;
                        this->pt = this->pt->left;
                        return it;
                    }
                    bool operator==(const iterator_pre& it) const {
                        
                        return this->pt == it.pt;

                    }
                    bool operator!=(const iterator_pre& it) const {
                        
                        return this->pt != it.pt;

                    }


            };
            class iterator_in {
            
                Node *pt;
                public:
                    iterator_in(Node* pt = nullptr) : pt(pt){}
                    T& operator*() const {
                        
                        return this->pt->data;
                    }
                    T* operator->()const {
                      
                        return &(this->pt->data);
                    }
                    iterator_in& operator++() {
                    
                        this->pt = this->pt->left;
                        return *this;
                    }
                    const iterator_in operator++(int) {
                    
                        iterator_in it = *this;
                        this->pt = this->pt->left;
                        return it;
                    }
                    bool operator==(const iterator_in& it) const {
                        
                        return this->pt == it.pt;

                    }
                    bool operator!=(const iterator_in& it) const {
                        
                        return this->pt != it.pt;

                    }    

            };
            class iterator_post {

                Node *pt;
                public:
                    iterator_post(Node* pt = nullptr) : pt(pt){}
                    T& operator*() const {
                        
                        return this->pt->data;
                    }
                    T* operator->()const {
                      
                        return &(this->pt->data);
                    }
                    iterator_post& operator++() {
                    
                        this->pt = this->pt->left;
                        return *this;
                    }
                    const iterator_post operator++(int) {
                    
                        iterator_post it = *this;
                        this->pt = this->pt->left;
                        return it;
                    }
                    bool operator==(const iterator_post& it) const {
                        
                        return this->pt == it.pt;

                    }
                    bool operator!=(const iterator_post& it) const {
                        
                        return this->pt != it.pt;

                    }

            };
            BinaryTree<T>(){this->root = Node();}
            BinaryTree<T> add_root(const T& t){return *this;}
            BinaryTree<T> add_left(const T& exist,const T& t){return *this;}
            BinaryTree<T> add_right(const T& exist,const T& t){return *this;}
            iterator_pre begin(){iterator_pre ip; return ip;}
            iterator_pre end(){iterator_pre ip; return ip;}
            iterator_pre begin_preorder(){iterator_pre ip; return ip;}
            iterator_pre end_preorder(){iterator_pre ip; return ip;}
            iterator_in begin_inorder(){iterator_in ip; return ip;}
            iterator_in end_inorder(){iterator_in ip; return ip;}
            iterator_post begin_postorder(){iterator_post ip; return ip;}
            iterator_post end_postorder(){iterator_post ip; return ip;}
            Node get_root(){return this->root;}
            friend ostream& operator<<(ostream& os, BinaryTree<T> bt){os << "i am a tree";return os;}

        private:
            Node root;
        
            
    
    };
    

}

