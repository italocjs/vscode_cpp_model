

struct GPS_CLASS
{
   friend class MPA_LIB;
public:
   bool get() const       { return 1; }
   bool set() const     { return 1; }
   bool something();


   GPS_CLASS() : valid(false), updated(false), time(0)
   {}

private:
   bool valid, updated;
   int time, newTime;
};

class VIRLOC_CLASS
{
   friend class MPA_LIB;
public:
   bool begin();

   class VIRLOC_CT
   {
    public:
    int getValue(int ct, int value);
    int setValue(int ct, int value);
    int addValue(int ct, int value);

    private:
    int ct_map[30];
   };

   class VIRLOC_FLAG
   {
    public:
    int getValue(int flag, bool value);
    int setValue(int flag, bool value);
    private:
    int flag_map[30];
   };

    class VIRLOC_ID
   {
    public:
    int getValue(char * return_id);
    int setValue(char * return_id);
   };
   VIRLOC_CT CT;
   VIRLOC_ID ID;
   VIRLOC_FLAG FLAG;

private:
   bool a;
};



class MPA_LIB
{
    public:
    int a = 1;
    int b(int input);
    char MPA_ID_ASCII[6];
    
    GPS_CLASS GPS;
    VIRLOC_CLASS Virloc;




};


