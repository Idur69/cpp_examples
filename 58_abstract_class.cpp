#include<iostream>
using namespace std;

class CWI{
    protected:
        string title;
        float rating;
    public:
        CWI(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display()=0;  // do nothing function --> pure virtual function
};
class CWIVideo: public CWI{
    protected:
        int videolen;
    public:
        CWIVideo(string s, float r, int vlen): CWI(s, r){
           videolen = vlen; 
        }
        void display(){
            cout << "This is the amzing with video title" << title <<endl;
            cout << "Rating " << rating << " Out of 5 stars" <<endl;
            cout << "Length of the video is " << videolen << " minutes"<<endl;

        }
};
class CWIText: public CWI {
    protected:
        int words;
    public:
        CWIText(string s, float r, int wc):CWI(s, r){
            words = wc;
        }
        void display(){
            cout << "This is the amzing  title" << title <<endl;
            cout << "Rating " << rating << "Out of 5 stars" <<endl;
            cout << "words count are " << words<<endl;

        }
};

int main() {
    string title;
    
    float rating;
    int vlen, wc;
    // for videos
    title = " Cpp tutorial for videos";
    rating = 4.5;
    vlen = 30;
    
    CWIVideo djvideo(title, rating, vlen);
    //djvideo.display();

    // for Text 
    title = " Cpp tutorial for text";
    rating = 7.5;
    wc = 430;
    CWIText djtext(title, rating, wc);
    //djtext.display();
    // invoke by using pointer
    CWI* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();
    return 0 ;
}