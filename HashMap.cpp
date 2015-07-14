#include <HashMap.h>

void HashMap::HashMap(int size) {
	this->size = size;

	this->buckets = new BucketNode* [this->size];

	for (int i = 0; i < this->size; ++i)
	{
		this->buckets[i] = nullptr;
	}
}

void HaspMap::deleteList(BucketNode* node) {
	BucketNode* next;

	do {
		next = node->next;
		delete node;
		node = next;
	} while (node);
}

HashMap::~HashMap() {
	for (int i = 0; i < this->size; ++i)
	{
		if (this->buckets[i] != nullptr) {
			this->deleteList(this->buckets[i]);
		}
	}

	delete [] this->buckets;
}

V HashMap::operator [](const K & key) {

}

V HashMap::operator [](const K & key, const V & value) {

}

V HashMap::get(const K & key) {

}

K HashMap::put(const V & value) {
	
}