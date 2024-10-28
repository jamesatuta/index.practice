    //stacks is ADT that uses lifo technique to store data
    #include <iostream>

    #include <Stacks>
    using namespace std;
    void printstackelements(stack<int>stack){
        while (! stack.empty()){
            cout<<stack.pop()<<endl;
            stack.pop();
        }
    }

    int main ()
    {
        //empty,size,push,pop,top

        
    stack<int>numbersStacks;
    numbersStacks.push(1)
    numbersStacks.push(2)
    numbersStacks.push(3)
    numbersStacks.push(4)

    //if you want to remove the stack use stack.pop
    numbersStacks.pop(1)
    numbersStacks.pop(2)
    numbersStacks.pop(3)
    cout<<printstackelements (numbersStacks);


    //if (numbersStacks.empty()) <<endl;
      //  cout<<"stack is empty"
    //else
    //cout << "stack is not empty"
    //if you want to check size of rthe stack use size ()
    //cout<<"stack size is"<<numbersStack.size()<<endl;

    system( "pause>0")
    }
