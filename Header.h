#include <iostream>
using namespace std;
class id {
private:
	int ID;
public:
	id() {
		ID = 0;
	}
	void setID(int Id) {
		ID = Id;
	}
	int getID() {
		return ID;
	}
};
class remarks {
private:
	string Remarks;
public:
	remarks() {
		Remarks = " ";
	}
	void setRemarks(string r) {
		Remarks = r;
	}
	string getRemarks() {
		return Remarks;
	}
};
class name {
private:
	string name;
public:
	string getName() {
		return name;
	}
	void setName(string n) {
		name = n;
	}
};
class title {
	string Title;
public:
	title() {
		Title = " ";
	}
	string getTitle() {
		return Title;
	}
	void setTitle(string t) {
		Title = t;
	}
};
class Tag: public id, remarks,name{
private:
public:
};
class Photo : public id, remarks, title{
private:
	string type;
	string privacy;
public:
	void setType(string t) {
		type = t;
	}
	void setPrivacy(string p) {
		privacy = p;
	}
	string getType() {
		return type;
	}
	string getPrivacy() {
		return privacy;
	}
};
class Album : public id, remarks, title{
private:
public:
	Album createAlbum() {
		id::id();
		remarks::remarks();
		title::title();
	}
};
class Member : public id, name {
private:
	string address;
	string contact;
public:
	void setAddress(string a) {
		address = a;
	}
	string getAddress() {
		return address;
	}
	void setContact(string c) {
		contact = c;
	}
	string getContact() {
		return contact;
	}
};
class Location : public id, remarks, name{
};