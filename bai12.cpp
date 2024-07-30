#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Patient {
    int id;
    string name;
    string address;
};

class HospitalQueue {
private:
    queue<Patient> q;
    int next_id;

public:
    HospitalQueue() : next_id(1) {}

    int add_patient(const string& name, const string& address) {
        Patient patient = {next_id++, name, address};
        q.push(patient);
        return patient.id;
    }

    Patient serve_next_patient() {
        if (!q.empty()) {
            Patient next_patient = q.front();
            q.pop();
            return next_patient;
        } else {
            return {0, "", ""};
        }
    }

    int patients_waiting() const {
        return q.size();
    }
};

int main() {
    HospitalQueue hospital_queue;
    int id1 = hospital_queue.add_patient("Nguyen Van A", "123 Ðuong ABC");
    cout << "Benh nhan " << id1 << " da duoc them vào hang doi." << endl;

    int id2 = hospital_queue.add_patient("Tran Thi B", "456 Ðuong DEF");
    cout << "Benh nhan " << id2 << " dã duoc thêm vào hàng doi." << endl;

    Patient next_patient = hospital_queue.serve_next_patient();
    if (next_patient.id != 0) {
        cout << "Benh nhân tiep theo duoc phuc vu la: " << next_patient.id 
             << ", Ho ten: " << next_patient.name 
             << ", dia chi: " << next_patient.address << endl;
    } else {
        cout << "Không có benh nhân nào trong hàng doi." << endl;
    }
    cout << "Con " << hospital_queue.patients_waiting() << " benh nhan con duoc phuc vu." << endl;

    return 0;
}

