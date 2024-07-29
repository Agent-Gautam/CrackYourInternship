class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        const long long MOD = 1000000007;
        long long n1 = 0;
        long long n2 = 0;
        Node* f = first;
        Node* s = second;
        while(f != NULL) {
            n1 = (n1*10 + f->data) % MOD;
            f = f->next;
        }
        while(s != NULL) {
            n2 = (n2*10 + s->data) % MOD;
            s = s->next;
        }
        long long product = (n1 * n2) % MOD;
        return product;
        
    }
};