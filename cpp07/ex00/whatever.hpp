#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename sos>
void swap(sos &a, sos &b){
	sos temp = a;
	a = b;
	b = temp;
};

template <typename ses>
ses min(ses a, ses b) {
	return (a < b ? a : b);
};

template <typename sus>
sus max(sus a, sus b) {
	return (a > b ? a : b);
}

#endif