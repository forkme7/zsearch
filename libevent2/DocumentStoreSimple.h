
#ifndef DOCUMENTSTORESIMPLE_H
#define DOCUMENTSTORESIMPLE_H

#include "IDocumentStore.h"
#include <map>
#include <memory>

using namespace std;

class DocumentStoreSimple : public IDocumentStore
{
	public:

		void addDoc(unsigned int docId, shared_ptr<IDocument> doc);

		void removeDoc(unsigned int docId);

		const map<unsigned int, shared_ptr<IDocument>>& getDocuments();

	private:
		map<unsigned int, shared_ptr<IDocument>> documents;
};

#endif