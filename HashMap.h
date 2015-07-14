#ifndef HASH_MAP
#define HASH_MAP

template <class K, class V>
class HashMap {
	public:
		void HashMap(int size = 50);
		~HashMap();
		V operator [](K key);
		V operator [](K key, V value);
		V get(K key);
		K put(V value);
	private:
		class BucketNode {
			public:
				void BucketNode(V value);
				~BucketNode();
				V getValue();
			private:
				V value;
				BucketNode* next;
		};
		BucketNode* buckets;
};

#endif

