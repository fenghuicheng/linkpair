#ifndef LINKPAIRALGOIMP_HEADER
#define LINKPAIRALGOIMP_HEADER

template <typename T> class LinkPairVisitor;

template <typename T>
class LinkPairAlgo
{
	friend class LinkPairVisitor<T>;
public:
	void AddLinkPair(const T &from, const T &to);
	void Run(LinkPairVisitor<T>*);

private:
	void PrepareLinkInfo();
	void TrimLinksVector();

private:
	typedef typename std::vector<std::list<T> >::size_type LSIZET;

private:
	std::vector<T>	m_headElements;
	std::vector<T>	m_middleElements;
	std::set<T>	m_linkSet;
	std::vector<std::list<T> >	m_linkRelations;
};

#endif//LINKPAIRALGOIMP_HEADER
