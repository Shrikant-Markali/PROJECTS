#include<iostream>
using namespace std;

//Structure for SINGLY LINKED LIST
template <class T>
struct nodeS
{
    T data;
    struct nodeS *next;
};

//Structure for DOUBLY LINKED LIST
template<class T>
struct nodeD
{
    T data;
    struct nodeD * next;
    struct nodeD * prev;
};

//Structure for TREE
template<class T>
struct BST
{
    T data;
    struct BST * lchild;
    struct BST * rchild;
};


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                 //
//--------------------------------------------DECLERATION OF ALL CLASSES-------------------------------------------//
//                                              1)Singly Linear Class                                              //
//                                              2)Singly Circular Class                                            //
//                                              3)Doublyly Linear Class                                            //
//                                              4)Doublyly Circular Class                                          //
//                                                                                                                 //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
class SinglyLL
{
    public:
        // Characteristics
        struct nodeS<T>* First;
        int iCount;

        // Behaviours
        SinglyLL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPosition(T no ,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int ipos);

        void Display();
        int Count();

        int FirstOccurance(T no);
        int LastOccurance(T no);

        int MinValue(); // Only for Integer
        int MaxValue(); // Only for Integer
        int LLSum();
        int CountOdd(); // Only for Integer
        int CountEven(); // Only for Integer
        int Frequancy(T no);
        int MiddleElement();

        void ReverseLL();

        int FactorsSum(T no); //This function is also used as Helper Funtion
        void DisplayPerfect();
        void DisplayPrime();
        int RevDigit(T no); //Helper Function
        void DisplayPalindrom();
        void DisplaySumOfDigit();
        void DisplaySmallDigit();// Only for Integer
        void DisplayLargeDigit();// Only for Integer
};


template <class T>
class SinglyCL
{
    public:
        struct nodeS<T>* First;
        struct nodeS<T>* Last;

        SinglyCL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();
        int FirstOccurance(T no);
        int LastOccurance(T no);
        int MinValue(); // Only for Integer
        int MaxValue();// Only for Integer
        int CountOdd(); // Only for Integer
        int CountEven(); // Only for Integer
        int LLSum();
        int Frequancy(T no);
        int MiddleElement();

        void ReverseLL();

        int FactorsSum(T no); //This function is also used as Helper Funtion
        void DisplayPerfect();
        void DisplayPrime();
        int RevDigit(T no); //Helper Function
        void DisplayPalindrom();
        void DisplaySumOfDigit();
        void DisplaySmallDigit();// Only for Integer
        void DisplayLargeDigit();// Only for Integer
};

template<class T>
class DoublyLL
{
    public:
    struct nodeD<T> * First;
 
    DoublyLL();

    void InsertFirst(T no);
    void InsertLast(T no);
    void InsertAtPos(T no, int pos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int pos);

    int Count();
    void Display();
    int FirstOccurance(T no);
    int LastOccurance(T no);
    int MinValue(); // Only for Integer
    int MaxValue(); // Only for Integer
    int LLSum();
    int CountOdd(); // Only for Integer
    int CountEven(); // Only for Integer
    int Frequancy(T no);
    int MiddleElement();

    void ReverseLL();

    int FactorsSum(T no);  //This function is also used as Helper Funtion
    void DisplayPerfect();
    void DisplayPrime();
    int RevDigit(T no); //Helper Function
    void DisplayPalindrom();
    void DisplaySumOfDigit();
    void DisplaySmallDigit();// Only for Integer
    void DisplayLargeDigit();// Only for Integer
};

template <class T>
class DoublyCL
{
    public:
        struct nodeD<T>* First;
        struct nodeD<T>* Last;

        DoublyCL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();

        int FirstOccurance(T no);
        int LastOccurance(T no);
        int MinValue(); // Only for Integer
        int MaxValue(); // Only for Integer
        int LLSum();
        int CountOdd(); // Only for Integer
        int CountEven(); // Only for Integer
        int Frequancy(T no);
        int MiddleElement();

        void ReverseLL();

        int FactorsSum(T no);  //This function is also used as Helper Funtion
        void DisplayPerfect();
        void DisplayPrime();
        int RevDigit(T no); //Helper Function
        void DisplayPalindrom();
        void DisplaySumOfDigit();
        void DisplaySmallDigit();// Only for Integer
        void DisplayLargeDigit();// Only for Integer
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                 //
//                                            QUEUE CLASS DECLARATION                                              //
//                                                                                                                //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
class Queue
{
    public:
    struct nodeS<T> * First;

    Queue();

    void Enqueue(T no);
    void Dequeue();
    void Display();
    
    bool Search(T no);

    int QueueSum();
    int CountOdd(); // Only for Integer
    int CountEven(); // Only for Integer
    int FirstOccurance(T no);
    int LastOccurance(T no);
    int Frequancy(T no);
    int MiddleElement();
    int FactorsSum(T no);  //This function is also used as Helper Funtion
    void DisplayPerfect();
    void DisplayPrime();
    void Reverse();
    int RevDigit(T no); //Helper Function
    void DisplayPalindrom();
    void DisplaySumOfDigit();
    void DisplaySmallDigit(); // Only for Integer
    void DisplayLargeDigit(); // Only for Integer
        
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                 //
//                                            STACK CLASS DECLARATION                                              //
//                                                                                                                //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
class Stack
{
    public:
    struct nodeS<T> * First;

    Stack();

    void Push(T no);
    void Pop();
    void Display();

    bool Search(T no);

    int StackSum();
    int CountOdd(); // Only for Integer
    int CountEven(); // Only for Integer
    int FirstOccurance(T no);
    int LastOccurance(T no);
    int Frequancy(T no);
    int MiddleElement();
    int FactorsSum(T no);  //This function is also used as Helper Funtion
    void DisplayPerfect();
    void DisplayPrime();
    void Reverse();
    int RevDigit(T no); //Helper Function
    void DisplayPalindrom();
    void DisplaySumOfDigit();
    void DisplaySmallDigit(); // Only for Integer
    void DisplayLargeDigit(); // Only for Integer
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                 //
//                                            TREE CLASS DECLARATION                                              //
//                                                                                                                //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
class Tree
{
    public:
    struct BST<T> * First;

    Tree();

    void Insert(T no);
    bool Search(T no);
    
    void Inorder(struct BST<T> * Root);
    void Preorder(struct BST<T> * Root);
    void Postorder(struct BST<T> * Root);

    int CountElement(struct BST<T> * Root);
    int CountOddNodes(struct BST<T> * Root);
    int CountEvenNodes(struct BST<T> * Root);
    int CountParentNodes(struct BST<T> * Root);
    int CountLeafNodes(struct BST<T> * Root);
    int SumOfTree(struct BST<T> * Root);

    T MaximumNode(struct BST<T> * Root);
    T MinimumNode(struct BST<T> * Root);
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                 //
//                                            SINGLY LEANEAR LINKED LIST FUNCTIONS                                //
//                                                                                                                //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
SinglyLL <T> :: SinglyLL()
{
    First = NULL;
    //iCount = 0;
}

template <class T>
void SinglyLL <T>:: InsertFirst(T no)
{
    // Step1 : Allocate memory for node
    struct nodeS<T> * newn = new struct nodeS<T> ;

    // Step2 : Initialise node
    newn->data = no;
    newn->next =  NULL;

    // Step3 : Check if LL is empty or not
    if(First == NULL)   // if(iCount == 0)
    {
        First = newn;
        iCount++;
    }
    else    // If LL contains atleast one node
    {
        newn->next = First;
        First = newn;
        iCount++;
    }
}
template <class T>

void SinglyLL <T>:: InsertLast(T no)
{
    // Step1 : Allocate memory for node
    struct nodeS<T> * newn = new struct nodeS<T>;

    // Step2 : Initialise node
    newn->data = no;
    newn->next =  NULL;

    // Step3 : Check if LL is empty or not
    if(First == NULL)   // if(iCount == 0)
    {
        First = newn;
        iCount++;
    }
    else    // If LL contains atleast one node
    {
        struct nodeS<T> * temp = First;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;
        iCount++;
    }
}
template <class T>
void SinglyLL <T>:: InsertAtPosition(T no, int ipos)
{
    if((ipos < 1) || (ipos > iCount+1))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        struct nodeS<T> * newn = new struct nodeS<T>;

        newn->data = no;
        newn->next = NULL;

        struct nodeS<T> *  temp = First;
        for(int iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

template <class T>
void SinglyLL <T>:: DeleteFirst()
{
    if(First == NULL)   // if(iCount == 0)
    {
        return;
    }
    else if(First -> next == NULL) // else if(iCount == 1)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        struct nodeS<T> *  temp = First;
        First = First -> next;
        delete temp;
        iCount--;
    }
}

template <class T>
void SinglyLL <T>:: DeleteLast()
{    
    if(First == NULL)   // if(iCount == 0)
    {
        return;
    }
    else if(First -> next == NULL) // else if(iCount == 1)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        struct nodeS<T> * temp = First;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;

        iCount--;
    }
}

template <class T>
void SinglyLL <T>:: DeleteAtPosition(int ipos)
{
    if((ipos < 1) || (ipos > iCount))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iCount)
    {
        DeleteLast();
    }
    else
    {
        struct nodeS<T>* temp1 = First;

        for(int iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }

        struct nodeS<T> *  temp2 = temp1->next;

        temp1->next = temp2->next;
        delete temp2;

        iCount--;
    }
}

template <class T>
void SinglyLL<T>:: Display()
{
    cout<<"Elements of Singly Linear Linked List are : "<<"\n";
    struct nodeS<T> *  temp = First;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp->next;
    }
    cout<<"NULL"<<"\n";
}

template <class T>
int SinglyLL <T> :: Count()
{
    cout<<"Total elements are: ";
    struct nodeS<T>* temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp -> next;
    }
    return iCnt;
}

template <class T>
int SinglyLL <T>::FirstOccurance(T no)
{
    struct nodeS<T> * temp = First;
    int i = 1;
    while(temp != NULL)
    {
        if(temp->data == no)
        {
            break;
        }
        i++;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        return -1;
    }
    else
    {
        return i;
    }
}

template <class T>
int SinglyLL <T>::LastOccurance(T no)
{
    struct nodeS<T> * temp = First;
    int i = 1, Match = -1;
    while(temp != NULL)
    {
        if(temp->data == no)
        {
            Match = i;
        }
        i++;
        temp = temp->next;
    }

   return Match;
}

template <class T>
int SinglyLL <T>::MinValue()
{
    int Min = 0;

    struct nodeS<T> * temp = First;

    Min = temp ->data;
    while(temp != NULL)
    {
        if(Min > temp->data)
        {
            Min = temp->data;
        }
        temp = temp->next;
    }

    return Min;
}
template <class T>
int SinglyLL <T>::MaxValue()
{
    int Max = 0;

    struct nodeS<T> * temp = First;

    while(temp != NULL)
    {
        if(Max < temp->data)
        {
            Max = temp->data;
        }
        temp = temp->next;
    }

    return Max;
}

template <class T>
int SinglyLL <T>::LLSum()
{
    int Sum = 0;

    struct nodeS<T> * temp = First;

    while(temp != NULL)
    {
        Sum = Sum + temp->data;
        temp = temp->next;
    }

    return Sum;
}

template<class T>
int SinglyLL<T> ::CountEven()
{
    struct nodeS<T> * temp = First;
    int Cnt = 0;

    while(temp != NULL)
    {
        if((temp ->data) % 2 == 0)
        {
            Cnt++;
        }
        temp = temp->next;
    }
    return Cnt;
}

template<class T>
int SinglyLL<T> ::CountOdd()
{
    struct nodeS<T> * temp = First;
    int Cnt = 0;

    while(temp != NULL)
    {
        if((temp ->data) % 2 != 0)
        {
            Cnt++;
        }
        temp = temp->next;
    }
    return Cnt;
}

template<class T>
int SinglyLL<T> ::Frequancy(T no)
{
    struct nodeS<T> * temp = First;
    int Cnt = 0;

    while(temp != NULL)
    {
        if(temp ->data == no)
        {
            Cnt++;
        }
        temp = temp->next;
    }
    return Cnt;
}

template<class T>
int SinglyLL<T> ::MiddleElement()
{
    struct nodeS<T> * Teacher = First;
    struct nodeS<T> * Student = First;

    while((Teacher != NULL) && (Teacher ->next != NULL))
    {
        Teacher = Teacher->next->next;
        Student = Student->next;
    }
    
    return Student->data;
}

template<class T>
int SinglyLL<T> ::FactorsSum(T no)
{
    struct nodeS<T> * temp = First;
    int iCnt = 0, Sum = 0;
    bool Flag = false;


    while(temp != NULL)
    {
        if( temp ->data == no)
        {
            Flag = true;

         for(iCnt = 1; iCnt <= temp->data /2; iCnt++)
        {
            if((temp ->data) % iCnt == 0)
            {
                Sum = Sum + iCnt;
            }
        }
        }
       
        temp = temp->next;
    }

    if(Flag == true)
    {
    return Sum;
    }
    else
    {
        return -1;
    }
}
template<class T>
void SinglyLL<T> ::DisplayPerfect()
{
    struct nodeS<T> * temp = First;
    int Ret = 0;

    cout<<"Perfect numbers from Singly Linear Linked List are: \n";

    while(temp != NULL)
    {
        Ret = FactorsSum(temp->data);

        if(Ret == temp->data)
        {
            cout<<temp->data<<"\t";
        }
        temp = temp->next;
    }
    cout<<"\n";
}

template<class T>
void SinglyLL<T> ::DisplayPrime()
{
    struct nodeS<T> * temp = First;
    int iCnt = 0;

    cout<<"Prime Numbers Are: \n";
    while(temp != NULL)
    {
        bool Flag = true;

        for(iCnt = 2; iCnt < temp->data; iCnt++)
        {
            if((temp->data) % iCnt == 0)
            {
                Flag = false;
            }
        
        }

        if(Flag != false)
        {
            cout<<temp->data<<"\t";
        }

        temp = temp->next;
    }

    cout<<"\n";
}

template<class T>
void SinglyLL<T> ::ReverseLL()
{
    struct nodeS<T> *Previuos = NULL, *Next = NULL, *Current = First;

    while(Current != NULL)
    {
        Next = Current->next;
        Current ->next = Previuos;
        Previuos = Current;
        Current = Next;
    }
    First = Previuos; 
}

template<class T>
int SinglyLL<T> ::RevDigit(T no)
{
    int iDigit = 0;
    int Rev = 0;
    while(no != 0)
    {
        iDigit = no % 10;
        Rev = (Rev * 10) + iDigit;
        no = no /10;
    }
    return Rev;
}

template<class T>
void SinglyLL<T> ::DisplayPalindrom()
{
    struct nodeS<T> * temp = First;
    int RevNum = 0;

    cout<<"Palindrom numbers are :\n";
    while(temp != NULL)
    {
       RevNum = RevDigit((temp)->data);
       if(temp->data == RevNum)
       {
        cout<<temp->data<<"\t";
       }
       temp = temp->next;
    }
    cout<<"\n";
}

template<class T>
void SinglyLL<T> ::DisplaySumOfDigit()
{
    struct nodeS<T> * temp = First;
    T No;
    int iDigit = 0;
    int DigitAdd = 0;

    while(temp != NULL)
    {
        No = temp->data;

        while(No != 0)
        {
            iDigit = No % 10;
            DigitAdd = DigitAdd + iDigit;
            No = No / 10;
        }
        cout<<DigitAdd<<"\t";
        temp = temp ->next;
        DigitAdd = 0;
    }
    cout<<"\n";
}

template<class T>
void SinglyLL<T> ::DisplaySmallDigit()
{
    struct nodeS<T> * temp = First;
    T No;
    T Digit ;
    T Smallest ;

    cout<<"Smallest digits of each element are:\n";
    while(temp != NULL)
    {
        T No = temp->data;
        Smallest = temp->data;
        while(No != 0)
        {
            Digit = No % 10;
            if(Digit < Smallest)
            {
                Smallest = Digit;
            }
            No = No / 10; 
        }
        cout<<Smallest<<"\t";
        temp= temp->next;
    }
    cout<<"\n";
}

template<class T>
void SinglyLL<T> ::DisplayLargeDigit()
{
    struct nodeS<T> * temp = First;
    T No;
    T Digit ;
    T Largest = 0;

    cout<<"Largest digits of each element are:\n";
    while(temp != NULL)
    {
        T No = temp->data;
        
        while(No != 0)
        {
            Digit = No % 10;
            if(Digit > Largest)
            {
                Largest = Digit;
            }
            No = No / 10; 
        }
        cout<<Largest<<"\t";
        Largest = 0;
        temp= temp->next;
    }
    cout<<"\n";
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                 //
//                                            SINGLY CIRCULAR LINKED LIST FUNCTIONS                                //
//                                                                                                                //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
SinglyCL<T> ::SinglyCL()
{
    First = NULL;
    Last = NULL;
}

template <class T>
void SinglyCL<T> ::InsertFirst(int no)
{
    struct nodeS<T>* newn = new struct nodeS<T>;

    newn->data = no;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))    // Empty LL
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else    // LL contains atleast one node
    {
        newn->next = First;
        First = newn;
        (Last)->next = First;
    }
}

template <class T>
void SinglyCL<T> ::InsertLast(int no)
{
    struct nodeS<T>* newn = new struct nodeS<T>;

    newn->data = no;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))    // Empty LL
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else    // LL contains atleast one node
    {
        (Last) -> next = newn;
        Last = newn;
        (Last)->next = First;
    }
}


template <class T>
void SinglyCL<T> ::Display()
{
    struct nodeS<T>* temp = First;

    cout<<"Elements of Singly Circular Linked list are : "<<"\n";

    do
    {
        cout<<"| "<<temp->data<<" |-> ";
        temp = temp -> next;
    }while(temp != Last->next);
    cout<<"\n";
}

template <class T>
int SinglyCL<T> ::Count()
{
    struct nodeS<T>* temp = First;

    int iCnt = 0;
    do
    {
        iCnt++;
        temp = temp -> next;
    }while(temp != Last->next);
    return iCnt;
}


template <class T>
void SinglyCL<T> ::DeleteFirst()
{
    struct nodeS<T>* temp = First;

    if((First == NULL) && (Last == NULL)) // Empty LL
    {
        return;
    }
    else if(First == Last)    // Single node in LL
    {
        //free(*First);
        delete First;

        First = NULL;
        Last = NULL;
    }
    else    // If LL contains more than 1 node
    {
        First = (First)->next;
        //free(temp);
        delete temp;

        (Last) ->next = First;
    }
}


template <class T>
void SinglyCL<T> ::DeleteLast()
{
    struct nodeS<T>* temp = First;

    if((First == NULL) && (Last == NULL)) // Empty LL
    {
        return;
    }
    else if(First == Last)    // Single node in LL
    { 
        delete First;

        First = NULL;
        Last = NULL;
    }
    else    // If LL contains more than 1 node
    {
        while(temp->next != (Last))
        {
            temp = temp -> next;
        }

        delete temp->next;

        Last = temp; 
        (Last) ->next = First;
    }
}

template <class T>
void SinglyCL<T> ::InsertAtPos(int no, int ipos)
{
    int iNodeCnt = 0, iCnt = 0;
    iNodeCnt = Count();

    struct nodeS<T>* newn = NULL;
    struct nodeS<T>* temp = First;

    if((ipos < 1) || (ipos > iNodeCnt + 1))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iNodeCnt+1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new struct nodeS<T>;

        newn->data = no;
        newn->next = NULL;

        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}


template <class T>
void SinglyCL <T> :: DeleteAtPos(int ipos)
{
    int iNodeCnt = 0, iCnt = 0;
    iNodeCnt = Count();
    struct nodeS<T>* temp1 = First;
    struct nodeS<T>* temp2 = NULL;

    if((ipos < 1) || (ipos > iNodeCnt))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iNodeCnt)
    {
        DeleteLast();
    }
    else
    {
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }   
        temp2 = temp1 ->next;

        temp1->next = temp2->next;
        delete temp2;
    }
}
template <class T>
int SinglyCL <T>::FirstOccurance(T no)
{
    struct nodeS<T> *temp = First;
    int i = 1;

    do
    {
        if(temp->data == no)
        {
            break;
        }
        i++;
        temp = temp->next;
    }while(temp != Last ->next);

    if(temp == Last ->next)
    {
        return -1;
    }
    else
    {
        return i;
    }
}

template <class T>
int SinglyCL <T>::LastOccurance(T no)
{
    struct nodeS<T> * temp = First;
    int i = 1, Match = -1;

    do
    {
        if(temp->data == no)
        {
            Match = i;
        }
        i++;
        temp = temp->next;
    }while(temp != Last->next);

    return Match;
}

template <class T>
int SinglyCL <T>::MinValue()
{
    int Min = 0;

    struct nodeS<T> * temp = First;

    Min = temp ->data;
    do
    {
        if(Min > temp->data)
        {
            Min = temp->data;
        }
        temp = temp->next;
    }while(temp != Last->next);

    return Min;
}
template <class T>
int SinglyCL <T>::MaxValue()
{
    int Max = 0;

    struct nodeS<T> * temp = First;

    do
    {
        if(Max < temp->data)
        {
            Max = temp->data;
        }
        temp = temp->next;
    }while(temp != Last->next);

    return Max;
}
template <class T>
int SinglyCL <T>::LLSum()
{
    int Sum = 0;

    struct nodeS<T> * temp = First;

    do
    {
        Sum = Sum + temp->data;
        temp = temp->next;
    }while(temp != Last->next);

    return Sum;
}

template <class T>
int SinglyCL <T>::CountEven()
{
    int Cnt = 0;
    struct nodeS<T> * temp = First;

    do
    {
        if((temp->data) % 2 == 0)
        {
            Cnt++;
        }
        temp = temp ->next;
    } while (temp != First);

    return Cnt;
  
}
template <class T>
int SinglyCL <T>::CountOdd()
{
    int Cnt = 0;
    struct nodeS<T> * temp = First;

    do
    {
        if((temp->data) % 2 != 0)
        {
            Cnt++;
        }
        temp = temp ->next;
    } while (temp != First);

    return Cnt;
}

template <class T>
int SinglyCL <T>::Frequancy(T no)
{
    struct nodeS<T> * temp = First;
    int Cnt = 0;
    do
    {
        if(temp->data == no)
        {
            Cnt++;
        }
       temp = temp ->next;

    } while (temp != First);
    return Cnt;
}

template <class T>
int SinglyCL <T>::MiddleElement()
{
    struct nodeS<T> * Teacher = First;
    struct nodeS<T> * Student = First;

    do
    {
        Teacher = Teacher->next->next;
        Student = Student->next;
    } while ((Teacher != First) && (Teacher->next != First));

    return Student->data;
    
}

template <class T>
int SinglyCL <T>::FactorsSum(T no)
{
    struct nodeS<T> * temp = First;
    int iCnt = 0, Sum = 0;
    bool Flag = false;


    do
    {
        if( temp ->data == no)
        {
            Flag = true;

         for(iCnt = 1; iCnt <= temp->data /2; iCnt++)
        {
            if((temp ->data) % iCnt == 0)
            {
                Sum = Sum + iCnt;
            }
        }
        }
       
        temp = temp->next;
    }while(temp != Last->next);

    if(Flag == true)
    {
    return Sum;
    }
    else
    {
        return -1;
    }
}

template<class T>
void SinglyCL <T>:: DisplayPerfect()
{
    struct nodeS<T> * temp = First;
    int Ret = 0;

    cout<<"Perfect numbers from Singly Circular Linked List are: \n";

  do
    {
        Ret = FactorsSum(temp->data);

        if(Ret == temp->data)
        {
            cout<<temp->data<<"\t";
        }
        temp = temp->next;
    }  while(temp != Last->next);

    cout<<"\n";
}

template<class T>
void SinglyCL <T>::DisplayPrime()
{
    struct nodeS<T> * temp = First;
    int iCnt = 0;

    cout<<"Prime Numbers Are: \n";
    
    do
    {
        bool Flag = true;

        for(iCnt = 2; iCnt < temp->data; iCnt++)
        {
            if((temp->data) % iCnt == 0)
            {
                Flag = false;
            }
        }

        if(Flag != false)
        {
            cout<<temp->data<<"\t";
        }

        temp = temp->next;
    }while(temp != Last->next);

    cout<<"\n";
}

template<class T>
void SinglyCL<T> ::ReverseLL()
{
    struct nodeS<T> *Previuos = NULL, *Next = NULL, *Current = First;


    do
    {
        Next = Current->next;
        Current ->next = Previuos;
        Previuos = Current;
        Current = Next;
    }while(Current != First);
    First = Previuos; 
    Last = Next;
    Last->next = First;
}

template<class T>
int SinglyCL<T> ::RevDigit(T no)
{
    int iDigit = 0;
    int Rev = 0;
    while(no != 0)
    {
        iDigit = no % 10;
        Rev = (Rev * 10) + iDigit;
        no = no /10;
    }
    return Rev;
}

template<class T>
void SinglyCL<T> ::DisplayPalindrom()
{
    struct nodeS<T> * temp = First;
    int RevNum = 0;

    cout<<"Palindrom numbers are :\n";
    do
    {
       RevNum = RevDigit((temp)->data);
       if(temp->data == RevNum)
       {
        cout<<temp->data<<"\t";
       }
       temp = temp->next;
    }while(temp != First);
    cout<<"\n";
}

template<class T>
void SinglyCL<T> ::DisplaySumOfDigit()
{
    struct nodeS<T> * temp = First;
    T No;
    int iDigit = 0;
    int DigitAdd = 0;

    do
    {
        No = temp->data;

        while(No != 0)
        {
            iDigit = No % 10;
            DigitAdd = DigitAdd + iDigit;
            No = No / 10;
        }
        cout<<DigitAdd<<"\t";
        temp = temp ->next;
        DigitAdd = 0;
    } while(temp != First);
    cout<<"\n";
}
template<class T>
void SinglyCL<T> ::DisplaySmallDigit()
{
    struct nodeS<T> * temp = First;
    T No;
    T Digit ;
    T Smallest ;
    cout<<"Smallest digits of each element are :\n";
   do
    {
        T No = temp->data;
        Smallest = temp->data;
        while(No != 0)
        {
            Digit = No % 10;
            if(Digit < Smallest)
            {
                Smallest = Digit;
            }
            No = No / 10; 
        }
        cout<<Smallest<<"\t";
        temp= temp->next;
    } while(temp != First);
    cout<<"\n";
}

template<class T>
void SinglyCL<T> ::DisplayLargeDigit()
{
    struct nodeS<T> * temp = First;
    T No;
    T Digit ;
    T Largest = 0;

    cout<<"Largest digits of each element are :\n";
   do
    {
        T No = temp->data;
        while(No != 0)
        {
            Digit = No % 10;
            if(Digit > Largest)
            {
                Largest = Digit;
            }
            No = No / 10; 
        }

        cout<<Largest<<"\t";
        temp= temp->next;
        Largest = 0;

    } while(temp != First);
    cout<<"\n";
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                 //
//                                            DOUBLY LINEAR LINKED LIST FUNCTIONS                                  //
//                                                                                                                //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
DoublyLL<T> :: DoublyLL()
{
    First = NULL; 
}

template<class T>
void DoublyLL<T> ::InsertFirst(T no)
{
    struct nodeD<T> * newn = new struct nodeD<T>;
    newn->next = NULL;
    newn->prev = NULL;
    newn->data = no;

    if(First == NULL)
    {
        First = newn;
    
    }
    else 
    {
        newn->next =First;
        First->prev = newn;
        First = newn;
    }
}

template<class T>
void DoublyLL<T> ::InsertLast(T no)
{
    struct nodeD<T> *newn = new struct nodeD<T>;
    newn->next = NULL;
    newn->prev = NULL;
    newn->data = no;

    if(First == NULL)
    {
        First = newn;
    }
    else 
    {
        struct nodeD<T> * temp = First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
}

template<class T>
void DoublyLL<T> ::DeleteFirst()
{
    if(First == NULL)
    {
        cout<<"There is no node to delete";
        return;
    }
    else if(First->next == NULL)
    {
        delete(First);
        First = NULL;

    }
    else 
    {
        First = First ->next;
        delete(First->prev);
        First ->prev = NULL;
    }
}
template<class T>
void DoublyLL<T> ::DeleteLast()
{
    if(First == NULL)
    {
        cout<<"There is no node to delete";
        return;
    }
    else if(First->next == NULL)
    {
        delete(First);
        First = NULL;
    }
    else 
    {
        struct nodeD<T> * temp = First;
        while((temp->next->next) != NULL)
        {
            temp = temp->next;
        }
        delete(temp->next);
        temp->next = NULL;
        
    }
}

template<class T>
void DoublyLL<T> :: Display()
{
    struct nodeD<T> * temp = First;
    cout<<"Elements of Doubly Linear Linked List are : "<<"\n";

    do
    {
        cout<<"| "<<temp->data<<" |->";
        temp=temp->next;

    }
    while(temp != NULL);
    cout<<"\n";
}
template<class T>
int DoublyLL<T> :: Count()
{
    struct nodeD<T> * temp = First;
    int Cnt = 0;
    do
    {
       Cnt++;
       temp=temp->next;
    }
    while(temp != NULL);

    return Cnt;
}

template<class T>
void DoublyLL<T> ::InsertAtPos(T no, int ipos)
{
    int NodeCnt = Count();

    if(ipos < 1 || NodeCnt > NodeCnt +1)
    {
        cout<<"Invalid Position\n";
        return;
    }
    else if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == NodeCnt + 1)
    {
        InsertLast(no);
    }
    else 
    {
       struct nodeD<T> * newn = new struct nodeD<T>; 
       newn->next = NULL;
       newn->prev = NULL;
       newn->data = no;

       struct nodeD<T> * temp = First;
       int i = 0;

       for(i =1; i < ipos-1; i++)
       {
        temp = temp->next;
       } 
       newn->next = temp->next;
       newn->next->prev = newn;
       temp->next = newn;
       newn->prev = temp;

    }
}

template<class T>
void DoublyLL<T> ::DeleteAtPos(int ipos)
{
    int NodeCnt = Count();

    if(ipos < 1 || NodeCnt > NodeCnt)
    {
        cout<<"Invalid Position\n";
        return;
    }
    else if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == NodeCnt)
    {
        DeleteLast();
    }
    else 
    {

       struct nodeD<T> * temp = First;
       int i = 0;

       for(i =1; i < ipos-1; i++)
       {
        temp = temp->next;
       } 
        temp->next = temp->next->next;
        delete(temp->next->prev);
        temp->next->prev = temp;         
    }
}

template<class T>
int DoublyLL<T>::FirstOccurance(T no)
{
    struct nodeD<T> * temp = First;
    int i = 1;

    while(temp != NULL)
    {
        if(temp->data == no)
        {
            break;
        }
        temp = temp ->next;
        i++;
    }
    if(temp == NULL)
    {
        return -1;
    }
    else
    {
        return i;
    }
}
template<class T>
int DoublyLL<T>::LastOccurance(T no)
{
    struct nodeD<T> * temp = First;
    int i = 1 , Match = -1;

    while(temp != NULL)
    {
        if(temp->data == no)
        {
            Match = i;
        }
        temp = temp ->next;
        i++;
    }
    return Match;
  
}

template <class T>
int DoublyLL <T>::MinValue()
{
    int Min = 0;

    struct nodeD<T> * temp = First;

    Min = temp ->data;
    while(temp != NULL)
    {
        if(Min > temp->data)
        {
            Min = temp->data;
        }
        temp = temp->next;
    }

    return Min;
}
template <class T>
int DoublyLL <T>::MaxValue()
{
    int Max = 0;

    struct nodeD<T> * temp = First;

    while(temp != NULL)
    {
        if(Max < temp->data)
        {
            Max = temp->data;
        }
        temp = temp->next;
    }

    return Max;
}

template <class T>
int DoublyLL <T>::LLSum()
{
    int Sum = 0;

    struct nodeD<T> * temp = First;

    while(temp != NULL)
    {
        Sum = Sum + temp->data;
        temp = temp->next;
    }

    return Sum;
}

template <class T>
int DoublyLL <T>::CountEven()
{
    struct nodeD<T> * temp = First;
    int Cnt = 0;

    while(temp != NULL)
    {
        if((temp ->data) % 2 == 0)
        {
            Cnt++;
        }
        temp = temp->next;
    }
    return Cnt;
}

template <class T>
int DoublyLL <T>::CountOdd()
{
    struct nodeD<T> * temp = First;
    int Cnt = 0;

    while(temp != NULL)
    {
        if((temp ->data) % 2 == 0)
        {
            Cnt++;
        }
        temp = temp->next;
    }
    return Cnt;
}

template <class T>
int DoublyLL <T>::Frequancy(T no)
{
    struct nodeD<T> * temp = First;
    int Cnt = 0;

    while(temp != NULL)
    {
        if(temp ->data == no)
        {
            Cnt++;
        }
        temp = temp->next;
    }
    return Cnt;
}

template <class T>
int DoublyLL <T>::MiddleElement()
{
    struct nodeD<T> * Teacher = First;
    struct nodeD<T> * Student = First;


    while((Teacher != NULL) && (Teacher ->next != NULL))
    {
        Teacher = Teacher->next->next;
        Student = Student->next;
    }
    
    return Student->data;
}

template <class T>
int DoublyLL <T>::FactorsSum(T no)
{
    struct nodeD<T> * temp = First;
    int iCnt = 0, Sum = 0;
    bool Flag = false;


    while(temp != NULL)
    {
        if( temp ->data == no)
        {
            Flag = true;

         for(iCnt = 1; iCnt <= temp->data /2; iCnt++)
        {
            if((temp ->data) % iCnt == 0)
            {
                Sum = Sum + iCnt;
            }
        }
        }
       
        temp = temp->next;
    }

    if(Flag == true)
    {
    return Sum;
    }
    else
    {
        return -1;
    }
}

template<class T>
void DoublyLL <T>:: DisplayPerfect()
{
    struct nodeD<T> * temp = First;
    int Ret = 0;

    cout<<"Perfect numbers from Doubly Linear Linked List are: \n";

    while(temp != NULL)
    {
        Ret = FactorsSum(temp->data);

        if(Ret == temp->data)
        {
            cout<<temp->data<<"\t";
        }
        temp = temp->next;
    }
    cout<<"\n";
}

template<class T>
void DoublyLL <T>::DisplayPrime()
{
    struct nodeD<T> * temp = First;
    int iCnt = 0;

    cout<<"Prime Numbers Are: \n";
    while(temp != NULL)
    {
        bool Flag = true;

        for(iCnt = 2; iCnt < temp->data; iCnt++)
        {
            if((temp->data) % iCnt == 0)
            {
                Flag = false;
            }
        
        }

        if(Flag != false)
        {
            cout<<temp->data<<"\t";
        }

        temp = temp->next;
    }

    cout<<"\n";
}

template<class T>
void DoublyLL <T>::ReverseLL()
{
    struct nodeD<T> *Current = First, *Previous = NULL, *Next = NULL;

    do
    {
        Next = Current->next;
        Current->next = Previous;
        Current->prev = Next;
        Previous =Current;

        Current =  Next;
    }while(Current != NULL);

    First = Previous;

}

template<class T>
int DoublyLL<T> ::RevDigit(T no)
{
    int iDigit = 0;
    int Rev = 0;
    while(no != 0)
    {
        iDigit = no % 10;
        Rev = (Rev * 10) + iDigit;
        no = no /10;
    }
    return Rev;
}

template<class T>
void DoublyLL<T> ::DisplayPalindrom()
{
    struct nodeD<T> * temp = First;
    int RevNum = 0;

    cout<<"Palindrom numbers are :\n";
    while(temp != NULL)
    {
       RevNum = RevDigit((temp)->data);
       if(temp->data == RevNum)
       {
        cout<<temp->data<<"\t";
       }
       temp = temp->next;
    }
    cout<<"\n";
}

template<class T>
void DoublyLL<T> ::DisplaySumOfDigit()
{
    struct nodeD<T> * temp = First;
    T No;
    int iDigit = 0;
    int DigitAdd = 0;

    while(temp != NULL)
    {
        No = temp->data;

        while(No != 0)
        {
            iDigit = No % 10;
            DigitAdd = DigitAdd + iDigit;
            No = No / 10;
        }
        cout<<DigitAdd<<"\t";
        temp = temp ->next;
        DigitAdd = 0;
    }
    cout<<"\n";
}
template<class T>
void DoublyLL<T> ::DisplaySmallDigit()
{
    struct nodeD<T> * temp = First;
    T No;
    T Digit ;
    T Smallest ;

    cout<<"Smallest digits of each element are:\n";
    while(temp != NULL)
    {
        T No = temp->data;
        Smallest = temp->data;
        while(No != 0)
        {
            Digit = No % 10;
            if(Digit < Smallest)
            {
                Smallest = Digit;
            }
            No = No / 10; 
        }
        cout<<Smallest<<"\t";
        temp= temp->next;
    }
    cout<<"\n";
}

template<class T>
void DoublyLL<T> ::DisplayLargeDigit()
{
    struct nodeD<T> * temp = First;
    T No;
    T Digit ;
    T Largest = 0;

    cout<<"Largest digits of each element are:\n";
    while(temp != NULL)
    {
        T No = temp->data;
        
        while(No != 0)
        {
            Digit = No % 10;
            if(Digit > Largest)
            {
                Largest = Digit;
            }
            No = No / 10; 
        }
        cout<<Largest<<"\t";
        Largest = 0;
        temp= temp->next;
    }
    cout<<"\n";
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                  //
//                                            DOUBLY CIRCULAR LINKED LIST FUNCTIONS                                //
//                                                                                                                //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
DoublyCL<T> :: DoublyCL()  // Default constructor
{
    First = NULL;
    Last = NULL;
}

template <class T>
void DoublyCL<T> :: InsertFirst(T no)
{
    struct nodeD<T>* newn = new struct nodeD<T>; 

    newn->data = no;
    newn->next = NULL;
    newn -> prev = NULL;

    if((First == NULL) && (Last == NULL)) // LL is empty
    {
        First = newn;
        Last = newn;
    }
    else    // If LL contains one or more nodes
    {
        newn->next = First;
        (First)->prev = newn;
        First = newn; 
    }

    (First)->prev = Last;
    (Last)->next = First;
}

template <class T>
void DoublyCL <T> :: InsertLast(T no)
{
    struct nodeD<T>* newn = new struct nodeD<T>; 

    newn->data = no;
    newn->next = NULL;
    newn -> prev = NULL;

    if((First == NULL) && (Last == NULL)) // LL is empty
    {
        First = newn;
        Last = newn;
    }
    else    // If LL contains one or more nodes
    {
        (Last) -> next = newn;
        newn->prev = Last;
        Last = newn;
    }

    (First)->prev = Last;
    (Last)->next = First;
}

template <class T>
void DoublyCL<T> :: Display()
{
    struct nodeD<T>* temp = First;

    if(First == NULL && Last == NULL)
    {
        cout<<"Linked list is empty"<<"\n";
        return;
    }

    cout<<"Elements of Doubly Circular Linked list are : "<<"\n";
    do
    {
        cout<<"| " <<temp->data<<" |<=> ";
        temp = temp -> next;
    }while(temp != Last->next);

    cout<<"\n";
}

template <class T>
int DoublyCL<T> :: Count()
{
    int iCnt = 0;
    struct nodeD<T>* temp = First;

    if(First == NULL && Last == NULL)
    {
        return iCnt;
    }

    do
    {
        iCnt++;
        temp = temp -> next;
    }while(temp != Last->next);

    return iCnt;
}

template <class T>
void DoublyCL<T> :: DeleteFirst()
{
    if(First == NULL && Last == NULL) // Empty LL
    {
        return;
    }
    else if(First == Last)    // Single node
    {
        delete First;
        First = NULL;
        Last= NULL;
    }
    else    // More than one node
    {
        (First) = (First) ->next;
        delete (Last)->next;        // free((*First)->prev);

        (First)->prev = Last;
        (Last)->next = First;
    }
}

template <class T>
void DoublyCL<T> :: DeleteLast()
{
    if(First == NULL && Last == NULL) // Empty LL
    {
        return;
    }
    else if(First == Last)    // Single node
    {
        delete First;
        First = NULL;
        Last= NULL;
    }
    else    // More than one node
    {
        Last = (Last) -> prev;
        delete (First)->prev;       // free((*Last)->next);

        (First)->prev = Last;
        (Last)->next = First;
    }
}

template <class T>
void DoublyCL<T> :: InsertAtPos(T no, int ipos)
{
    int iNodeCnt = Count();
    struct nodeD<T>* newn = NULL;
    struct nodeD<T>* temp = NULL;
    int iCnt = 0;

    if((ipos < 1) || (ipos > iNodeCnt+1))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos ==1)
    {
        InsertFirst(no);
    }
    else if(ipos == iNodeCnt+1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new struct nodeD<T>;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = First;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;
    }
}

template <class T>
void DoublyCL<T> :: DeleteAtPos(int ipos)
{
    int iNodeCnt = Count();
    struct nodeD<T>* temp = NULL;
    int iCnt = 0;

    if((ipos < 1) || (ipos > iNodeCnt))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos ==1)
    {
        DeleteFirst();
    }
    else if(ipos == iNodeCnt)
    {
        DeleteLast();
    }
    else
    {
        temp = First;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
    }
}

template <class T>
int DoublyCL<T> ::FirstOccurance(T no)
{
    struct nodeD<T> * temp = First;
    int i =1;
    do
    {
        if(temp->data == no)
        {
            break; 
        }
        temp = temp ->next;
        i++;
    }while(temp != Last->next);

    if(temp == Last->next)
    {
        return -1;
    }
    else
    {
        return i;
    }
}

template <class T>
int DoublyCL<T> ::LastOccurance(T no)
{
    struct nodeD<T> * temp = First;
    int i =1, Match = -1;
    do
    {
        if(temp->data == no)
        {
            Match = i; 
        }
        temp = temp ->next;
        i++;
    }while(temp != Last->next);

    return Match;
}
template <class T>
int DoublyCL <T>::MinValue()
{
    int Min = 0;

    struct nodeD<T> * temp = First;

    Min = temp ->data;
   do
    {
        if(Min > temp->data)
        {
            Min = temp->data;
        }
        temp = temp->next;
    } while(temp != Last->next); 

    return Min;
}
template <class T>
int DoublyCL <T>::MaxValue()
{
    int Max = 0;

    struct nodeD<T> * temp = First;

    do
    {
        if(Max < temp->data)
        {
            Max = temp->data;
        }
        temp = temp->next;
    }while(temp != Last->next);

    return Max;
}

template <class T>
int DoublyCL <T>::LLSum()
{
    int Sum = 0;

    struct nodeD<T> * temp = First;

    do
    {
        Sum = Sum + temp->data;
        temp = temp->next;
    }while(temp != Last->next);

    return Sum;
}

template <class T>
int DoublyCL <T>::CountEven()
{
    int Cnt = 0;
    struct nodeD<T> * temp = First;
    do
    {
        if((temp->data) % 2 == 0)
        {
            Cnt++;
        }
        temp = temp ->next;
    } while (temp != First);

    return Cnt;
  
}
template <class T>
int DoublyCL <T>::CountOdd()
{
    int Cnt = 0;
    struct nodeD<T> * temp = First;
    do
    {
        if((temp->data) % 2 != 0)
        {
            Cnt++;
        }
        temp = temp ->next;
    } while (temp != First);

    return Cnt;
  
}

template <class T>
int DoublyCL <T>::Frequancy(T no)
{
    struct nodeD<T> * temp = First;
    int Cnt = 0;
    do
    {
        if(temp->data == no)
        {
            Cnt++;
        }
       temp = temp ->next;

    } while (temp != First);
    return Cnt;
}

template <class T>
int DoublyCL <T>::MiddleElement()
{
    struct nodeD<T> * Teacher = First;
    struct nodeD<T> * Student = First;

    do
    {
        Teacher = Teacher->next->next;
        Student = Student->next;
    } while ((Teacher != First) && (Teacher->next != First));

    return Student->data;
    
}

template <class T>
int DoublyCL <T>::FactorsSum(T no)
{
    struct nodeD<T> * temp = First;
    int iCnt = 0, Sum = 0;
    bool Flag = false;


    do
    {
        if( temp ->data == no)
        {
            Flag = true;

         for(iCnt = 1; iCnt <= temp->data /2; iCnt++)
        {
            if((temp ->data) % iCnt == 0)
            {
                Sum = Sum + iCnt;
            }
        }
        }
       
        temp = temp->next;
    }while(temp != Last->next);

    if(Flag == true)
    {
    return Sum;
    }
    else
    {
        return -1;
    }
}

template<class T>
void DoublyCL <T>:: DisplayPerfect()
{
    struct nodeD<T> * temp = First;
    int Ret = 0;

    cout<<"Perfect numbers from Doubly Circular Linked List are: \n";

    do
    {
        Ret = FactorsSum(temp->data);

        if(Ret == temp->data)
        {
            cout<<temp->data<<"\t";
        }
        temp = temp->next;
    }  while(temp != Last->next);
    
    cout<<"\n";
}

template<class T>
void DoublyCL <T>::DisplayPrime()
{
    struct nodeD<T> * temp = First;
    int iCnt = 0;

    cout<<"Prime Numbers Are: \n";
    
    do
    {
        bool Flag = true;

        for(iCnt = 2; iCnt < temp->data; iCnt++)
        {
            if((temp->data) % iCnt == 0)
            {
                Flag = false;
            }
        }

        if(Flag != false)
        {
            cout<<temp->data<<"\t";
        }

        temp = temp->next;
    }while(temp != Last->next);

    cout<<"\n";
}

template<class T>
void DoublyCL <T>::ReverseLL()
{
    struct nodeD<T> * Current = First, *Previous = Last, *Next = NULL;

    do
    {
        Next = Current->next;
        Current->next = Current->prev;
        Current->prev = Next;
        Previous =Current;

        Current = Next;
    }while(Current != First);

    First = Previous;
    Last = Next;
    Last->next = First;
}

template<class T>
int DoublyCL<T> ::RevDigit(T no)
{
    int iDigit = 0;
    int Rev = 0;
    while(no != 0)
    {
        iDigit = no % 10;
        Rev = (Rev * 10) + iDigit;
        no = no /10;
    }
    return Rev;
}

template<class T>
void DoublyCL<T> ::DisplayPalindrom()
{
    struct nodeD<T> * temp = First;
    int RevNum = 0;

    cout<<"Palindrom numbers are :\n";
    do
    {
       RevNum = RevDigit((temp)->data);
       if(temp->data == RevNum)
       {
        cout<<temp->data<<"\t";
       }
       temp = temp->next;
    }while(temp != First);
    cout<<"\n";
}
template<class T>
void DoublyCL<T> ::DisplaySumOfDigit()
{
    struct nodeD<T> * temp = First;
    T No;
    int iDigit = 0;
    int DigitAdd = 0;

    do
    {
        No = temp->data;

        while(No != 0)
        {
            iDigit = No % 10;
            DigitAdd = DigitAdd + iDigit;
            No = No / 10;
        }
        cout<<DigitAdd<<"\t";
        temp = temp ->next;
        DigitAdd = 0;
    } while(temp != First);
    cout<<"\n";
}

template<class T>
void DoublyCL<T> ::DisplaySmallDigit()
{
    struct nodeD<T> * temp = First;
    T No;
    T Digit ;
    T Smallest ;
    cout<<"Smallest digits of each element are :\n";
   do
    {
        T No = temp->data;
        Smallest = temp->data;
        while(No != 0)
        {
            Digit = No % 10;
            if(Digit < Smallest)
            {
                Smallest = Digit;
            }
            No = No / 10; 
        }
        cout<<Smallest<<"\t";
        temp= temp->next;
    } while(temp != First);
    cout<<"\n";
}

template<class T>
void DoublyCL<T> ::DisplayLargeDigit()
{
    struct nodeD<T> * temp = First;
    T No;
    T Digit ;
    T Largest = 0;
    cout<<"Largest digits of each element are :\n";
   do
    {
        T No = temp->data;
        while(No != 0)
        {
            Digit = No % 10;
            if(Digit > Largest)
            {
                Largest = Digit;
            }
            No = No / 10; 
        }
        
        cout<<Largest<<"\t";
        temp= temp->next;
        Largest = 0;

    } while(temp != First);
    cout<<"\n";
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                 //
//                                                  Queue Functions                                                //
//                                                                                                                //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
Queue<T> :: Queue()
{
    First = NULL;
}

template <class T>
void Queue<T> :: Enqueue(T no)
{
    struct nodeS<T> * newn = new struct nodeS<T>;
    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct nodeS<T> * temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }   
}

template <class T>
void Queue<T> ::Dequeue()
{
    if(First == NULL)
    {
        cout<<"Queue is Empty\n";
        return;
    }
    else if(First ->next == NULL)
    {
        delete(First);
        First = NULL;
    }
    else
    {
        struct nodeS<T> * temp = First;

        First = First->next;
        delete(temp);        
    }
}

template <class T>
void Queue<T> ::Display()
{
    struct nodeS<T> * temp = First;

    cout<<"Elements of Queue are : "<<"\n";
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<"| ->";
        temp = temp->next;
    }
    cout<<" NULL\n";
}

template <class T>
bool Queue<T> ::Search(T no)
{
    struct nodeS<T> * temp = First;
    bool Flag = false;

    while(temp != NULL)
    {
        if(temp->data == no)
        {
            Flag = true;
            break;
        }
        temp = temp->next;
    }
    return Flag;
}
template <class T>
int Queue<T> ::CountEven()
{
    struct nodeS<T> * temp = First;
    int Cnt = 0;

    while(temp != NULL)
    {
        if((temp->data) % 2 == 0)
        {
            Cnt++;
        }
        temp = temp->next;
    }
    return Cnt;
}
template <class T>
int Queue<T> ::CountOdd()
{
    struct nodeS<T> * temp = First;
    int Cnt = 0;

    while(temp != NULL)
    {
        if((temp->data) % 2 != 0)
        {
            Cnt++;
        }
        temp = temp->next;
    }
    return Cnt;
}

template <class T>
int Queue<T> ::FirstOccurance(T no)
{
    struct nodeS<T> * temp = First;
    int i = 1;
    while(temp != NULL)
    {
        if(temp->data == no)
        {
            break;
        }
        i++;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        return -1;
    }
    else
    {
        return i;
    }
}

template <class T>
int Queue<T> ::LastOccurance(T no)
{
    struct nodeS<T> * temp = First;
    int i = 1, Match = -1;
    while(temp != NULL)
    {
        if(temp->data == no)
        {
            Match = i;
        }
        i++;
        temp = temp->next;
    }

   return Match;
}

template <class T>
int Queue<T> ::Frequancy(T no)
{
    struct nodeS<T> * temp = First;
    int Cnt = 0;

    while(temp != NULL)
    {
        if(temp ->data == no)
        {
            Cnt++;
        }
        temp = temp->next;
    }
    return Cnt;
}

template <class T>
int Queue<T> ::MiddleElement()
{
    struct nodeS<T> * Teacher = First;
    struct nodeS<T> * Student = First;

    cout<<"Inside Function :"<<"\n";

    while((Teacher != NULL) && (Teacher ->next != NULL))
    {
        Teacher = Teacher->next->next;
        Student = Student->next;
    }
    
    return Student->data;
}


template<class T>
int Queue<T> ::FactorsSum(T no)
{
    struct nodeS<T> * temp = First;
    int iCnt = 0, Sum = 0;
    bool Flag = false;


    while(temp != NULL)
    {
        if( temp ->data == no)
        {
            Flag = true;

         for(iCnt = 1; iCnt <= temp->data /2; iCnt++)
        {
            if((temp ->data) % iCnt == 0)
            {
                Sum = Sum + iCnt;
            }
        }
        }
       
        temp = temp->next;
    }

    if(Flag == true)
    {
    return Sum;
    }
    else
    {
        return -1;
    }
}

template<class T>
void Queue<T> ::DisplayPerfect()
{
    struct nodeS<T> * temp = First;
    int Ret = 0;

    cout<<"Perfect numbers from Queue are: \n";

    while(temp != NULL)
    {
        Ret = FactorsSum(temp->data);

        if(Ret == temp->data)
        {
            cout<<temp->data<<"\t";
        }
        temp = temp->next;
    }
    cout<<"\n";
}

template<class T>
void Queue<T> ::DisplayPrime()
{
    struct nodeS<T> * temp = First;
    int iCnt = 0;

    cout<<"Prime Numbers Are: \n";
    while(temp != NULL)
    {
        bool Flag = true;

        for(iCnt = 2; iCnt < temp->data; iCnt++)
        {
            if((temp->data) % iCnt == 0)
            {
                Flag = false;
            }
        
        }

        if(Flag != false)
        {
            cout<<temp->data<<"\t";
        }

        temp = temp->next;
    }

    cout<<"\n";
}

template<class T>
void Queue<T> ::Reverse()
{
    struct nodeS<T> *Previuos = NULL, *Next = NULL, *Current = First;

    while(Current != NULL)
    {
        Next = Current->next;
        Current ->next = Previuos;
        Previuos = Current;
        Current = Next;
    }
    First = Previuos; 
}

template<class T>
int Queue<T> ::RevDigit(T no)
{
    int iDigit = 0;
    int Rev = 0;
    while(no != 0)
    {
        iDigit = no % 10;
        Rev = (Rev * 10) + iDigit;
        no = no /10;
    }
    return Rev;
}
template<class T>
void Queue<T> ::DisplayPalindrom()
{
    struct nodeS<T> * temp = First;
    int RevNum = 0;

    cout<<"Palindrom numbers are :\n";
    while(temp != NULL)
    {
       RevNum = RevDigit((temp)->data);
       if(temp->data == RevNum)
       {
        cout<<temp->data<<"\t";
       }
       temp = temp->next;
    }
    cout<<"\n";
}

template<class T>
void Queue<T> ::DisplaySumOfDigit()
{
    struct nodeS<T> * temp = First;
    T No;
    int iDigit = 0;
    int DigitAdd = 0;

    while(temp != NULL)
    {
        No = temp->data;

        while(No != 0)
        {
            iDigit = No % 10;
            DigitAdd = DigitAdd + iDigit;
            No = No / 10;
        }
        cout<<DigitAdd<<"\t";
        temp = temp ->next;
        DigitAdd = 0;
    }
    cout<<"\n";
}

template<class T>
void Queue<T> ::DisplaySmallDigit()
{
    struct nodeS<T> * temp = First;
    T No;
    T Digit ;
    T Smallest ;

    cout<<"Smallest digits of each element are:\n";
    while(temp != NULL)
    {
        T No = temp->data;
        Smallest = temp->data;
        while(No != 0)
        {
            Digit = No % 10;
            if(Digit < Smallest)
            {
                Smallest = Digit;
            }
            No = No / 10; 
        }
        cout<<Smallest<<"\t";
        temp= temp->next;
    }
    cout<<"\n";
}

template<class T>
void Queue<T> ::DisplayLargeDigit()
{
    struct nodeS<T> * temp = First;
    T No;
    T Digit ;
    T Largest = 0;

    cout<<"Largest digits of each element are:\n";
    while(temp != NULL)
    {
        T No = temp->data;
        
        while(No != 0)
        {
            Digit = No % 10;
            if(Digit > Largest)
            {
                Largest = Digit;
            }
            No = No / 10; 
        }
        cout<<Largest<<"\t";
        Largest = 0;
        temp= temp->next;
    }
    cout<<"\n";
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                  //
//                                                  Stack Functions                                                //
//                                                                                                                //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
Stack<T>::Stack()
{
    First= NULL;
}

template<class T>
void Stack<T>::Push(T no)
{
    struct nodeS<T> * newn = new struct nodeS<T>;
    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
}

template<class T>
void Stack<T>::Pop()
{
    if(First == NULL)
    {
        cout<<"Queue is Empty\n";
        return;
    }
    else if(First ->next == NULL)
    {
        delete(First);
        First = NULL;
    }
    else
    {
        struct nodeS<T> * temp = First;
        First = First ->next;
        delete(temp);
    }
}

template<class T>
void Stack<T>::Display()
{
    struct nodeS<T> * temp = First;

    cout<<"Elements of Stack are : "<<"\n";
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<"| ->";
        temp = temp->next;
    }
    cout<<" NULL\n";
}

template<class T>
bool Stack<T>:: Search(T no)
{
    struct nodeS<T> * temp = First;
    bool Flag = false;

    while(temp != NULL)
    {
        if(temp ->data == no)
        {
            Flag = true;
            break;
        }
        temp = temp->next;
    }
    return Flag;
}

template<class T>
int Stack<T>::CountEven()
{
    struct nodeS<T> * temp = First;
    int Cnt = 0;

    while(temp != NULL)
    {
        if((temp->data) % 2 == 0)
        {
            Cnt++;
        }
        temp = temp->next;
    }
    return Cnt;
}

template<class T>
int Stack<T>::CountOdd()
{
    struct nodeS<T> * temp = First;
    int Cnt = 0;

    while(temp != NULL)
    {
        if((temp->data) % 2 != 0)
        {
            Cnt++;
        }
        temp = temp->next;
    }
    return Cnt;
}

template<class T>
int Stack<T>::FirstOccurance(T no)
{
    struct nodeS<T> * temp = First;
    int i = 1;
    while(temp != NULL)
    {
        if(temp->data == no)
        {
            break;
        }
        i++;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        return -1;
    }
    else
    {
        return i;
    }
}

template<class T>
int Stack<T>::LastOccurance(T no)
{
    struct nodeS<T> * temp = First;
    int i = 1, Match = -1;
    while(temp != NULL)
    {
        if(temp->data == no)
        {
            Match = i;
        }
        i++;
        temp = temp->next;
    }

   return Match;
}

template<class T>
int Stack<T>::Frequancy(T no)
{
    struct nodeS<T> * temp = First;
    int Cnt = 0;

    while(temp != NULL)
    {
        if(temp ->data == no)
        {
            Cnt++;
        }
        temp = temp->next;
    }
    return Cnt;
}

template<class T>
int Stack<T>::MiddleElement()
{
    struct nodeS<T> * Teacher = First;
    struct nodeS<T> * Student = First;

    cout<<"Inside Function :"<<"\n";

    while((Teacher != NULL) && (Teacher ->next != NULL))
    {
        Teacher = Teacher->next->next;
        Student = Student->next;
    }
    
    return Student->data;
}

template<class T>
int Stack<T>::FactorsSum(T no)
{
    struct nodeS<T> * temp = First;
    int iCnt = 0, Sum = 0;
    bool Flag = false;


    while(temp != NULL)
    {
        if( temp ->data == no)
        {
            Flag = true;

         for(iCnt = 1; iCnt <= temp->data /2; iCnt++)
        {
            if((temp ->data) % iCnt == 0)
            {
                Sum = Sum + iCnt;
            }
        }
        }
       
        temp = temp->next;
    }

    if(Flag == true)
    {
    return Sum;
    }
    else
    {
        return -1;
    }
}

template<class T>
void Stack<T>::DisplayPerfect()
{
    struct nodeS<T> * temp = First;
    int Ret = 0;

    cout<<"Perfect numbers from Stack are: \n";

    while(temp != NULL)
    {
        Ret = FactorsSum(temp->data);

        if(Ret == temp->data)
        {
            cout<<temp->data<<"\t";
        }
        temp = temp->next;
    }
    cout<<"\n";
}

template<class T>
void Stack<T> ::DisplayPrime()
{
    struct nodeS<T> * temp = First;
    int iCnt = 0;

    cout<<"Prime Numbers Are: \n";
    while(temp != NULL)
    {
        bool Flag = true;

        for(iCnt = 2; iCnt < temp->data; iCnt++)
        {
            if((temp->data) % iCnt == 0)
            {
                Flag = false;
            }
        
        }

        if(Flag != false)
        {
            cout<<temp->data<<"\t";
        }

        temp = temp->next;
    }

    cout<<"\n";
}
template<class T>
void Stack<T> ::Reverse()
{
    struct nodeS<T> *Previuos = NULL, *Next = NULL, *Current = First;

    while(Current != NULL)
    {
        Next = Current->next;
        Current ->next = Previuos;
        Previuos = Current;
        Current = Next;
    }
    First = Previuos; 
}

template<class T>
int Stack<T> ::RevDigit(T no)
{
    int iDigit = 0;
    int Rev = 0;
    while(no != NULL)
    {
        iDigit = no % 10;
        Rev = (Rev * 10) + iDigit;
        no = no /10;
    }
    return Rev;
}

template<class T>
void Stack<T> ::DisplayPalindrom()
{
    struct nodeS<T> * temp = First;
    int RevNum = 0;

    cout<<"Palindrom numbers are :\n";
    while(temp != NULL)
    {
       RevNum = RevDigit((temp)->data);
       if(temp->data == RevNum)
       {
        cout<<temp->data<<"\t";
       }
       temp = temp->next;
    }
    cout<<"\n";
}

template<class T>
void Stack<T> ::DisplaySumOfDigit()
{
    struct nodeS<T> * temp = First;
    T No;
    int iDigit = 0;
    int DigitAdd = 0;

    while(temp != NULL)
    {
        No = temp->data;

        while(No != 0)
        {
            iDigit = No % 10;
            DigitAdd = DigitAdd + iDigit;
            No = No / 10;
        }
        cout<<DigitAdd<<"\t";
        temp = temp ->next;
        DigitAdd = 0;
    }
    cout<<"\n";
}

template<class T>
void Stack<T> ::DisplaySmallDigit()
{
    struct nodeS<T> * temp = First;
    T No;
    T Digit ;
    T Smallest ;
  cout<<"Smallest digits of each element are:\n";
    while(temp != NULL)
    {
        T No = temp->data;
        Smallest = temp->data;
        while(No != 0)
        {
            Digit = No % 10;
            if(Digit < Smallest)
            {
                Smallest = Digit;
            }
            No = No / 10; 
        }
        cout<<Smallest<<"\t";
        temp= temp->next;
    }
    cout<<"\n";
}

template<class T>
void Stack<T> ::DisplayLargeDigit()
{
    struct nodeS<T> * temp = First;
    T No;
    T Digit ;
    T Largest = 0;

    cout<<"Largest digits of each element are:\n";
    while(temp != NULL)
    {
        T No = temp->data;
        
        while(No != 0)
        {
            Digit = No % 10;
            if(Digit > Largest)
            {
                Largest = Digit;
            }
            No = No / 10; 
        }
        cout<<Largest<<"\t";
        Largest = 0;
        temp= temp->next;
    }
    cout<<"\n";
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                 //
//                                                  Tree Functions                                                //
//                                                                                                                //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template<class T>
Tree<T>::Tree()
{
    First = NULL;
}

template<class T>
void Tree<T>::Insert(T no)
{
    struct BST<T> * newn = new struct BST<T>;

    newn->data = no;
    newn->lchild = NULL;
    newn->rchild = NULL;

    struct BST<T> *Root = First;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        while(1)
        {
            if(no > Root->data)
            {
                if(Root->rchild == NULL)
                {
                    Root->rchild = newn;
                    break;
                }
                Root = Root->rchild;
            }
            else if(no < Root->data)
            {
                if(Root ->lchild == NULL)
                {
                    Root ->lchild = newn;
                    break;
                }
                Root = Root ->lchild;
            }
            else if( Root->data == no)
            {
                delete(newn);
                cout<<"Duplicate element is not allowed\n";
                break;
            }
        }

    }

}

template<class T>
bool Tree<T>::Search(T no)
{
    struct BST<T> * Root = First;
    bool bFlag = false;


        while(Root != NULL)
        {
            if(Root->data == no)
            {
            bFlag = true;
            break;
            }
            if(no < Root->data)
            {
                Root = Root->lchild;
            }
            else if(no > Root ->data)
            {
                Root = Root ->rchild;
            }
        }
    return bFlag;
}


template<class T>
void Tree<T>::Inorder(struct BST<T> * Root)
{
    if(Root != NULL)
    {
       Inorder(Root->lchild);
       cout<<Root->data<<"\t";
       Inorder(Root->rchild);
    }
}

template<class T>
void Tree<T>::Preorder(struct BST<T> * Root)
{
    if(Root != NULL)
    {
       cout<<Root->data<<"\t";
       Inorder(Root->lchild);
       Inorder(Root->rchild);
    }
}

template<class T>
void Tree<T>::Postorder(struct BST<T> * Root)
{
    if(Root != NULL)
    {
       Inorder(Root->lchild);
       Inorder(Root->rchild);
       cout<<Root->data<<"\t";
    }
}

template<class T>
int Tree<T>::CountEvenNodes(struct BST<T> * Root)
{
    static int Cnt = 0;

    if(Root != NULL)
    {
    if((Root ->data) % 2 == 0)
    {
        Cnt++;
    }
    CountEvenNodes((Root)->lchild);
    CountEvenNodes((Root)->rchild);
    }
    return Cnt;
}

template<class T>
int Tree<T>::CountOddNodes(struct BST<T> * Root)
{
    static int Cnt = 0;

    if(Root != NULL)
    {
    if(( (Root ->data) % 2 != 0 ))
    {
        Cnt++;
    }
    CountOddNodes((Root)->lchild);
    CountOddNodes((Root)->rchild);
    }
    return Cnt;
}

template<class T>
int Tree<T>::CountElement(struct BST<T> * Root)
{
    static int Cnt = 0;

    if(Root != NULL)
    {
    Cnt++;
    CountElement((Root)->lchild);
    CountElement((Root)->rchild);
    }
    return Cnt;
}

template<class T>
int Tree<T>::CountParentNodes(struct BST<T> * Root)
{
    static int Cnt = 0;

    if(Root != NULL)
    {
        if(Root ->lchild != NULL || Root->rchild != NULL)
        {
            Cnt++;
        }
    CountParentNodes((Root)->lchild);
    CountParentNodes((Root)->rchild);
    }
    return Cnt;
}
template<class T>
int Tree<T>::CountLeafNodes(struct BST<T> * Root)
{
    static int Cnt = 0;

    if(Root != NULL)
    {
        if(Root ->lchild == NULL && Root->rchild == NULL)
        {
            Cnt++;
        }
    CountLeafNodes((Root)->lchild);
    CountLeafNodes((Root)->rchild);
    }
    return Cnt;
}

template<class T>
int Tree<T>::SumOfTree(struct BST<T> * Root)
{
    static int Sum = 0;

    if(Root != NULL)
    {
        Sum = Sum + Root->data;
        SumOfTree(Root->lchild);
        SumOfTree(Root->rchild);
    }

    return Sum;
}

template<class T>
T Tree<T>:: MaximumNode(struct BST<T> * Root)
{
    static T Max = Root->data;

    if(Root != NULL)
    {
        if(Max < Root->data )
        {
            Max = Root->data;
        }
        MaximumNode(Root->lchild);
        MaximumNode(Root->rchild);
    }

    return Max;
}
template<class T>
T Tree<T>::MinimumNode(struct BST<T> * Root)
{
    static T Min = Root->data;

    if(Root != NULL)
    {
        if(Min > Root->data )
        {
            Min = Root->data;
        }
        MinimumNode(Root->lchild);

        MinimumNode(Root->rchild);
    }
    return Min;
}


int main()
{
    int Ret = 0;

    Tree<int> obj;
    obj.Insert(10);
    obj.Insert(600);
    obj.Insert(20);
    obj.Insert(2);
    obj.Insert(30);

    obj.Inorder(obj.First);

    cout<<"\n";
    obj.Inorder(obj.First);

    return 0;
}