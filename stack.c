#include <stdio.h>

int main()
{

}

struct Node
{
  ElementType Element;
  PtrToNode Next;
};

int isEmpty(Stack S)
{
  return S->Next == NULL;
}

Stack CreateStack(void)
{
  Stack S;
  S = malloc(sizeof(struct Node));

  if(S != NULL)
  {
    S->Next = NULL;
    MakeEmpty(S);
    return S;
  }
}

void MakeEmpty(Stack S)
{
  if(S != NULL)
  {
    while(!isEmpty(S))
    {
      Pop(S);
    }
  }
}


void Push(ElementType X, Stack S)
{
  PtrToNode TmpCell;
  TmpCell = malloc(sizeof(struct Node));
  if(TmpCell != NULL)
    TmpCell->Element = X;
    TmpCell->Next = S->Next;
    S->Next = TmpCell;
}


ElementType Top(Stack S)
{
  if(!isEmpty(S))
    return S->Next->Element;

  return 0;
}

void Pop(Stack S)
{
  PtrToNode FirstCell;
  if(!isEmpty(S))
  {
    FirstCell = S->Next;
    S->Next = S->Next->Next;
    free(FirstCell);
  }
}
