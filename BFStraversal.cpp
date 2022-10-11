#include <iostream>
using namespace std;
#define SPACE 10

class TreeNode{
    public:int value;
    TreeNode *left;
    TreeNode *right;

    TreeNode(){
        value=0;
        left=NULL;
        right=NULL;

    }
    TreeNode(int v){
        value=v;
        left=NULL;
        right=NULL;

    }

};

class BST{

    public: TreeNode *root;

    BST(){
        root=NULL;
    }
    bool isEmpty(){

        if(root=NULL)
        return true;
        else
        return false;

    }
    void insertnode(TreeNode *new_node)
    {
        if(root==NULL)
        {
            root=new_node;
            cout<<"Value inserted at root node:"<<endl;
            return;
        }
        else{
            TreeNode *temp=root;
            while(temp!=NULL)
            {
                if(new_node->value<temp->value) 
                {
                    temp=temp->left;
                }
                else if((new_node->value<temp->value) && (temp->left==NULL))
                {
                    temp->left=new_node;
                    break;
                }
                else if ((new_node->value>temp->value) && (temp->right==NULL))
                {
                    temp->right=new_node;
                    break;
                }
                else
                temp=temp->right;
            }
        }
    }

    TreeNode *searchnode(TreeNode *r,int val)
    {
        if(r==NULL)
        return NULL;
        else{
            TreeNode *temp=root;
            while(temp!=NULL)
            {
                if(val==temp->value)
                {
                    cout<<"Value Found :"<<endl;
                    return temp;
                }
                else if (val<temp->value)
                temp=temp->left;
                else
                temp=temp->right;


            }//End of while 
            return NULL;
        }

    }
    void print2D(TreeNode *r,int space)
    {
        if (r==NULL) //Base condition
        return;
        space+=SPACE;  //Increase distance between levels
        print2D(r->right,space);
        cout<<endl;
        for(int i=SPACE;i<space;i++) //Proit current node after space count
        cout<<" ";
        cout<<r->value<<"\n";
        print2D(r->left,space); //Process left child
    }

    int height(TreeNode *r)
    {
        if (r==NULL)
        return -1;
        else{
            // Using recursion to travers Every last node
            int lheight=height(r->left);
            int rheight=height(r->right);
            // Print the greatest one subtree 
            if (lheight>rheight)
            return (lheight+1);
            else
            return (rheight+1);
        }
    }

    void printlevelorderBFS(TreeNode *r)
    {
        int h=height(r);
        for(int i=0;i<=h;i++)
        printGivenlevel(r,i);

        
    }
    void printGivenlevel(TreeNode *r,int level)
    {
        if (r==NULL)
        return ;
        else if(level==0)
        cout<<r->value<<" ";

        else{
            printGivenlevel(r->left,level-1);
            printGivenlevel(r->right,level-1);
        }
    }
};

int main()
{
    int option,val;

    BST obj;

    do{
        cout<<"\nEnter your Choice : Press 0 to exit "<<endl; 
        cout<<"1. Insert Node "<<endl;
        cout<<"2. Search "<<endl;
        cout<<"3. Height "<<endl;
        cout<<"4. printlevelorderBFS"<<endl;
        cout<<"5. Clear Screen "<<endl;

        cin>>option;
        TreeNode *new_node=new TreeNode();

        switch (option)
        {
        case 1: cout<<"Insertion"<<endl;
        cout<<"Enter the value:"<<endl;
        cin>>val;
        new_node->value=val;
        obj.insertnode(new_node);
        break;

        case 2: cout<<"Search "<<endl;
        cout<<"Enter the value to search:"<<endl;
        cin>>val;
        cout<<obj.searchnode(obj.root,val)<<endl;
        break;

        case 3:cout<<"Height:"<<obj.height(obj.root);
        break;

        case 4:obj.printlevelorderBFS(obj.root);
        break;

        case 5: cout<<"Clear Screen :";
        system("cls");
        break;

        case 6: cout<<"Print2D Tree:"<<endl;
            obj.print2D(obj.root,5);
            break;

        
        default:cout<<"Invalid Choice :"<<endl;
            break;
        }

    }while(option!=0);
}