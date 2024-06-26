#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <bitset>
#include <string>

using namespace std;

// Node structure for the Huffman Tree
struct Node {
    char ch;
    int freq;
    Node *left, *right;
    Node(char ch, int freq) : ch(ch), freq(freq), left(nullptr), right(nullptr) {}
    Node(char ch, int freq, Node *left, Node *right) : ch(ch), freq(freq), left(left), right(right) {}
};

// Comparator to be used in priority queue
struct compare {
    bool operator()(Node* left, Node* right) {
        return left->freq > right->freq;
    }
};

// Function to generate Huffman codes
void generateCodes(Node* root, string str, unordered_map<char, string> &huffmanCode) {
    if (!root)
        return;

    // Found a leaf node
    if (!root->left && !root->right) {
        huffmanCode[root->ch] = str;
    }

    generateCodes(root->left, str + "0", huffmanCode);
    generateCodes(root->right, str + "1", huffmanCode);
}

// Function to decode Huffman encoded string
string decodeHuffman(Node* root, const string &encodedStr) {
    string decodedStr = "";
    Node* current = root;
    for (char bit : encodedStr) {
        if (bit == '0') {
            current = current->left;
        } else {
            current = current->right;
        }

        // Reach a leaf node
        if (!current->left && !current->right) {
            decodedStr += current->ch;
            current = root;
        }
    }
    return decodedStr;
}

// Function to build the Huffman Tree and generate codes
void buildHuffmanTree(const string &text) {
    // Count frequency of appearance of each character
    unordered_map<char, int> freq;
    for (char ch : text) {
        freq[ch]++;
    }

    // Create a priority queue to store live nodes of the Huffman Tree
    priority_queue<Node*, vector<Node*>, compare> pq;

    // Create a leaf node for each character and add it to the priority queue
    for (auto pair : freq) {
        pq.push(new Node(pair.first, pair.second));
    }

    // Do it until the size of queue is not 1
    while (pq.size() != 1) {
        // Remove the two nodes of highest priority (lowest frequency) from the queue
        Node* left = pq.top(); pq.pop();
        Node* right = pq.top(); pq.pop();

        // Create a new internal node with these two nodes as children and with frequency equal to the sum of the two nodes' frequencies
        int sum = left->freq + right->freq;
        pq.push(new Node('\0', sum, left, right));
    }

    // Root stores pointer to the root of Huffman Tree
    Node* root = pq.top();

    // Traverse the Huffman Tree and store Huffman Codes in a map
    unordered_map<char, string> huffmanCode;
    generateCodes(root, "", huffmanCode);

    cout << "Huffman Codes are:\n";
    for (auto pair : huffmanCode) {
        cout << pair.first << " " << pair.second << '\n';
    }

    cout << "\nOriginal string was:\n" << text << '\n';

    // Print encoded string
    string encodedStr = "";
    for (char ch : text) {
        encodedStr += huffmanCode[ch];
    }

    cout << "\nEncoded string is:\n" << encodedStr << '\n';

    // Convert the encoded string to ASCII 8-bit
    string ascii8bitStr = "";
    cout << "\nEncoded string in ASCII 8-bit is:\n";
    for (size_t i = 0; i < encodedStr.size(); i += 8) {
        string byte = encodedStr.substr(i, 8);
        if (byte.size() < 8) {
            byte.append(8 - byte.size(), '0');  // Pad with zeros if necessary
        }
        bitset<8> bits(byte);
        char asciiChar = bits.to_ulong();
        ascii8bitStr += asciiChar;
        cout << asciiChar;
    }

    cout << "\n\nEncoded string in extended ASCII is:\n";
    for (size_t i = 0; i < encodedStr.size(); i += 8) {
        string byte = encodedStr.substr(i, 8);
        if (byte.size() < 8) {
            byte.append(8 - byte.size(), '0');  // Pad with zeros if necessary
        }
        bitset<8> bits(byte);
        cout << char(128 + bits.to_ulong());
    }

    // Decode the encoded string
    string decodedStr = decodeHuffman(root, encodedStr);
    cout << "\n\nDecoded string is:\n" << decodedStr << '\n';
}

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    buildHuffmanTree(text);

    return 0;
}