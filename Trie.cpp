struct Trie{
    bool endOfWord;
    map<char,Node *> children;
    Trie(){
        this->endOfWord = false;

    }
};
void insert(string S){
    Trie * c = root;
    for(char it:S){
        if(c->children[it]==NULL){
            c->children[it] =  new Trie();
        }
        c=c->children[it];
    }
    c->endOfWord = true;
}
bool search(string S){
    Trie *c = root;
    for(char it:S){
        if(c->children[it]==NULL){
            return false;
        }
        c=c->children[it];
    }
    return c->endOfWord;
}
