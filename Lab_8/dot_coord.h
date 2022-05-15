#ifndef DOTCOORD_H
#define DOTCOORD_H

template <class T>

class dotCoord {
    T X{0};
    T Y{0};

    public:
    dotCoord()=default;
    dotCoord(T _X, T _Y):X(_X),Y(_Y){};


	T GetX(){return X;};
	T GetY(){return Y;};

	void SetX(T _X){X = _X;};
	void SetY(T _Y){Y = _Y;};

	friend dotCoord operator + (dotCoord const &coord1, dotCoord const &coord2){dotCoord returnVal(coord1.X + coord2.X, coord1.Y + coord2.Y); return returnVal;};
	friend dotCoord operator / (dotCoord const &coord1, int const num){dotCoord returnVal(coord1.X / num, coord1.Y / num); return returnVal;};

	dotCoord operator = (int num){this->X = num; this->Y = num; return *this;};
	dotCoord operator = (dotCoord const &coord1){this->X = coord1.X; this->Y = coord1.Y; return *this;};
};

#endif // DOTCOORD_H

