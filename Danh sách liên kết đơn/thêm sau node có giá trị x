void themSauX(nodeptr head, int x, int y)
{
	if (head == NULL) {
		cout << "\nDanh sach rong!! ";
		return;
	}
	nodeptr p = head;
	while (p != NULL) {
		if (p->data == x) {
			nodeptr q = new Node; //tao ra 1 node moi
			q->data = y; //gan gia tri cho node moi;
			q->next = p->next; //gan node moi voi phan con lai
			q = p->next; //noi node p voi node moi 
			return;
		}
		p = p->next;
	}
	cout << "\nKhong tim thay gia tri x nao trong danh sach: ";
}
