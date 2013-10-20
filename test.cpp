#include "include.h"
#include "visitor.h"
#include "linkpair.h"

int main()
{
	LinkPairAlgo<int> intAlgo;
	intAlgo.AddLinkPair(1, 3);	
	intAlgo.AddLinkPair(6, 7);	
	intAlgo.AddLinkPair(4, 5);	
	intAlgo.AddLinkPair(3, 4);	
	intAlgo.AddLinkPair(2, 6);	
	intAlgo.Run(new PrintVisitor<int>);
	return 0;
}
