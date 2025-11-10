class MyHashMap {
public:

    vector<int> keys,values;

    MyHashMap() {}
    
    void put(int key, int value) {
        for(int i=0;i<keys.size();i++){
            if(keys[i]==key){
                values[i]=value;    
                return;
            }
        }
        
        keys.push_back(key);
        values.push_back(value);    
    }
    
    int get(int key) {
        for(int i=0;i<keys.size();i++){
            if(keys[i]==key){
                return values[i];
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for(int i=0;i<keys.size();i++){
            if(keys[i]==key){
                keys[i]=INT_MAX;
                values[i]=INT_MAX;
            }
        }
    }
};