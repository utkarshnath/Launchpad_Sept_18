#include<iostream>
#include<queue>
using namespace std;
struct node{
    int data;
    node * left;
    node * right;
    int depth;
    node(int data){
        this->data = data;
        left = right = NULL;
    }
};
node * createBtree(){
    cout<<"Enter data and -1 if empty "<<endl;
    int data;
    cin>>data;
    node * root;
    if(data!=-1){
      root = new node(data);
    }
    queue<node * >q;
    q.push(root);
    while(!q.empty()){
        node * top = q.front();
        q.pop();
        cout<<"enter left data for "<< top->data<<" and -1 if empty"<<endl;
        cin>>data;
        if(data!=-1){
            node * left = new node(data);
            top->left = left;
            q.push(left);
        }
        cout<<"enter right data for "<< top->data<<" and -1 if empty"<<endl;
        cin>>data;
        if(data!=-1){
            node * right = new node(data);
            top->right = right;
            q.push(right);
        }
    }
    return root;
}
void preorder(node * root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    return;
}
void postorder(node * root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    return;
}
void inorder(node * root){
    if(root==NULL){
            return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    return;
}
void levelorder(node * root){
    queue<node *>q;
    if(root){
        q.push(root);
    }
    while(!q.empty()){
        node * top = q.front();
        cout<<top->data<<" ";
        q.pop();
        if(top->left){
           q.push(top->left);
        }
        if(top->right){
            q.push(top->right);
        }
    }
}
int nodeCount(node * root){
    if(root==NULL){
        return 0;
    }
    int left = nodeCount(root->left);
    int right = nodeCount(root->right);
    return left+right+1;
}
int max(int a ,int b){
    if(a>b){
        return a;
    }
    return b;
}
int largestNode(node * root){
    if(root==NULL){
        return INT_MIN;
    }
    int left = largestNode(root->left);
    int right = largestNode(root->right);
    int m = max(left,right);
    return max(m,root->data);
}

int countGreater(node * root,int x){
    if(root==NULL){
        return 0;
    }
    int left = countGreater(root->left,x);
    int right = countGreater(root->right,x);
    if(root->data > x){
        return left+right+1;
    }
    return left+right;
}
pair<node *,int> maxPair(pair<node *,int> a,pair<node *,int> b){
    if(a.second > b.second){
        return a;
    }else{
        return b;
    }
}
pair<node *,int> maxGroup(node * root){
    if(root==NULL){
        pair<node *,int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }
    pair<node *,int> left = maxGroup(root->left);
    pair<node *,int> right = maxGroup(root->right);
    pair<node *,int> max = maxPair(left,right);
    int grp = root->data;
    if(root->left){
        grp+=root->left->data;
    }
    if(root->right){
        grp+=root->right->data;
    }
    if(grp>max.second){
        pair<node *,int> p;
        p.first = root;
        p.second = grp;
        return p;
    }
    return max;
}
node * maxGroup1(node * root){
    if(root==NULL){
        return NULL;
    }
    node * left = maxGroup1(root->left);
    node * right = maxGroup1(root->right);
    int grpl = left->data;
    if(left->left){
        grpl+=left->left->data;
    }
    if(left->right){
        grpl+=left->right->data;
    }
    int grpr = right->data;
    if(left->left){
        grpr+=right->left->data;
    }
    if(left->right){
        grpr+=right->right->data;
    }
    int grp = root->data;
    if(root->left){
        grp+=root->left->data;
    }
    if(root->right){
        grp+=root->right->data;
    }
    if(grpl>grpr){
        if(grpl>grp){
            return left;
        }else{
            return root;
        }
    }else{
        if(grpr>grp){
            return right;
        }else{
            return root;
        }
    }
}
int degree(node * root){
    int c = 0;
    if(root->left){
        c++;
    }
    if(root->right){
        c++;
    }
    return c;
}

void populate(node * root,int d){
    if(root==NULL){
        return;
    }
    root->depth = d;
    populate(root->left,d+1);
    populate(root->right,d+1);
    return;
}
void printAtDepthK(node * root,int k){
    queue<node *>q1;
    queue<node *>q2;
    q1.push(root);
    while(k--){
        if(q1.empty()){
            while(!q2.empty()){
                node * top = q2.front();
                if(top->left){
                    q1.push(top->left);
                }
                if(top->right){
                    q1.push(top->right);
                }
                q2.pop();
            }
        }else{
             while(!q1.empty()){
                node * top = q1.front();
                if(q1.front()->left){
                    q2.push(q1.front()->left);
                }
                if(top->right){
                    q2.push(top->right);
                }
                q1.pop();
            }
        }
    }
    while(!q1.empty()){
        cout<<q1.front()->data<<" ";
        q1.pop();
    }
    while(!q2.empty()){
        cout<<q2.front()->data<<" ";
        q2.pop();
    }
}
int height(node * root){
    if(!root){
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    return max(left,right)+1;
}
int diameter(node * root){
    if(root==NULL){
        return 0;
    }
    int l = diameter(root->left);
    int r = diameter(root->right);
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh+rh+1,max(l,r));
}
pair<int,int> fastDiameter(node * root){
    if(!root){
        pair<int,int >p;
        p.first = p.second = 0;
        return p;
    }
    pair<int,int >l = fastDiameter(root->left);
    pair<int,int >r = fastDiameter(root->right);
    pair<int,int>p;
    p.first = max(l.second+r.second+1,max(l.first,r.first));
    p.second = max(l.second,r.second)+1;
    return p;
}
bool findNode(node * root,int data){
    if(!root){
        return false;
    }
    if(root->data==data){
        return true;
    }
    bool l = findNode(root->left,data);
    bool r = findNode(root->right,data);
    return l || r;

}
node * mirror(node * root){
    if(!root){
        return NULL;
    }
    node * temp = new node(root->data);
    temp->right = mirror(root->left);
    temp->left = mirror(root->right);
    return temp;
}
int find(vector<int>v,int s,int e,int d){
    for(int i=s;i<=e;i++){
        if(v[i]==d){
            return i;
        }
    }
    return -1;
}
node * treeFromPreAndIn(vector<int>pre,int pstart,int pend,vector<int>in,int istart,int iend){
    if(pstart>pend){
        return NULL;
    }
    int rootData = pre[pstart];
    int index = find(in,istart,iend,rootData);
    int l = index - istart;
    int r = iend - index;
    node * root = new node(rootData);
    root->left = treeFromPreAndIn(pre,pstart+1,pstart+l,in,istart,index-1);
    root->right = treeFromPreAndIn(pre,pstart+l+1,pend,in,index+1,iend);
    return root;
}
// 1 2 3 4 6 5 -1 -1 -1 7 8 -1 -1 -1 -1 -1 -1
int main(){
/*
node * root = createBtree();
preorder(root);
cout<<endl;
postorder(root);
cout<<endl;
inorder(root);
cout<<endl;
levelorder(root);
cout<<endl;
cout<<nodeCount(root)<<endl;
cout<<largestNode(root)<<endl;
pair<node* ,int> p = maxGroup(root);
cout<<p.first->data<<" "<<p.second<<endl;
printAtDepthK(root,2);
cout<<endl;
cout<<diameter(root)<<endl;;
*/
vector<int>pre;
pre.push_back(1);pre.push_back(2);pre.push_back(6);pre.push_back(3);pre.push_back(4);pre.push_back(5);
vector<int >in;
in.push_back(2);in.push_back(6);in.push_back(1);in.push_back(4);in.push_back(3);in.push_back(5);
node * root = treeFromPreAndIn(pre,0,5,in,0,5);
levelorder(root);
}
