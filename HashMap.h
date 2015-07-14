#ifndef HASH_MAP
#define HASH_MAP

template <class K, class V>
class HashMap {
	public:
		void HashMap(int size = 50);
		~HashMap();
		V operator [](const K & key);
		V operator [](const K & key, const V & value);
		V get(const K & key);
		K put(const V & value);
	private:
		class BucketNode {
			public:
				void BucketNode(const V & value);
				~BucketNode();
				V getValue();
			private:
				void deleteList(BucketNode* node);
				V value;
				BucketNode* next;
		};
		BucketNode** buckets;
		int size;
};

#endif

