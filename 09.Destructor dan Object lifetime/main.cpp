#include <iostream>
#include <string>

using namespace std;

class Player{
    public :
        string name;

        Player(const char* name){
            Player::name = name;
            cout << "Player " << Player::name << " dibuat" << endl;
        }

        ~Player(){
            cout << "Player " << Player::name << " dihapus" << endl;
        }
};

void membuatPlayerStack(){
    Player stack_player = Player("Stack Player");
}

void membuatPlayerHeap(){
    Player* heap_player = new Player("Heap Player");
    delete heap_player;
}

void membuatPlayerStackPointer(Player* &playerPointer){
    Player stack_player = Player("Stack Player");
    playerPointer = &stack_player;
}

void membuatPlayerHeapPointer(Player* &playerPointer){
    Player*  heap_player = new Player("Heap Player");
    playerPointer = heap_player;
    // delete heap_player;
}

Player createPlayerStack(){
    Player stack_player = Player("Stack Player");
    return stack_player;
}

Player* createPlayerHeap(){
    Player* heap_player = new Player("Heap Player");
    return heap_player;
}


int main(){

    membuatPlayerStack();
    membuatPlayerHeap();
    
    cout << "\nMemory Leak" << endl;
    Player* stack_pointer1 ;
    membuatPlayerStackPointer(stack_pointer1);
    cout << stack_pointer1 << endl;


    Player* heap_pointer;
    membuatPlayerHeapPointer(heap_pointer);
    cout << heap_pointer->name << endl;
    heap_pointer->name = "acak-acakan";
    cout << heap_pointer->name << endl;
    delete heap_pointer;

    cout << "\nReturn" << endl; 
    
    {
        Player playerReturnStack = createPlayerStack();
        cout << playerReturnStack.name << endl;
    }
    

    Player* playerReturnHeap = createPlayerHeap();
    cout << playerReturnHeap->name << endl;
    delete playerReturnHeap;



    return 0;
}
