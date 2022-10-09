/*#include<iostream>
using namespace std;
int stack [100],n=100,top=-1;   

void push(int val)
{
    if(top>=n-1)
    cout<<"stack overflow"<<endl;
    else{
        top++;
        stack[top]=val;
    }
}
void pop()
{
    if(top<=-1)
    cout<<"stack under overflow"<<endl;
    else{
        cout<<"the poped element is "<<stack[top]<<endl;
        top--;
    }
}
void display()
    {
        if(top>=0)
        {
           cout<<"stack element are:"<<endl;
            for(int i=top;i>=0;i--)
            {
            cout<<stack[i]<<" ";
            cout<<endl;
            }
        }
        else{
            cout<<"stack is empty"<<endl;
        }
    }








int main(){
    int ch,val;
    cout<<"1) push in stack"<<endl;
    cout<<"2) pop from stack"<<endl;
    cout<<"3) dispaly stack"<<endl;
    cout<<"4) exit"<<endl;
    

do{
    cout<<"enter the choice:"<<endl;
    cin>>ch;

switch(ch)
{
    case 1: 
        cout<<"enter value to be pushed:"<<endl;
        cin>>val;
        push(val);
        break;
    
    case 2:
        pop();
        break;
    
    case 3:
        display();
        break;

    
    case 4:
        cout<<"exit"<<endl;
        break;
    
    default:
     cout<<"invalid choice"<<endl;
}

 } while(ch!=4);
return 0;
}
*/
#include<iostream>
using namespace std;
#define MAX 5
int a[10],top=-1;

int isEmpty()
    {
        if(top==-1)
            return 1;
        return 0;
    }
int isFull()
{
    if(top+1==MAX)
        return 1;
    return 0;
}
void push(int x)
{
    if(!isFull())
    {
        top++;
        a[top]=x;
    }
    else{
    cout<<"stack is full"<<endl;
    }
}
int pop()
    {
        int x;
         top--;
        x=a[top];
         return x;
            
    }

    
    
int peak()
{
    int x;
    if(!isEmpty())
    {
        x=a[top];
        return x;
    }
    else
    {
        cout<<"stack is empty"<<endl;
    }
    
}
void display()
{
    int i;
    if(!isEmpty())
    {
        for(i=top;i>=0;i--)
        {
            cout<<"\n"<<a[i]<<endl;
        }
    }
    else{
        cout<<"stack is empty"<<endl;
    }
}
int main()
{
    int x,ch;
    while(1)
    {
        cout<<"__menu__"<<endl;
        cout<<"1.push\n2.pop\n3.show top\n4.display\n5.exit"<<endl;
        cout<<"enter your choice:"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"enter x:"<<endl;
            cin>>x;
            push(x);
            display();
            break;
        
            case 2: if(!isEmpty())
            {
                x=pop();
                cout<<"poped="<<x<<endl;
            }
            else{
                cout<<"stack is empty:"<<endl;
                break;
            }
            

            case 3:cout<<"top element="<<peak();
            break;

            case 4: display();
            break;

            case 5: cout<<"exit";

            default:cout<<"invalid chioce"<<endl;
        }




    }
    return 0;
}

