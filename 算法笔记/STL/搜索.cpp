int search(node* head,int x){
	int count=0;
	node *p=head->next;
	while(p!=NULL){
		if(p->data==x){
			reurn p;
		}
		count++;
		p = p->next; 
	} 
	return count;
}

void insert(node* head,int pos,int x){
	node* p = head;
	//找到节点的前一位 
	for(int i=0;i<pos-1;i++){
		p = p->next;
	}
	node* q = new node;
	q->next = q->next;
	q->data = x;
	p->next = q;
} 

bool delete(node* head,int x){
	node* pre = head;
	node* p = head->next;
	while(p->data!=NULL)
		if(p->data==x){
			pre->next = p->next;
			free(p);
			p = pre->next;
		}else{
			pre = p;
			p = p->next;
		}	
	}
} 
