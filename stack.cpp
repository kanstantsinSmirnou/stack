class stack {
    int i, n;
    lll* a;
    public:
    stack();
    stack(int sz);
    void push(lll &x);
    lll pop();
    lll top();
    bool empty();
    bool full();
    void clear();
    void resize(int sz);
    ~stack();
};

stack::stack() {
    i = 0;
    n = 15;
    a = new lll[15];
}

stack::stack(int sz) {
    i = 0;
    n = sz;
    a = new lll[sz];
}

void stack::push(lll &x) {
    if (full()) {
        return;
    }
    *(a + i) = x;
    ++i;
}

lll stack::pop() {
    if (empty()) {
        return 0ll;
    }
    --i;
    return *(a + i);
}

lll stack::top() {
    if (empty()) {
        return 0ll;
    }
    return *(a + i - 1);
}

bool stack::empty() {
    return (!i);
}

bool stack::full() {
    return (i == n);
}

void stack::clear() {
    i = 0;
}

void stack::resize(int sz) {
     if (sz <= n) {
        return;
    }
    lll* b = new lll[sz];
    for (int i = 0; i < n; ++i) {
        b[i] = a[i];
    }
    delete [] a;
    a = b;
    n = sz;
}

stack::~stack() {
    delete [] a;
}
