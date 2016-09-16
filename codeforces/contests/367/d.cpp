#include <bits/stdc++.h>

#define ff first
#define ll long long
#define ss second
#define mp make_pair
#define pb push_back

using namespace std;

struct trienode
{
	struct trienode* child[2];
	int count;
	unsigned int val;
	bool isleaf;
};

void insert( struct trienode* head, unsigned int num )
{
	struct trienode* temp = head;

	unsigned int chk = 2147483648, gennum = 0;

	while( chk > 0 )
	{
		temp->count++;
		if(temp->child[0] == NULL) 
		{
			struct trienode* lc;
			lc = new struct trienode;

			lc->isleaf = true;
			lc->val = (temp->val >> 1) + chk;
			lc->count = 0;
			lc->child[0] = NULL;
			lc->child[1] = NULL;

			temp->isleaf = false;
			temp->child[0] = lc;
		}
		if( temp->child[1] == NULL)
		{
			struct trienode* rc;
			rc = new struct trienode;

			rc->isleaf = true;
			rc->val = (temp->val >> 1);
			rc->count = 0;
			rc->child[0] = NULL;
			rc->child[1] = NULL;

			temp->isleaf = false;
			temp->child[1] = rc;
		}

		cout << "n" << bitset<32>(num) << " b" << bitset<32>((unsigned int)(chk&num)) << " c" << bitset<32>(chk) << " ";
		if( (unsigned int)(chk&num) == chk )
		{
			temp->count++;
			temp = temp->child[0];
			gennum += chk;
		}
		else
		{
			temp->count++;
			temp = temp->child[1];
		}

		cout << bitset<32>(gennum) << " "<<gennum << ";\n";
		chk = chk >> 1;
	}

}

void del(struct trienode* head, unsigned int num)
{
	struct trienode* temp = head;

	unsigned int chk = 2147483648;

	while(chk > 0)
	{

		if( chk&num == chk )
		{
			temp->count--;
			if(temp->count <= 0 )
			{
				delete temp->child[0];
				temp->isleaf = true;
				temp->child[0] = NULL;
				break;
			}
			else
			{
				temp = temp->child[0];
			}
		}
		else
		{
			temp->count--;
			if(temp->count <= 0 )
			{
				delete temp->child[1];
				temp->isleaf = true;
				temp->child[1] = NULL;
				break;
			}
			else
			{
				temp = temp->child[1];
			}
		}
	}
}

void xorsearch( struct trienode* head, unsigned int num )
{
	unsigned int tmp = ~num;
	struct trienode* temp = head;
	
	unsigned int chk = 2147483648;
	unsigned int curr = 0;

	while( (not temp->isleaf) and chk > 0 and temp!=NULL)
	{
		if( chk&tmp == chk )
		{
			curr = curr << 1;
			curr += 1;
			temp = temp->child[0];
		}
		else
		{
			curr = curr << 1;
			temp = temp->child[1];
		}
		chk = chk >> 1;
		cout << bitset<32>(~curr) << " ";
		

	}
	cout << ~curr << endl;
}

void printall(struct trienode* head, unsigned int curr)
{
	struct trienode* temp = head;

	unsigned int tmp = curr;

	if(temp->isleaf)
	{
		cout << temp->val << endl;
	}
	else
	{
		tmp = tmp << 1;
		printall(temp->child[0], tmp+1);
		printall(temp->child[1], tmp);
	}
}
int main()
{
	struct trienode* head;

	head = new struct trienode;
	head->isleaf = true;
	head->val = 0;
	head->count = 0;
	head->child[0] = NULL;
	head->child[1] = NULL;

	unsigned int n, x;
	cin >> n;
	string a;

	for ( int i = 0;i < n; i++ )
	{
		cin >> a >> x;
		cout << a << endl;
		switch(a[0])
		{
			case '+':{
				insert(head, x);
				printall(head, 0);
			}break;
			case '-':{
				del(head, x);
			}break;
			case '?':{
				cout << "search " << i <<" ";
				xorsearch(head, x);
			}break;
			default:{
				cout << "lol" << endl;
			}
		}

		cout << "\n\n" << endl;
	}	

	return 0;
}