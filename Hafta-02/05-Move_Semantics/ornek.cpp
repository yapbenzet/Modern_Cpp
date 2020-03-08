#include <iostream>
#include <algorithm>

class A
{
public:
    // Basit oluşturucu ile kaynakların ilklendirilmesi
    explicit A(size_t length)
            : mLength(length),
              mData(new int[length])
    {
        std::cout << "A(size_t). length = "
                  << mLength << "." << std::endl;
    }

    // Yokedici :)
    ~A()
    {
        std::cout << "~A(). length = " << mLength << ".";

        if (mData != NULL)
        {
            std::cout << " Deleting resource.";
            delete[] mData;  // Delete the resource.
        }

        std::cout << std::endl;
    }

    // Kopya oluşturucu
    A(const A& other)
            : mLength(other.mLength)
            , mData(new int[other.mLength])
    {
        std::cout << "A(const A&). length = "
                  << other.mLength << ". Copying resource." << std::endl;

        std::copy(other.mData, other.mData + mLength, mData);
    }

    // Kopya atama operatörü
    A& operator=(const A& other)
    {
        std::cout << "operator=(const A&). length = "
                  << other.mLength << ". Copying resource." << std::endl;

        if (this != &other)
        {
            delete[] mData;  // Free the existing resource.
            mLength = other.mLength;
            mData = new int[mLength];
            std::copy(other.mData, other.mData + mLength, mData);
        }
        return *this;
    }

    // Taşıma oluşturucusu
    A(A&& other)
            : mData(NULL)
            , mLength(0)
    {
        std::cout << "A(A&&). length = "
                  << other.mLength << ". Moving resource.\n";

        // Gelen veri işaretçisinden ilgili adresi ve boyutu al
        mData = other.mData;
        mLength = other.mLength;

        // Kaynak işaretçi tarafından adreslenen kaynağı salıver.
        // Bunu yapmaz isek bellek birden fazla sayıda boşaltılmaya çalışılır
        other.mData = NULL;
        other.mLength = 0;
    }

    // Taşıma atanma operatörü
    A& operator=(A&& other)
    {
        std::cout << "operator=(A&&). length = "
                  << other.mLength << "." << std::endl;

        if (this != &other)
        {
            // Mevcut verileri boşalt
            delete[] mData;

            // Gelen veri işaretçisinden ilgili adresi ve boyutu al
            mData = other.mData;
            mLength = other.mLength;

            // Kaynak işaretçi tarafından adreslenen kaynağı salıver.
            // Bunu yapmaz isek bellek birden fazla sayıda boşaltılmaya çalışılır
            other.mData = NULL;
            other.mLength = 0;
        }
        return *this;
    }

    // Verinin boyutu dönülür
    size_t Length() const
    {
        return mLength;
    }

private:
    // Verinin boyutu
    size_t mLength;

    // Veri
    int* mData;
};