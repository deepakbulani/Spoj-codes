#include <bits/stdc++.h>
using namespace std;
vector<string> v;
struct node
{
    struct node *a[26];
    bool isleaf;
};
bool fun(node *root,string q)
{
    node *tmp=root;
    for(int i=0;i<q.length();i++)
	      {
	           int index=q[i]-97;
	           if(!tmp->a[index])
	           {
	               return false;
	           }
	           tmp = tmp->a[index];
	      }
	      if(tmp&&tmp->isleaf)
	        return true;
}
void add(node *root,string q)
{
                node *tmp=root;
	          for(int i=0;i<q.length();i++)
	          {
	              int index=q[i]-97;
	              if(!tmp->a[index])
	              {
	                  node *n=NULL;
	                   n=(struct node*)malloc(sizeof(struct node));
	                   if(n)
                       {
	                    for(int j=0;j<26;j++)
	                      n->a[j]=NULL;

	                      n->isleaf=false;
                       }
                       tmp->a[index]=n;
	              }
	              tmp=tmp->a[index];
	          }
	          tmp->isleaf=true;
}
int main() {
	int t,n;
	string x,q;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    for(int i=0;i<n;i++)
	     {
	         cin>>x;
	         v.push_back(x);
	     }
	     node *root,*tmp;
	     root=NULL;
	     root=(struct node*)malloc(sizeof(struct node));
	     if(root)
         {
	     root->isleaf=false;
	     for(int i=0;i<26;i++)
	      root->a[i]=NULL;
         }
         for(int i=0;i<n;i++)
            add(root,v[i]);
	      cin>>q;
	      bool ans=fun(root,q);
	      cout<<ans<<endl;
	      v.clear();
	}
	return 0;
}
