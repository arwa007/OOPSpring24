/*
Name: Arwa Feroze
ID: 23k-0022
Assignment 2 Task 1
*/
#include <iostream>
#include <string>

using namespace std;

class SecurityTool {
protected:
    string securityLevel;
    float cost;
    int numOfDevices;

public:
    SecurityTool(string secLevel, float cost, int devices) : securityLevel(secLevel), cost(cost), numOfDevices(devices) {
        if (securityLevel != "High" && securityLevel != "Medium" && securityLevel != "Low") {
            cout << "Invalid security level. Setting to Low.\n";
            securityLevel = "Low";
        }
        if (cost <= 0) {
            cout << "Invalid cost. Setting to 1.\n";
            cost = 1;
        }
    }

    void performScan() {
        cout << "Performing a generic security scan.\n";
    }
};

class FirewallTool : public SecurityTool {
private:
    int* ports;
    string* protocols;

public:
    FirewallTool(string secLevel, float cost, int devices) : SecurityTool(secLevel, cost, devices) {
        ports = new int[23]; // Assuming max 23 ports as described
        generateList();
        protocols = new string[6]; // 6 allowed protocols
        protocols[0] = "HTTPS";
        protocols[1] = "FTP";
        protocols[2] = "UDP";
        protocols[3] = "ICMP";
        protocols[4] = "SSH";
        protocols[5] = "SNMP";
    }

    ~FirewallTool() {
        delete[] ports;
        delete[] protocols;
    }

    void generateList() {
        // Taking digit 2 from Student ID
        // Then next 23 numbers from 2 till 24 are allowed port numbers
        for (int i = 0; i < 23; ++i) {
            ports[i] = i + 3;
        }
    }

    void performScan() {
    SecurityTool::performScan();
    cout << "Firewall scanning...\n";

    if (securityLevel == "High") {
        cout << "High level security scan. Only traffic from specified ports and protocols allowed.\n";
    } else if (securityLevel == "Medium") {
        cout << "Medium level security scan. Allowing traffic from specified ports and protocols plus the next two ports.\n";
        // Allocate memory for additional ports
        int* tempPorts = new int[25]; // 23 ports + 2 additional
        // Copy existing ports
        for (int i = 0; i < 23; ++i) {
            tempPorts[i] = ports[i];
        }
        // Add next two ports
        tempPorts[23] = ports[22] + 1;
        tempPorts[24] = ports[22] + 2;
        delete[] ports;
        ports = tempPorts;
    } else if (securityLevel == "Low") {
        cout << "Low level security scan. Allowing traffic from specified ports and protocols plus the next 5 ports and TCP/DNS.\n";
        // Allocate memory for additional ports
        int* tempPorts = new int[28]; // 23 ports + 5 additional
        // Copy existing ports
        for (int i = 0; i < 23; ++i) {
            tempPorts[i] = ports[i];
        }
        // Add next 5 ports
        for (int i = 0; i < 5; ++i) {
            tempPorts[23 + i] = ports[22] + 3 + i;
        }
        delete[] ports;
        ports = tempPorts;
        // Allocate memory for additional protocols
        string* tempProtocols = new string[8]; // 6 protocols + 2 additional
        // Copy existing protocols
        for (int i = 0; i < 6; ++i) {
            tempProtocols[i] = protocols[i];
        }
        // Add TCP and DNS
        tempProtocols[6] = "TCP";
        tempProtocols[7] = "DNS";
        delete[] protocols;
        protocols = tempProtocols;
    }
}

};

int main() {
    cout << "Student ID & Name: 23K-0022 Arwa Feroze" << endl;
    FirewallTool firewall("High", 100, 10); // Assuming firewall set to high security level
    firewall.performScan();

    return 0;
}

