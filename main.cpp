int main(){
//Jai Shree Ram
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string keys[] = { "the", "a", "there", "answer", "any", "by", "bye", "their", "hero", "heroplane" };
    int n = sizeof(keys) / sizeof(keys[0]);
 
    for (int i = 0; i < n; i++)
        insert(rootTrie, keys[i]);
//nice
struct TrieNode
{
    // each node stores a map to its child nodes
    unordered_map<char, TrieNode*> map;
 
    // true when the node is a leaf node
    bool isLeaf = false;
 
    // collection to store a complete list of words in the leaf node
    unordered_set<string> word;
};
  for (char c: word)
    {
        // insert only uppercase characters
        if (isupper(c))
        {
            // create a new node if the path doesn't exist
            if (curr->map.find(c) == curr->map.end()) {
                curr->map[c] = new TrieNode();
            }
//good
