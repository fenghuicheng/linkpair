linkpair
========

This is a generic algorithm for fabricating the longest links from misordered from-to pair input. Visitor pattern, gcc precompiled header and template explicit instantiation are demonstrated as well.

File Organization:
	linkpair.h/.imp : algorithm's body;
	visitor.h/.imp : visitor for fetching or any other behaviors on the algorithm's results;
	template.cpp : explicit instantiation for the above templates;
	test.cpp : a testing case for the algorithm.
	
Dependencies:
	visitor <==> linkpair;
	template ==> visitor linkpair;
