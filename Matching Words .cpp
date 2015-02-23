#include <iostream>
#include <iomanip>
#include <string>
class Node
{
    public:
        Node(std::string word,int counter=1)
            {
                this->word=word;
                this->counter=counter;
                this->left=NULL;
                this->right=NULL;
            }
        std::string getWord()
            {
                return this->word;
            }
        void incCounter()
            {
                this->counter+=1;
            }
        int getCounter()
            {
                return this->counter;
            }
        
        
        Node *left;
        Node *right;
    private:
        std::string word;
        int counter;
        
};
class Tree
{    
    public:
        
        Tree():root(NULL){};
        void addNode(std::string);
        void addNode(std::string,Node*);
        Node* findNode();
        int checkWord(std::string,std::string);
        void inorder(Node *root);
    private:
        Node *root;
        
    
};
void Tree::addNode(std::string word)
{
    if(root)
        addNode(word,root);
    else
        root=new Node{word};
}
void Tree::addNode(std::string word,Node *tmp)
{
    
    int checker=checkWord(word,tmp->getWord());
    if(word==tmp->getWord())
    {
        tmp->incCounter();
    }
    else if(checker==-1)
    {
        if(!tmp->left)
            tmp->left=new Node{word};
        else
            addNode(word,tmp->left);
    }
    else if(checker==1)
    {
        if(!tmp->right)
            tmp->right=new Node{word};
        else
            addNode(word,tmp->right);
    }
    
}
Node* Tree::findNode()
{
    return root;
}
int Tree::checkWord(std::string rootWord,std::string word)
{
    while(rootWord.length()<3)
        {
            rootWord+=" ";
        }
    while(word.length()<3)
        {
            word+=" ";
        }
    
    if(rootWord[0]>word[0])
        return 1;
    if(rootWord[0]<word[0])
        return -1;
    if(rootWord[1]>word[1])
        return 1;
    if(rootWord[1]<word[1])
        return -1;
    if(rootWord[2]>word[2])
        return 1;
    if(rootWord[2]<word[2])
        return -1;

    return 0;
}
void Tree::inorder(Node *root)
{
    if(root)
        {
        
        inorder(root->left);
        if(root->getCounter()>1)
            std::cout<<root->getWord()<<" ";
        inorder(root->right);
        }
}
int main()
{

Tree Btree{};
char end;
std::string input;

while(end!='\n')
{
    std::cin>>input;
    Btree.addNode(input);
    std::cin.get(end);
}
    
    Node *root=Btree.findNode();
    Btree.inorder(root);
    
    return 0;
}

