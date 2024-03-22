#ifndef COLLEGE_H
#define COLLEGE_H

template <class T1, class T2>
class College{
    T1* groupA;
    T2* groupB;
    int numGroupA, numGroupB, maxGroupA, maxGroupB;

    public:
        College(){
            maxGroupA = 100;
            numGroupA = 0;
            groupA = new T1[maxGroupA];
            maxGroupA = 100;
            maxGroupB = 0;
            groupA = new T2[maxGroupB];
        }
        
        College(T1* a, T2* b, int na, int nb, int ma, int mb){
            numGroupA = na;
            numGroupB = nb;
            maxGroupA = ma;
            maxGroupB = mb;
            groupA = new T1[maxGroupA];
            groupB = new T2[maxGroupB];

            for(int i = 0; i < na; i++){
                groupA[i] = a[i];
            }
            for(int i = 0; i < nb; i++){
                groupB[i] = b[i];
            }
        }

        College(const College<T1, T2>& rhs){
            numGroupA = rhs.numGroupA;
            numGroupB = rhs.numGroupB;
            maxGroupA = rhs.maxGroupA;
            maxGroupB = rhs.maxGroupB;
            groupA = new T1[maxGroupA];
            groupB = new T2[maxGroupB];

            for(int i = 0; i < rhs.numGroupA; i++){
                groupA[i] = rhs.groupA[i];
            }
            for(int i = 0; i < rhs.numGroupB; i++){
                groupB[i] = rhs.groupB[i];
            }
        }

        College& operator=(const College& rhs){
            numGroupA = rhs.numGroupA;
            numGroupB = rhs.numGroupB;
            maxGroupA = rhs.maxGroupA;
            maxGroupB = rhs.maxGroupB;
            groupA = new T1[maxGroupA];
            groupB = new T2[maxGroupB];

            for(int i = 0; i < rhs.numGroupA; i++){
                groupA[i] = rhs.groupA[i];
            }
            for(int i = 0; i < rhs.numGroupB; i++){
                groupB[i] = rhs.groupB[i];
            }

            return *this;
        }

        T1* getGroupA(){
            return groupA;
        }

        T2* getGroupB(){
            return groupB;
        }

        int getNumGroupA(){
            return numGroupA;
        }

        int getNumGroupB(){
            return numGroupB;
        }

        int getMaxGroupA(){
            return maxGroupA;
        }

        int getMaxGroupB(){
            return maxGroupB;
        }

        void addToGroupA(T1 g){
            if(maxGroupA == numGroupA){
                maxGroupA *= 2;
                T1* temp = new T1[maxGroupA];
                for(int i = 0; i < numGroupA; i++){
                    temp[i] = groupA[i];
                }
                delete[] groupA;
                groupA = temp;
            }
            groupA[numGroupA] = g;
            numGroupA++;
        }

        void addToGroupB(T2 g){
            if(maxGroupB == numGroupB){
                maxGroupB *= 2;
                T1* temp = new T1[maxGroupB];
                for(int i = 0; i < numGroupB; i++){
                    temp[i] = groupB[i];
                }
                delete[] groupB;
                groupB = temp;
            }
            groupB[numGroupB] = g;
            numGroupB++;
        }

        ~College(){
            delete[] groupA;
            delete[] groupB;
        }

};

#endif