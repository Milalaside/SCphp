#include<iostream>
using namespace std;

struct node
{
	int val;
	node *prev;
	node *next;
};

node *start;

void insert(int x)
{
	node *t = start;
	if (start!=NULL)
	{
		while(t->next!=NULL)
		{
			t=t->next;
		}
		node *n= new node;
		t->next=n;
		n->prev=t;
		n->val=x;
		n->next=NULL;
	}
	else
	{
		node *n= new node;
		n->val=x;
		n->prev=NULL;
		n->next=NULL;
		start=n;
	}
}

void remove(int x)
{
	node *t=start;
	while(t->val!=x)
	{
		t=t->next;
	}
	t->prev->next = t->next;
	t->next->prev = t->prev;
	delete t;
}

void search(int x)
{
	node *t= start;
	int found =0;
	while(t!=NULL)
	{
		if(t->val==x)
		{
			cout<<"\nDitemukan";
			found=1;
			break;
		}
		t=t->next;
	}
	if(found==0)
	{
		cout<<"\nTidak Ditemukan";
	}
}

void show()
{
	node *t=start;
	while(t!=NULL)
	{
		cout<<t->val<<"\t";
		t=t->next;
	}

}


void update_data(int old, int new1)
{
	node *h = new node;
	node *t = start;
	int pos = 0;
	if(start ==NULL)
	{
		printf("linked list tidak tersedia");
		return;
	}
	h=start;
	while(h->next!=NULL)
	{
		if (h->val==old)
		{
			h->val=new1;
			printf("\n%d DItemukan di posisi %d, dan diganti dengan %d\n", old, pos, new1);
			return;
		}
		h = h->next;
		pos++;
	}
	printf("%d tidak tersedia dalam list \n",old);
	
}

int main()
{
	int choice, x,old,new1;
	do
	{
		cout<<"\n1. Tambah Node";
		cout<<"\n2. Delete Node";
		cout<<"\n3. Cari Node";
		cout<<"\n4. Tampilkan Semua Node";
		cout<<"\n5. Update Node";
		cout<<"\n\nMasukkan Pilihan Anda : ";
		cin>>choice; 
		switch (choice)
		{
			case 1 : 	cout<<"\nMasukkan Node yang ingin ditambah : ";
					 	cin>>x;;
					 	insert(x);	break;
			case 2 : 	cout<<"\nMasukkan Node yang ingin dihapus : ";
						cin>>x;
						remove(x); 	break;
			case 3 : 	cout<<"\nMasukkan node yang akan dicari : ";
						cin>>x;
						search(x); 	break;
			case 4 : 	show();		break;

			case 5 :  	cout<<"Masukkan Data Yang Akan Diganti : "<<endl;
						cin>>old;
						cout<<"Diganti Dengan : "<<endl;
						cin>>new1;
						update_data(old,new1); break;
		}
	}
	while(choice!=0);

	return 0;
}
