#include<iostream>
#include<string>
#include<memory>
using namespace std;

class  Texture{
	private:
	string name;
	int width;
	int height;

public:
	 Texture(const string& n, int w, int h)
	        : name(n), width(w), height(h) {
	        cout << "[Texture Loaded]" << endl;
	    }

	~Texture(){
		cout<<"[Texture Released}"<<endl;

	}

	void display() const{
		 cout << "Texture: " << name << " (" << width << "x" << height << ")" << endl;
	}
};

//-----------------part B-------------------------------------------


class Shader {
	private:
	string name;
	string type ;

public:
	Shader(const string& n, const string& b )
	        : name(n), type(b) {
	        cout << " [Shader Compiled]" << endl;
	    }

	~Shader(){
		cout<<"[Shader Destroyed]"<<endl;

	}

	int getReferenceCount(const shared_ptr<Shader>& shaderPtr)const{
		return shaderPtr.use_count();

	}
};

class AudioClip {
    string name;
    double duration;
public:
    AudioClip(string n, double d) : name(n), duration(d) {}
    string getName() const {
    	return name;
    }
    double getDuration() const{
    	return duration;
    }
};

int main(){
	auto tex1 = make_unique<Texture>("player_sprite", 512, 512);
	tex1->display();

//	unique_ptr<Texture> tex2 = tex1;------error- unique_ptr cannot be copied. but it handover ownership
	//
	 unique_ptr<Texture> tex2 = move(tex1);
	 cout << "tex1 is null: " << (tex1 == nullptr ? "YES" : "NO") << endl<<endl<<endl<<endl;


	//-----Part b................
	 auto shader = make_shared<Shader>("main_vert", "vertex");
	 cout << "Ref count: " << shader.use_count() << endl;


	 {
	 auto rendererRef = shader;
	  cout << "Ref count: " << shader.use_count() << endl;

	  auto editorRef = shader;
	   cout << "Ref count: " << shader.use_count() << endl;
	 }
	   cout << "Ref count: " << shader.use_count() << endl;


	   auto audio = make_shared<AudioClip>("explosion", 3.5);
	   weak_ptr<AudioClip> observer = audio;

	   if (auto clip = observer.lock())
	    cout << "Clip alive: " << clip->getName() << endl;

	  audio.reset(); // unload

	   if (observer.expired())
	    cout << "Clip already unloaded." << endl;
	return 0;
}
