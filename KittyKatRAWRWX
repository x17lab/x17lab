///
/// KittyKatRAWRWX.hpp
///

#ifndef KITTYKATRAWRWX_GUARD
#define KITTYKATRAWRWX_GUARD

#include <initializer_list>
#include <iostream>
#include <sstream>
#include <random>

#include "../KittyKatRWXDef/KittyKatRWXDef.hpp"



template<typename KittyT>
class KittyKatRAWRWX
{
public:

    /// <KittyComment>
    /// Using MeowTrivialCmdT as an representing a linked of a data pointer. 
    /// Make it easy to access to a data member.
    /// </KittyComment>
    using MeowTrivialCmdT = KittyT;

    /// <KittyComment>
    /// Raw pointer alias for a MeowTrivialCmdT object.
    /// Hide pointer from star.
    /// </KittyComment>
    using MEOWRAWRWXStarT = MeowTrivialCmdT*;

    /// <KittyComment>
    /// Meowzle of items.
    /// </KittyComment>
    using MEOWzleT        = size_t;

    /// <KittyComment>
    /// Newly dynamically allocated (raw) array class.
    /// The begginning of the memory block.
    /// </KittyComment>
    MEOWRAWRWXStarT         MEOWRef;

    /// <KittyComment>
    /// Used to a Meowzle. Amount of items.
    /// </KittyComment>
    MEOWzleT                MEOWMzlT;

    /// <KittyComment>
    /// Shrink items.
    /// </KittyComment>
    MEOWzleT                MEOWCap;

    /// <KittyComment>
    /// The dynamically allocated array class with 1 single item, and it's default value is 1.
    /// </KittyComment>
    explicit
    KittyKatRAWRWX()
    {
        /// <KittyComment>
        /// The internal function to set the internal size of array. 
        /// If called without argument set it to 1. 
        /// </KittyComment>           
        KittyRAWRWXInternal(1u);
    }

    /// <KittyComment>
    /// The dynamically allocated array class with given amount of items.
    /// </KittyComment>
    /// <KittyParam="MeowMzl">Items to initialize with.</KittyParam>
    explicit
    KittyKatRAWRWX(MEOWzleT MeowMzl)
    {
        /// <KittyComment>
        /// The internal function to set the internal size of array.
        /// Being called with argument to provide the size.      
        /// </KittyComment>
        KittyRAWRWXInternal(MeowMzl);
    }

    /// <KittyComment>
    /// The dynamically allocated array class with initializer list in it.
    /// </KittyComment>
    /// <KittyParam="MeowIL">Initializer list.</KittyParam> 
    explicit
    KittyKatRAWRWX(std::initializer_list<MeowTrivialCmdT> MeowIL)
    {
        /// <KittyComment>
        /// The internal function to set the internal size of array
        /// and taking initializer list as an argument.
        /// </KittyComment>             
        KittyRAWRWX(MeowIL);
    }

    /// <KittyComment>
    /// The dynamically allocated array class with vector in it.
    /// </KittyComment>
    /// <KittyParam="MeowVec">Vector with items.</KittyParam> 
    explicit
    KittyKatRAWRWX(std::vector<MeowTrivialCmdT> MeowVec)
    {
        /// <KittyComment>
        /// The internal function to set the internal size of array
        /// and taking std::vector<T> as an argument.           
        /// </KittyComment>  
        KittyRAWRWX(MeowVec);
    }

    /// <KittyComment>
    /// Deallocate and free memory used by this dynamically allocated array class.
    /// </KittyComment>
    ~KittyKatRAWRWX()
    {
        /// <KittyComment>
        /// Perform self destruction of items by using helper routines.
        /// Destruct by using "delete[]" operator in our case.
        /// </KittyComment>
        KittyEjectorInternal();

        /// <KittyComment>
        /// Destruct by setting array to nullptr, e.g. nullify the pointer.
        /// </KittyComment>
        KittyNullifyInternal();
    }

    /// <KittyComment>
    /// Checks if the array class should grow itself.
    /// </KittyComment>
    /// <KittyQuit>True if requires grow.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_BOOLEAN
    KittyRequireGrow() KITTYKAT_NOEXCEPT
    {
        /// <summary>
        /// Check if array requires grow itself.
        /// </summary>
        if (MEOWMzlT > MEOWCap)
        {
            return (true);
        }

        return (false);
    }

    
    /// <KittyComment>
    /// Direct access to the underlying contiguous storage.
    /// </KittyComment>
    /// <KittyQuit>Pointer to a data (beginning).</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    MEOWRAWRWXStarT 
    KittyRef() KITTYKAT_NOEXCEPT
    {
        /// </KittyComment>
        /// Check our raw pointer on null pointer (nullptr).
        /// </KittyComment>
        if (MEOWRef != (KITTYKAT_NULLPTR))
        {
            return (MEOWRef[0u]);
        }
    }

    /// <KittyComment>
    /// Get the amount of items in this dynamically allocated (raw) array class.
    /// </KittyComment>
    /// <KittyQuit>Amount of items.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    MEOWzleT KittySize()
    {
        /// <KittyComment>
        /// Check size on null (no items).
        /// </KittyComment>
        if ((KittyRatTrap()) <= (0u))
        {
            throw(std::invalid_argument("KittySize: is fully zeroed."));
        }

        return (MEOWMzlT);
    }

    /// <KittyComment>
    /// Get the capacity of the array.
    /// </KittyComment>
    /// <KittyQuit>Capacity.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    MEOWzleT KittyCapacity() KITTYKAT_NOEXCEPT
    {

        /// <KittyComment>
        /// Get the capacity for the array.
        /// </KittyComment>
        return (MEOWCap);
    }

    /// <KittyComment>
    /// Check dynamically allocated array is out of bounds 
    /// (internal check).
    /// </KittyComment>`
    /// <KittyParam="MeowMzl">Index to check.</KittyParam> 
    /// <KittyQuit>True if its in range.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_BOOLEAN
    KittyOutOfBounds(MEOWzleT MeowMzl) KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// Check on out of bounds.
        /// </KittyComment>
        if (MeowMzl >= MEOWMzlT)
        {
            return (true);
        }

        return (false);
    }

    /// <KittyComment>
    /// The dynamically allocated aray class with given amount of items, provided in argument.
    /// </KittyComment>
    /// <KittyParam="Meowzle">Items counter.</KittyParam>
    /// <KittyQuit>Pointer to an array.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    MEOWRAWRWXStarT
    KittyRAWRWX(MEOWzleT MEOWzleT) KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// Allocate the memory for the array by using C++'s "new" operator schema.
        /// </KittyComment>
        KITTYKAT_CONST MEOWRAWRWXStarT NewRef = (new (MeowTrivialCmdT[MEOWzleT]))();
        if (NewRef != (KITTYKAT_NULLPTR))
        {
            /// <KittyComment>
            /// The begginning of a memory block.
            /// <KittyComment>
            return (NewRef);
        }

        return (KITTYKAT_NULLPTR);
    }

    /// <KittyComment>
    /// The dynamically allocated aray class with items being located in a initializer list.
    /// </KittyComment>
    /// <KittyParam="MeowIL">Initializer list to take items from.</KittyParam>
    /// <KittyQuit>Pointer to an array.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KittyRAWRWX(std::initializer_list<MeowTrivialCmdT> MeowIL) KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// Call the internal function to set the internal size of array
        /// and taking std::initializer_list<T> as an argument. 
        /// </KittyComment>
        KittyRAWRWX(MeowIL.size());
      
        /// <KittyComment>
        /// Loop all items and append them one by one at the end.
        /// </KittyComment>
        for (decltype(MEOWMzlT) (Picker) : (MeowIL))
        {KittyAtEnd(Picker);}

        /// <KittyComment>
        /// Set the capacity.
        /// </KittyComment>
        MEOWCap = MEOWMzlT;

        return (0u);
    }

    /// <KittyComment>
    /// The dynamically allocated aray class with items being located in an another class instance.
    /// </KittyComment>
    /// <KittyParam="MeowClassRef">Class to take items from.</KittyParam>
    /// <KittyQuit>Pointer to an array.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KittyRAWRWX(KittyKatRAWRWX<MeowTrivialCmdT> MeowClassRef) KITTYKAT_NOEXCEPT
    {
        KittyRAWRWX(MeowClassRef.size());

        for (decltype(MEOWMzlT) (Picker) : (MeowClassRef))
        {KittyAtEnd(Picker);}

        MEOWCap = MEOWMzlT;

        return (0u);
    }

    /// <KittyComment>
    /// The dynamically allocated aray class with items being located 
    /// in an a vector class.
    /// </KittyComment>
    /// <KittyParam="MeowVecRef">Vector to take items from.</KittyParam>
    /// <KittyQuit>Pointer to an array.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KittyRAWRWX(std::vector<MeowTrivialCmdT> MeowVecRef) KITTYKAT_NOEXCEPT
    {
        KittyRAWRWX(MeowVecRef.size());

        for (decltype(MEOWMzlT) (Picker) : (MeowVecRef))
        {KittyAtEnd(Picker);}

        MEOWCap = MEOWMzlT;

        return (0u);
    }

    /// <KittyComment>
    /// Create dynamically allocated aray class with given amount of items, provided in argument.
    /// </KittyComment>
    /// <KittyParam="Meowzle">Counter.</param> 
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KittyRAWRWXInternal(MEOWzleT Meowzle) KITTYKAT_NOEXCEPT
    {
        MEOWRef  = new (MeowTrivialCmdT[Meowzle])();
        MEOWMzlT = {Meowzle};

        MEOWCap = MEOWMzlT;
    }

    /// <KittyComment>
    /// Check on sorted array using C++ TL's library facility.
     /// </KittyComment>
   /// <KittyQuit>True if sorted.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_BOOLEAN
    KittyIsSorted() KITTYKAT_NOEXCEPT
    {
        if KITTYKAT_CONSTEXPR(std::is_trivially_copyable_v<KittyT>)

        /// <KittyComment>
        /// Use C++ TL's function.
        /// </KittyComment>
        /// <KittyParam="MeowRef">Begginning of an raw array.</KittyParam>
        /// <KittyParam="MeowRef, MeowMzlT">End of an array.</KittyParam>
        if (std::is_sorted(MEOWRef, MEOWRef+MEOWMzlT))
        {
            return (true);
        }

        return (false);
    }
    
    /// <KittyComment>
    /// Sort the dynamically allocated array using C++ TL's facility provider.
     /// </KittyComment>
    /// <KittyQuit>True if sorted.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KittySort() KITTYKAT_NOEXCEPT
    {std::sort(MEOWRef, (MEOWRef+MEOWMzlT));}

    /// <KittyComment>
    /// Sort the dynamically allocated array using C++ TL's facility provider.
    /// Use variable Start to perform sorting with the exact position.
    /// </KittyComment>
    /// <KittyQuit>True if sorted.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KittySort(MEOWzleT Start) KITTYKAT_NOEXCEPT
    {std::sort((MEOWRef+Start), (MEOWRef+Start)+MEOWMzlT);}

    /// <KittyComment>
    /// Insert given item at the provided index in this array class.
    /// </KittyComment>
    /// <KittyParam="Index.">Index to insert.</param> 
    /// <KittyParam="Item.">Item to insert.</param> 
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KIttyInsertAt(MEOWzleT Index, MeowTrivialCmdT Item) KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// Allocate the new array.
        /// </KittyComment>
        MEOWRAWRWXStarT MEOWTempRef = KittyRAWRWX(MEOWMzlT+1u);
        if (MEOWTempRef != (KITTYKAT_NULLPTR))
        {
            /// <KittyComment>
            /// Copy all items from our original array to a temporary array.
            /// </KittyComment>
            std::copy(MEOWRef, (MEOWRef+Index), MEOWTempRef);
        }

        /// <KittyComment>
        /// Copy all items from our original array to a temporary array.
        /// </KittyComment>
        MEOWTempRef[Index] = (Item);

        /// <KittyComment>
        /// Actually just used DeepSeek here, have no idea how it works or lazy to figure out.
        /// </KittyComment>
        std::copy(MEOWRef+Index, MEOWRef+MEOWMzlT, MEOWTempRef+Item+1u);

        /// <KittyComment>
        /// Eject old dynamic array to assign on a new one.
        /// </KittyComment>
        KittyEjector(MEOWRef);

        /// <KittyComment>
        /// Assign to a new buffer, so actual raw array points to a new array.
        /// </KittyComment>
        MEOWRef = MEOWTempRef;

        MEOWMzlT++;
    }

    /// <KittyComment>
    /// Insert given std::vector<T> at the provided index in this array class.
    /// </KittyComment>
    /// <KittyParam="Index.">The new index to insert.</param>
    /// <KittyParam="MeowVec.">Vector to insert.</param>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KIttyInsertAt(MEOWzleT Index, std::vector<MeowTrivialCmdT> MeowVec) KITTYKAT_NOEXCEPT
    {
        MEOWzleT TemporaryIndex = 0u;
        for (MeowTrivialCmdT(Picker) : MeowVec)
        {
            /// <KittyComment>
            /// Call the insert function on each loop iterator.
            /// </KittyComment>
            KittyInsertAt(MEOWRef, MEOWMzlT, (Index+TemporaryIndex), MeowVec[TemporaryIndex]);
        }
    }

    /// <KittyComment>
    /// Insert given std::initializer_list<T> at the provided index in this array class.
    /// </KittyComment>
    /// <KittyParam="Index.">The new index to insert IL items.</param>
    /// <KittyParam="MeowIL.">Initializer list to insert.</param>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KIttyInsertAt(MEOWzleT Index, std::initializer_list<MeowTrivialCmdT> MeowIL) KITTYKAT_NOEXCEPT
    {
        MEOWzleT TemporaryIndex = 0u;
        for (MeowTrivialCmdT(Picker) : MeowIL)
        {
            KittyInsertAt(MEOWRef, MEOWMzlT, (Index+TemporaryIndex), MeowIL[TemporaryIndex]);
        }
    }

    /// <KittyComment>
    /// Find the index of an item, provided in argument (first occurance);
    /// </KittyComment>
    /// <KittyParam="MeowItem">Item to look at.</KittyParam>
    /// <KittyQuit>Index of an item.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    MEOWzleT
    KittyFindIndex(MeowTrivialCmdT MeowItem) KITTYKAT_NOEXCEPT
    {
        for (MeowTrivialCmdT(Picker) : MEOWRef)
        {
            if ((Picker) == MeowItem)
            {
                return (Picker);
            }
        }

        return(0u);
    }

    /// <KittyComment>
    /// Find the value at given index for this
    /// dynamically allocated array class.
    /// </KittyComment>
    /// <KittyParam="MeowIdx">Index to lookup at.</KittyParam>
    /// <KittyQuit>Value at given index.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    MeowTrivialCmdT
    KittyFindItem(MEOWzleT MeowIdx) KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// Temporary hold the needed index.
        /// </KittyComment>
        MEOWzleT QueryIdx;
        for (MeowTrivialCmdT(Picker) : MEOWRef)
        {
            if ((QueryIdx) == (MeowIdx))
            {
                MeowTrivialCmdT QueryTemp = MEOWRef[QueryIdx];
                return (QueryTemp);
            }
        }

        return (0u);
    }

    /// <KittyComment>
    /// Find the index of an item, provided in argument (all possible occurances),
    /// and put it in a TL's vector class.
    /// </KittyComment>
    /// <KittyParam="MeowVec">Vector to look at.</KittyParam>
    /// <KittyQuit>Vector with indexes.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    std::vector<MEOWzleT>
    KittyFindIndexVec(std::vector<MeowTrivialCmdT> MeowVec) KITTYKAT_NOEXCEPT
    {
        std::vector<MEOWzleT> VecReturn;
        for (MeowTrivialCmdT(Picker) : MeowVec)
        {
            if ((Picker) == MeowVec)
            {
                VecReturn.push_back(Picker);
            }
        }

        return (VecReturn);
    }

    /// <KittyComment>
    /// Transform dynamic array to std::vector<T>, e.g. TL's functional facility.
    /// </KittyComment>
    /// <KittyQuit>Vector with indexes.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    std::vector<MeowTrivialCmdT> KittyTransVec() KITTYKAT_NOEXCEPT
    {
        std::vector<MEOWzleT> Vec {};

        /// <KittyComment>
        /// The loop used to put all items from an raw array transform into std:vector<T>.
        /// </KittyComment>
        for (MeowTrivialCmdT(Picker) : MEOWRef)
        {
            Vec.push_back(Picker);
        }

        return {};
    }        

    /// <KittyComment>
    /// Check if there are items in this dynamically allocated array class does 
    /// equals to a passed initializer list.
    /// </KittyComment>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_BOOLEAN
    KittyEqualsIL(std::initializer_list<KittyT> MeowIL) KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// Quick check to not loop throught the whole array (IL version).
        /// </KittyComment>
        if (MeowIL.MEOWMzlT != MEOWMzlT)
        {
            return (false);
        }

        /// TODO.
        return (true);
    }

    /// <KittyComment>
    /// Check if there are items in this dynamically allocated array class does 
    /// equals to a passed another array class.
    /// </KittyComment>
    /// <KittyParam="MeowStarRef">Desired class to check on equality.</param>
    /// <KittyQuit>True in case allocated array class has items.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_BOOLEAN
    KittyEqualsClass(KittyKatRAWRWX<KittyT> MeowStarRef) KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// Quick check to not loop throught the whole array in case arrays doesn't equal
        /// to each other (class instance version).
        /// </KittyComment>
        if (MeowStarRef.MEOWMzlT != MEOWMzlT)
        {
            return (false);
        }

        /// <KittyComment>
        /// Check on two array's equality using C++ TL's function facility.
        /// We does use C++ TL's library.
        /// </KittyComment>
        /// <KittyParam="MeowRef">Check on equality (begginning of a dynamically allocated (raw) array).</KittyParam>
        /// <KittyParam="MeowRef, MeowMzlT">(End of dynamically allocated (raw) array.</KittyParam>
        /// <KittyParam="MeowStarRef.MeowRef">Begginning of a raw array.</KittyParam>
        /// <KittyParam="MeowStarRef.MeowRef, MeowStarRef.MeowMzlT>End of a raw array.</KittyParam>
        if (!std::equal(MEOWRef, MEOWRef+MEOWMzlT, MeowStarRef.MEOWRef, 
            MeowStarRef.MEOWRef+MeowStarRef.MEOWMzlT))
        {
            /// <KittyComment>
            /// All items in this array does equals to another array.
            /// </KittyComment>
            return (false);
        }

        /// <KittyComment>
        /// Doesn't equals, (e.g. different arrays).
        /// </KittyComment>
        return (true);
    }

    /// <KittyComment>
    /// Check if there are items in this dynamically allocated array class.
    /// </KittyComment>
    /// <KittyQuit>True in case allocated array class has items.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_BOOLEAN
    KittyRatTrap() KITTYKAT_NOEXCEPT
    {
        if ((MEOWMzlT) <= (0u))
        {
            throw(std::invalid_argument("KittyRatTrap:: MeowMzlT has been nulled."));
        }

        return (true);
    }

    /// <KittyComment>
    /// Check if there are items in the provided initializer list.
    /// </KittyComment>
    /// <KittyQuit>True in case initializer list has items.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_BOOLEAN
    KittyCheckNulls(std::initializer_list<MeowTrivialCmdT> MeowIL) KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// Check the size of an initializer list.
        /// </KittyComment>
        if (MeowIL.size())
        {
            return (true);
        }

        return (false);
    }

    /// <KittyComment>
    /// Check if there are items in the provided vector class.
    /// </KittyComment>
    /// <KittyParam="MeowVec">Vector with defined items.</KittyParam> 
    /// <KittyQuit>True in case vector has items.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_BOOLEAN
    KittyCheckNulls(std::vector<MeowTrivialCmdT> MeowVec) KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// Check the size of an std::vector<T>.
        /// </KittyComment>
        if (MeowVec.size())
        {
            return (true);
        }

        return (false);
    }

    /// <KittyComment>
    /// Check if proveded dynamically allocated array and it's index is valid.
    /// </KittyComment>
    /// <KittyParam="MeowStarRef">Dynamically allcated (raw) array to check.</KittyParam> 
    /// <KittyParam="MeowMzlT">Index to perform the needed checks.</KittyParam> 
    /// <KittyQuit>True in case array within the range.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_BOOLEAN
    KittyFlow(MEOWRAWRWXStarT MeowStarRef, MEOWzleT MEOWMzlT) KITTYKAT_CONST
    {
        /// <KittyComment>
        /// Some kind of trivial checks (internal checks).
        /// </KittyComment>
        if ((MeowStarRef) == (KITTYKAT_NULLPTR) ||
            (MEOWMzlT)    <= (0u))
        {
            throw(std::invalid_argument("KittyFlow:: error has been detected."));
        }

        return (false);
    }

    /// <KittyComment>
    /// Check if dynamically allocated array class has items in it.
    /// </KittyComment> 
    /// <KittyQuit>True in case has items.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_BOOLEAN
    KittyAvailable() KITTYKAT_NOEXCEPT
    {
        if ((MEOWMzlT) <= (0u))
        {
            throw(std::invalid_argument("KittyAvailable:: array has not items in it."));
        }

        return (true);
    }

    /// <KittyComment>
    /// Assign item for this dynamically allocated array class to a provided one.
    /// </KittyComment>
    /// <KittyParam="MeowItem">Value to set (index to set).</KittyParam>
    /// <KittyParam="MeowMzlT">Index to set.</KittyParam> 
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KittyYield(MeowTrivialCmdT MeowItem, MEOWzleT MEOWMzlT) KITTYKAT_CONST
    {
        /// <KittyComment>
        /// Check on out of bounds.
        /// </KittyComment>
        if (KittyOutOfBounds(MEOWMzlT))
        {
            throw(std::invalid_argument("KittyYield:: invalid argument."));
        }

        MEOWRef[MEOWMzlT] = {MeowItem};
    }

    /// <KittyComment>
    /// Assign this dynamocally allocated array class to another array (raw).
    /// </KittyComment>
    /// <KittyParam="MeowStarRef">Raw array."</KittyParam>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KittyYield(MEOWRAWRWXStarT MeowStarRef) KITTYKAT_CONST
    {
        if (MEOWRef     == (KITTYKAT_NULLPTR) ||
            MeowStarRef == (KITTYKAT_NULLPTR))
        {
            throw(std::invalid_argument("KittyYield:: invalid array."));
        }

        MEOWRef = {MeowStarRef};
    }

    /// <KittyComment>
    /// Change the size of this dynamically allocated array class (raw array).
    /// Allocate new buffer, and assign the new buffer to a raw array.
    /// </KittyComment>
    /// <KittyParam="NewRef">New size to set."</KittyParam>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KittySplicer(MEOWzleT MeowNewRef) KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// Create new temporary array used to hold items, and delete it later as we doesn't need it.
        /// </KittyComment>
        MEOWRAWRWXStarT Clear = new (std::nothrow)(MeowTrivialCmdT[MeowNewRef])();
        if (Clear != (KITTYKAT_NULLPTR))
        {
            std::move(MEOWRef, ((MEOWRef)+MeowNewRef), MEOWRef);
            if (Clear != (KITTYKAT_NULLPTR))
            {
                /// <KittyComment>
                /// Assign actual array with a new one.
                /// </KittyComment>
                MEOWMzlT = (MeowNewRef);
            }
        }

        /// <KittyComment>
        /// Perform array destruction (clear up memory, etc...).
        /// </KittyComment>
        KittyYield(Clear);

        KittyEjectorInternal (Clear);
        KittyNullify         (Clear);
    }

    /// <KittyComment>
    /// Change the size of this dynamically allocated array class (raw array), and fill it with required data.
    /// </KittyComment>
    /// <KittyParam="MeowNew">New size to change."</KittyParam>
    /// <KittyParam="MeowItem">Item to fill."</KittyParam>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KittySplicerAll(MEOWzleT MeowNew, MeowTrivialCmdT MeowItem) KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// Resize the raw array with a provided value in argument.
        /// </KittyComment>
        KittySplicer(MeowNew);

        if (MeowNew > 0u)
        {
            /// <KittyComment>
            /// Use std::fill to fill items with by using standart STL facility.
            /// </KittyComment>
            /// <KittyParam="MeowRef">The raw array.</KittyParam>
            /// <KittyParam="MeowRef, MeowMzlT">The length of an array.</KittyParam>
            /// <KittyParam="Mt19937">Item to fill array with.</KittyParam>
            std::fill(MEOWRef, MEOWRef+MEOWMzlT, MeowItem);
        }
    }

    /// <KittyComment>
    /// Finds the KittyComment of all items in this dynamically allocated array class.
    /// </KittyComment> 
    /// <KittyQuit>KittyComment of elements.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    MEOWzleT KittyKittyComment() KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// The variable used to hold the maximal amount of values on each loop.
        /// </KittyComment>
        MEOWzleT Summary = {0u};
        for (MeowTrivialCmdT(Picker) : MEOWRef)
        {
            /// <summary>
             /// Perform KittyComment.
             /// </KittyComment>
            (Summary += (Picker));
        }

        return (Summary);
    }

    /// <KittyComment>
    /// Finds the summary of all items which are positive or non positive.
    /// </summary> 
    /// <KittyQuit>KittyComment of all positive or non positive items.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    MEOWzleT KittySummaryPosNonPos(KITTYKAT_CONST KITTYKAT_BOOLEAN PosNonPos) KITTYKAT_NOEXCEPT
    {
        MEOWzleT PositiveOrNonPositive = {0u};
        for (MeowTrivialCmdT(Picker) : MEOWRef)
        {
            if (PosNonPos)
            {
                /// <KittyComment>
                /// Perform summary of positive items.
                /// </summary>
                if (PosNonPos > 0u)
                {
                    (PosNonPos += (Picker));
                }
            } else  {
                /// <KittyComment>
                /// Perform summary of non positive items.
                /// </summary>
                (PosNonPos += (Picker));
            }
        }

        return (PosNonPos);
    }

    /// <KittyComment>
    /// Randomize (chaos) the dynamically allocated (raw) array using STL functionality. 
    /// </KittyComment>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KittyChaos() KITTYKAT_NOEXCEPT
    {
        std::random_device   RandomDevice;
        std::mt19937 Mt19937(RandomDevice());

        /// <KittyComment>
        /// Snuffle the dynamic array with a standart STL provided facility.
        /// </KittyComment>
        /// <KittyParam="MeowRef">Begginning of a raw array.</KittyParam>
        /// <KittyParam="MeowRef, MeowMzlT">End of a raw array.</KittyParam>
        /// <KittyParam="Mt19937">Device.</KittyParam>
        std::shuffle(MEOWRef, (MEOWRef+MEOWMzlT), Mt19937);
    }

    /// <KittyComment>
    /// Copy items from another array class (raw array) into this array class.
    /// </KittyComment>
    /// <KittyParam="MeowStarRef">Raw array."</KittyParam>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KittyCopy(MEOWRAWRWXStarT MeowStarRef) KITTYKAT_NOEXCEPT
    {
        if (MeowStarRef != (KITTYKAT_NULLPTR) &&
            MEOWRef     != (KITTYKAT_NULLPTR))
        {
            /// <KittyComment>
            /// Copy items to another dynamically allocated (raw) array. 
            /// </KittyComment>
            /// <KittyParam="MeowRef">Begginning of a raw array.</KittyParam>
            /// <KittyParam="MeowStarRef">Desired raw array.</KittyParam>
            /// <KittyParam="MeowRef">Desired raw array.</KittyParam>
            std::copy((MEOWRef), (MeowStarRef), (MEOWRef));
        }
    }

    /// <KittyComment>
    /// Copy items from another array class (instance) into this array class.
    /// </KittyComment>
    /// <KittyParam="MeowStarRef">Raw array instance."</KittyParam>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KittyCopy(KittyKatRAWRWX<KittyT> MeowStarRef) KITTYKAT_NOEXCEPT
    {
         /// <KittyComment>
         /// Copy items to another raw array class instance.
         /// </KittyComment>
         /// <KittyParam="MeowStarRef.MeowRef">Class instance to take items from.</KittyParam>
         /// <KittyParam="MeowStarRef.MeowMzlT">Desired array.</KittyParam>
         std::copy(MeowStarRef.MEOWRef, MeowStarRef.MEOWMzlT);
    }

    /// <KittyComment>
    /// Clone the array by allocating memory for it, and fill with default calue.
    /// </KittyComment>
    /// <KittyQuit>The beggining of a memory block to allocate from.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    MEOWRAWRWXStarT KittyDeepCopy() KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// Deep clone of an array, e.g. allocaing memory and
        /// fill it with default items (nulls).
        /// </KittyComment>
        MEOWRAWRWXStarT DeepCopy = KittyRAWRWX(MEOWMzlT);
        if (DeepCopy != KITTYKAT_NULLPTR)
        {return (DeepCopy);}

        return (KITTYKAT_NULLPTR);
    }

    /// <KittyComment>
    /// Paws the whole dynamically allocated (raw) array class with given value.
    /// </KittyComment>
    /// <KittyParam="Item">Value to fill items with."</KittyParam>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KittyPawsItem(MeowTrivialCmdT Item) KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// Paws array class with desired items (the whole array class).
        /// </KittyComment>
        /// <KittyParam="MeowRef">The begginning of the array class.</KittyParam>
        /// <KittyParam="MeowRef, MeowMzlT">The final position.</KittyParam>
        /// <KittyParam="Item">The desired item to fill.
        std::fill(MEOWRef, (MEOWRef)+(MEOWMzlT), Item);}

    /// <KittyComment>
    /// Paws the whole dynamically allocated (raw) array class with nulls.
    /// </KittyComment>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KittyPawsNulls() KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// Paws array class with nulls.
        /// </KittyComment>
        KittyPawsNulls(0u);}

    /// <KittyComment>
    /// Reinverse the dynamically allocated (raw) array using STL functionality. 
    /// </KittyComment>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KittyMeowverse() KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// Reverses the array with c++ TL's facility provider.
        /// </KittyComment>
        /// <KittyParam="MeowRef">           The begginning of the array class.
        /// <KittyParam="MeowRef, MeowMzlT"> The final item.
        std::reverse(MEOWRef, (MEOWRef)+(MEOWMzlT));
    }

    /// <KittyComment>
    /// Switch two items by using C++ TL's std::swap facility provider.
    /// </KittyComment>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID 
    KittySwap(MEOWzleT MeowBegin, MEOWzleT MeowEnd) KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// Swaps the array with c++ TL's facility provider.
        /// Assuming std::swap check on array bounds.
        /// </KittyComment>
        /// <KittyParam="MeowBegin"> The desired item to replace from.
        /// <KittyParam="MeowEnd">   The desired item to replace to.
        std::swap(MeowBegin, MeowEnd);
    }

    /// <KittyComment>
    /// Append item in a dynamically allocated (raw) array class.
    /// </KittyComment>
    /// <KittyParam="MeowItem">Item to append."</KittyParam>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KittyAtEnd(MeowTrivialCmdT MeowItem) KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// Resize the array using internal function.
        /// </KittyComment>
        KittySplicer(MEOWMzlT+(1u));

        if (MEOWMzlT != (KITTYKAT_NULLPTR))
        {
            /// <KittyComment>
            /// Perform the append at the end of the array.
            /// </KittyComment>
            MEOWRef[MEOWMzlT+1u] = (MeowItem);
        }
    }

    /// <KittyComment>
    /// Append class instance in a dynamically allocated (raw) array class.
    /// </KittyComment>
    /// <KittyParam="MeowClassRef">Class to add."</KittyParam>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KittyAtEnd(KittyKatRAWRWX<MeowTrivialCmdT> MeowClassRef) KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// The internal loop used to append desired items at the end.
        /// TODO: replace it with ranged based for loop.
        /// </KittyComment>
        for (decltype(MEOWMzlT) WalkerRef = {0u};
            (WalkerRef) < (MEOWMzlT); 
             WalkerRef++
            )
        {
            MEOWRAWRWXStarT[WalkerRef] = (MeowClassRef.MEOWRef[WalkerRef]);
        }
    }

    /// <KittyComment>
    /// Finds the exact value in this dynamically allocated array class.
    /// </KittyComment> 
    /// <KittyParam="MeowQuery">Query value."</KittyParam>
    /// <KittyQuit>True in case has item.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_BOOLEAN
    KittyQuery(MeowTrivialCmdT MeowQuery) KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// Query the exact item in the array class. 
        /// </KittyComment>
        for (decltype(MEOWMzlT) (QueryExactItemRef) = {0u};
            (QueryExactItemRef) < (MEOWMzlT);
             QueryExactItemRef++
            )
        {
            /// <KittyComment>
            /// Check on item existance.
            /// </KittyComment>
            if (MEOWRef[QueryExactItemRef] == (MeowQuery))
            {return (true);}
        }

        return (false);
    }

    /// <KittyComment>
    /// Determine if provided value exist in this dynamically allocated (raw) aray.
    /// </KittyComment>
    /// <KittyParam="MeowQuery">Item to look at.</KittyParam> 
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_BOOLEAN
    KittyQueryBy(MeowTrivialCmdT MeowQuery) KITTYKAT_NOEXCEPT
    {
        if (std::find(MEOWRef, (MEOWRef+MEOWMzlT), MeowQuery) != (MEOWRef+MEOWMzlT))
        {
            // <KittyComment>
            /// True in case found the desired item.
            /// </KittyComment>
            return (true);
        }

        return (false);
    }
   
    /// <KittyComment>
    /// Get the first item in this dynamically allocated array class.
    /// </KittyComment> 
    /// <KittyQuit>First item in the array.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    MeowTrivialCmdT KittyFirst() KITTYKAT_NOEXCEPT
    {       
        if (MEOWRef != ((KITTYKAT_NULLPTR)))
        {
            /// <KittyComment>
            /// Returns the first item in the array class.
            /// </KittyComment>
            return (MEOWRef[0u]);
        }
    }

    /// <KittyComment>
    /// Get the last item in this dynamically allocated (raw) array class.
    /// </KittyComment> 
    /// <KittyQuit>Last item in the array.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    MeowTrivialCmdT KittyLast() KITTYKAT_NOEXCEPT
    {
        if (MEOWRef != ((KITTYKAT_NULLPTR)))
        {
            /// <KittyComment>
            /// Return the last item in the array class.
            /// </KittyComment>
            return ((MEOWRef[MEOWMzlT]));
        }
    }

    /// <KittyComment>
    /// Get the middle item in this dynamically allocated (raw) array class.
    /// </KittyComment> 
    /// <KittyQuit>Middle item in the array.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    MeowTrivialCmdT KittyMiddle() KITTYKAT_NOEXCEPT
    {
        if (MEOWRef != ((KITTYKAT_NULLPTR)))
        {
            KITTYKAT_CONST KITTYKAT_CONSTEXPR MeowTrivialCmdT MiddleItem = (MEOWRef[MEOWMzlT / 2u]) ;
            if (MiddleItem >  0u &&
                MiddleItem != 0u)
            {
                return (MiddleItem);
            }
        }

        return(0u);
    }


    /// <KittyComment>
    /// Determine if this dynamically allocated (raw) barray class has only even items.
    /// </KittyComment> 
    /// <KittyQuit>True in case all items are even.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_BOOLEAN
    KittyDevidedOnTwo() KITTYKAT_NOEXCEPT
    {
        for (decltype(MEOWMzlT) (Picker) : (MEOWRef))
        {
            /// <KittyComment>
            /// Check on quality on 2 (e.g. even number).
            /// </KittyComment>
            if ((Picker % (2u)) != (0u))
            {
                /// <KittyComment>
                /// All the array devides on two.
                /// </KittyComment>
                return (false);
            }
        }

        return (true);
    }
    
    /// <KittyComment>
    /// Check if this dynamically allocated (raw) array class is valid.
    /// </KittyComment>
    /// <KittyQuit>True in case array is valid.</KittyQuit>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_BOOLEAN
    KittyValidator() KITTYKAT_NOEXCEPT
    {
        if (MEOWRef != ((KITTYKAT_NULLPTR)))
        {
            /// <KittyComment>
            /// Null pointer check (internal routine).
            /// </KittyComment>
            throw(std::invalid_argument("KittyValidatorInternal:: invalid integrity."));
        }

        return (false);
    }

    /// <KittyComment>
    /// Destroy the dynamically allacated array using delete[] operator (internal routine).
    /// </KittyComment>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KittyEjectorInternal() KITTYKAT_NOEXCEPT
    {
        if (MEOWRef != ((KITTYKAT_NULLPTR)))
        {
            /// <KittyComment>
            /// Fix the memory collision of an internal array.
            /// </KittyComment>
            delete [] MEOWRef;
        }
    }

    /// <KittyComment>
    /// Destroy the dynamically allacated array using delete[] operator.
    /// </KittyComment>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID 
    KittyEjector(MEOWRAWRWXStarT MeowStarRef) KITTYKAT_NOEXCEPT
    {
        if (MeowStarRef != ((KITTYKAT_NULLPTR)))
        {
            /// <KittyComment>
            /// Fix the memory collision.
            /// </KittyComment>
            delete [] MeowStarRef;
        }
    }

    /// <KittyComment>
    /// Destroy the dynamically allacated array class (internal routine).
    /// </KittyComment>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID 
    KittyNullifyInternal() KITTYKAT_NOEXCEPT
    {
        /// <KittyComment>
        /// Fix the internal memory pointer (set on nullptr).
        /// </KittyComment>
        MEOWRef = (KITTYKAT_NULLPTR);
    }

    /// <KittyComment>
    /// Destroy the dynamically allacated array class.
    /// </KittyComment>
    /// <KittyParam="MeowStarRef">Raw array."</KittyParam>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID 
    x17labNullify(MEOWRAWRWXStarT MeowStarRef) KITTYKAT_NOEXCEPT
    {
        if (MeowStarRef != (KITTYKAT_NULLPTR))
        {
            /// <KittyComment>
            /// Fix the memory pointer (set on nullptr).
            /// </KittyComment>
            MeowStarRef = {(KITTYKAT_NULLPTR)};
        }
    }

    /// <KittyComment>
    /// Safely outputs textual information to the console interface.
    /// </KittyComment>
    /// <remarks>
    /// This method utilizes the <see cref="std::wcout"/> class 
    /// for basic text output operations.
    /// </remarks>
    KITTYKAT_MEGAFORZAINLINE
    KITTYKAT_VOID
    KittyStreamWriter() KITTYKAT_NOEXCEPT
    {
        std::wstringstream StreamWriter {};

        for (decltype(MEOWMzlT) StreamRef {0u};
            StreamRef < MEOWMzlT; 
            StreamRef++
            )        
        {StreamWriter << "Star: " << StreamRef << " Value: " <<
            MEOWRef[StreamRef] << " " << std::endl;}

        std::wcout << StreamWriter.str() << std::endl;
    }
};

#endif
