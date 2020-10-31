
int passarray(int a[] , int size)
{
  int sum =0;
  for(int i=0;i<size;i++)
    sum+=a[i];

return sum;
}

int main()
{
int a[] = {1,2,3,4,5,6,7};

int sum = passarray(a,7);

cout<<"Complete Sum: "<<sum<<endl;

sum = passarray(a+2,5);

cout<<"Partial Sum starting from 2nd index: "<<sum<<endl;

return 0;
}
