#ifndef LINKPAIRVISITOR_HEADER
#define LINKPAIRVISITOR_HEADER

template <typename T> class LinkPairAlgo;

template <typename T>
class LinkPairVisitor
{
public:
	virtual void VisitLinkNodes(const LinkPairAlgo<T>*) = 0;
	virtual ~LinkPairVisitor() {}
protected:
	const std::vector<std::list<T> > &GetLinksVector(const LinkPairAlgo<T>*);
};

template <typename T>
class PrintVisitor : public LinkPairVisitor<T>
{
public:
	void VisitLinkNodes(const LinkPairAlgo<T>*);
};

#endif//LINKPAIRVISITOR_HEADER
