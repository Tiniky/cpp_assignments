#include "Radiant.hpp"
#include "Plant.hpp"

Radiant* Radiant::create()
{
    return NoRad::Instance();
}

Alpha* Alpha::_instance = nullptr;
Alpha* Alpha::Instance()
{
    if(_instance == nullptr) {
        _instance = new Alpha();
    }
    return _instance;
}

int Alpha::transForm(int need, Puffancs *p)
{
    p->changeNut(2);

    if(p->isAlive()){
        return need + 10;
    } else{
        return need;
    }

    return need;
}

int Alpha::transForm(int need, Deltafa *d)
{
    d->changeNut(-3);

    if(d->isAlive()){
        if(d->getNut() < 5){
            return need - 4;
        } else if(d->getNut() >=5 && d->getNut() <=10){
            return need - 1;
        } else{
            return need;
        }
    }

    return need;
}

int Alpha::transForm(int need, Parabokor *b)
{
    b->changeNut(1);
    return need;
}

Delta* Delta::_instance = nullptr;
Delta* Delta::Instance()
{
    if(_instance == nullptr) {
        _instance = new Delta();
    }
    return _instance;
}

int Delta::transForm(int need, Puffancs *p)
{
    p->changeNut(-2);

    if(p->isAlive()){
        return need + 10;
    } else{
        return need;
    }

    return need;
}

int Delta::transForm(int need, Deltafa *d)
{
    d->changeNut(4);

    if(d->isAlive()){
        if(d->getNut() < 5){
            return need - 4;
        } else if(d->getNut() >=5 && d->getNut() <=10){
            return need -1;
        } else{
            return need;
        }
    }

    return need;

}

int Delta::transForm(int need, Parabokor *b)
{
    b->changeNut(1);
    return need;
}

NoRad* NoRad::_instance = nullptr;
NoRad* NoRad::Instance()
{
    if(_instance == nullptr) {
        _instance = new NoRad();
    }
    return _instance;
}

int NoRad::transForm(int need, Puffancs *p)
{
    p->changeNut(-1);

    if(p->isAlive()){
        return need + 10;
    } else{
        return need;
    }

    return need;
}

int NoRad::transForm(int need, Deltafa *d)
{
    d->changeNut(-1);

    if(d->isAlive()){
        if(d->getNut() < 5){
            return need - 4;
        } else if(d->getNut() >=5 && d->getNut() <=10){
            return need -1;
        } else{
            return need;
        }
    }

    return need;
}

int NoRad::transForm(int need, Parabokor *b)
{
    b->changeNut(-1);
    return need;
}
