class OnlineSession {
private:
    int SessionID;
    char SessionName[50];
    char Trainer[20];
public:
    OnlineSession();
    void storesessiondetails(int id, const char sname[], const char trainer[]);
    void updatesessiondetails();
    void displaysessiondetails();
    ~OnlineSession();
};
