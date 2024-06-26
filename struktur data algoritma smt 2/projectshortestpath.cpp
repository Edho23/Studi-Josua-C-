#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;

vector<string> nodes = {
    "Surabaya", "Gresik", "Sidoarjo", "Mojokerto", "Krian", "Jombang", "Bojonegoro", "Lamongan", "Tuban", "Madiun",
    "Ngawi", "Magetan", "Ponorogo", "Pacitan", "Kediri", "Nganjuk", "Tulungagung", "Blitar", "Trenggalek", "Malang",
    "Pasuruan", "Gempol", "Probolinggo", "Lumajang", "Kepanjen", "Bondowoso", "Situbondo", "Jember", "Banyuwangi", "Bangkalan",
    "Sampang", "Pamekasan", "Sumenep", "Batu", "Babat"
};

unordered_map<string, int> nodeIndex;

void initializeNodeIndex() {
    for (int i = 0; i < nodes.size(); ++i) {
        nodeIndex[nodes[i]] = i;
    }
}

vector<string> dijkstra(int startIdx, int endIdx, const vector<vector<int>>& graph) {
    int n = graph.size();
    vector<int> dist(n, INT_MAX);
    vector<int> prev(n, -1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    dist[startIdx] = 0;
    pq.push({0, startIdx});

    while (!pq.empty()) {
        int current = pq.top().second;
        pq.pop();

        if (current == endIdx) break;

        for (int next = 0; next < n; ++next) {
            if (graph[current][next] != INT_MAX) {
                int newDist = dist[current] + graph[current][next];

                if (newDist < dist[next]) {
                    dist[next] = newDist;
                    prev[next] = current;
                    pq.push({newDist, next});
                }
            }
        }
    }

    vector<string> path;
    for (int at = endIdx; at != -1; at = prev[at]) {
        path.push_back(nodes[at]);
    }
    reverse(path.begin(), path.end());

    if (path[0] == nodes[startIdx]) {
        return path;
    } else {
        return {};
    }
}

int main() {
    initializeNodeIndex();

    int n = nodes.size();
    vector<vector<int>> graph(n, vector<int>(n, INT_MAX));

    for (int i = 0; i < n; ++i) {
        graph[i][i] = 0;
    }

    vector<tuple<string, string, int>> edges = {
        {"Surabaya", "Gresik", 21}, {"Surabaya", "Sidoarjo", 20}, {"Surabaya", "Krian", 30}, {"Surabaya", "Bangkalan", 33},
        {"Gresik", "Sidoarjo", 54}, {"Gresik", "Mojokerto", 54}, {"Gresik", "Lamongan", 30}, {"Gresik", "Krian", 43},
        {"Sidoarjo", "Mojokerto", 40}, {"Sidoarjo", "Pasuruan", 38}, {"Sidoarjo", "Krian", 19}, {"Sidoarjo", "Gempol", 11},
        {"Mojokerto", "Jombang", 31}, {"Mojokerto", "Lamongan", 49}, {"Mojokerto", "Pasuruan", 65}, {"Mojokerto", "Batu", 65}, {"Mojokerto", "Krian", 20}, {"Mojokerto", "Gempol", 36},
        {"Jombang", "Lamongan", 85}, {"Jombang", "Kediri", 43}, {"Jombang", "Nganjuk", 39}, {"Jombang", "Babat", 55},
        {"Bojonegoro", "Lamongan", 67}, {"Bojonegoro", "Tuban", 42}, {"Bojonegoro", "Madiun", 98}, {"Bojonegoro", "Ngawi", 74}, {"Bojonegoro", "Nganjuk", 68}, {"Bojonegoro", "Babat", 37},
        {"Lamongan", "Tuban", 55}, {"Lamongan", "Babat", 29},
        {"Madiun", "Ngawi", 56}, {"Madiun", "Magetan", 24}, {"Madiun", "Ponorogo", 31}, {"Madiun", "Nganjuk", 50},
        {"Ngawi", "Magetan", 36},
        {"Magetan", "Ponorogo", 36},
        {"Ponorogo", "Pacitan", 76}, {"Ponorogo", "Trenggalek", 50},
        {"Pacitan", "Trenggalek", 107},
        {"Kediri", "Nganjuk", 32}, {"Kediri", "Tulungagung", 29}, {"Kediri", "Blitar", 43},
        {"Tulungagung", "Blitar", 36}, {"Tulungagung", "Trenggalek", 32},
        {"Blitar", "Malang", 81}, {"Blitar", "Kepanjen", 61},
        {"Malang", "Pasuruan", 53}, {"Malang", "Lumajang", 128}, {"Malang", "Batu", 20}, {"Malang", "Kepanjen", 19},
        {"Pasuruan", "Probolinggo", 38}, {"Pasuruan", "Gempol", 26},
        {"Probolinggo", "Lumajang", 50}, {"Probolinggo", "Situbondo", 97},
        {"Lumajang", "Jember", 65}, {"Lumajang", "Kepanjen", 109},
        {"Bondowoso", "Situbondo", 34}, {"Bondowoso", "Jember", 133},
        {"Situbondo", "Banyuwangi", 94},
        {"Jember", "Banyuwangi", 106},
        {"Bangkalan", "Sampang", 62},
        {"Sampang", "Pamekasan", 32},
        {"Pamekasan", "Sumenep", 53},
        {"Batu", "Mojokerto", 65},
    };

    for (const auto& edge : edges) {
        string u, v;
        int w;
        tie(u, v, w) = edge;
        int uIdx = nodeIndex[u];
        int vIdx = nodeIndex[v];
        graph[uIdx][vIdx] = w;
        graph[vIdx][uIdx] = w;  // Assuming the graph is undirected
    }

    while (true) {
        string start, end;
        cout << "\nMasukkan kota asal (atau 'exit' untuk keluar): ";
        cin >> start;
        if (start == "exit") break;
        cout << "Masukkan kota tujuan: ";
        cin >> end;
        if (end == "exit") break;

        int startIdx = nodeIndex[start];
        int endIdx = nodeIndex[end];

        vector<string> path = dijkstra(startIdx, endIdx, graph);

        if (!path.empty()) {
            cout << "Lintasan terpendek dari " << start << " ke " << end << " adalah: ";
            for (const string& city : path) {
                cout << city << " ";
            }
            cout << endl;
        } else {
            cout << "Tidak ada lintasan dari " << start << " ke " << end << endl;
        }
    }

    return 0;
}