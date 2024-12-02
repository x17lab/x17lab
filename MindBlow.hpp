///
/// MindBlow.hpp
///

#ifndef MINDBLOW_GUARD
#define MINDBLOW_GUARD

#include <initializer_list>
#include <iostream>
#include <sstream>


template<typename MindBlowStreamType>
class MindBlow
{
public:

    /// <summary>
    /// Shortcut for a data type.
    /// </summary>
    using x17labMindStreamerT         = MindBlowStreamType;

    /// <summary>
    /// Shortcut for a pointer.
    /// </summary>
    using x17labMindStreamerPtrT      = x17labMindStreamerT*;

    /// <summary>
    /// Shortcut for a size.
    /// </summary>
    using x17labMindStreamerSizeTT   = size_t;

    /// <summary>
    /// Other definitions.
    /// </summary>
    #define x17labRWXInline          inline
    #define x17labRWXNoThrow         noexcept
    #define x17labRWXThrow           throw
    #define x17labRWXNullPtr         nullptr

    /// <summary>
    /// STL shortcuts.
    /// </summary>
    #define x17labInfuse             std::fill
    #define x17labCopy               std::memcpy

    /// <summary>
    /// Dynamically allocated (raw) array.
    /// </summary>
    x17labMindStreamerPtrT          x17labMindStreamerRAWRWX;

    /// <summary>
    /// Count of items (track counter).
    /// </summary>
    x17labMindStreamerSizeTT        x17labMindStreamerSynchro;

    /// <summary>
    /// Newly dynamically allocated array class with 1 single item, and it's default value is 1.
    /// </summary>
    explicit
    x17labRWXInline
    MindBlow()
    {x17labDekTheRaw(1u);}

    /// <summary>`
    /// Newly dynamically allocated array class with given amount of items.
    /// </summary>
    /// <param name="Synchro">Count of items to initialize items.</param>
    explicit
    x17labRWXInline
    MindBlow(x17labMindStreamerSizeTT Synchro)
    {x17labDekTheRaw(Synchro);}

    /// <summary>
    /// Newly dynamically allocated array class with initializer list in it.
    /// </summary>
    /// <param name="SuperNovaIL">Initializer list.</param> 
    explicit
    x17labRWXInline
    MindBlow(std::initializer_list<x17labMindStreamerT> SuperNovaIL)
    {
        x17labDekTheRaw(SuperNovaIL.size());

        if ((SuperNovaIL.size()) <= (0u))
        {x17labRWXThrow (std::invalid_argument("MindBlow:: invalid argument has been passed."));}

        decltype(x17labMindStreamerSynchro) ILIterator {0u};
        for (x17labMindStreamerT (Picker) : (SuperNovaIL))
        {
            x17labMindStreamerRAWRWX[ILIterator] = (Picker);
            ILIterator++;
        }
    }

    /// <summary>
    /// Destructor (deallocate and free memory used by this dynamically allocated array class).
    /// </summary>
    x17labRWXInline
    ~MindBlow()
    {
        x17labEjector();
        x17labNullify();
    }

    /// <summary>
    /// Get the amount of items in this dynamically allocated array class.
    /// </summary>
    /// <returns>Amount of items.</returns>
    x17labRWXInline
    x17labMindStreamerSizeTT x17labMindStreamerSynchrohronizer()
    {
        if ((x17labNull()) <= (0u))
        {x17labRWXThrow (std::invalid_argument("x17labMindStreamerSynchrohronizer:: x17lab is fully zeroed."));}

        return (x17labMindStreamerSynchro);

    }

    /// <summary>
    /// Check dynamically allocated array is out of bounds (internal check).
    /// </summary>
    /// <param name="Synchro">Index to check.</param> 
    /// <returns>True if its in range.</returns>
    x17labRWXInline
    bool x17labOverflow(x17labMindStreamerSizeTT Synchro)
    {
        if ((Synchro) >= (x17labMindStreamerSynchro))
        {x17labRWXThrow (std::invalid_argument("x17labOverflow:: overflow has been detected."));}
        
        return (true);
    }

    /// <summary>
    /// Create dynamically allocated aray class with given amount of items,  provided in argument.
    /// </summary>
    /// <param name="x17labSynchro">Tracker of items.</param> 
    x17labRWXInline
    void x17labDekTheRaw(x17labMindStreamerSizeTT Synchro) x17labRWXNoThrow
    {
        x17labMindStreamerRAWRWX  = new (x17labMindStreamerT[Synchro])();
        x17labMindStreamerSynchro =  {Synchro};
    }

    /// <summary>
    /// Check if there are items in this dynamically allocated array class.
    /// </summary>
    /// <returns>True in case allocated array class has items.</returns>
    x17labRWXInline
    bool x17labNull() x17labRWXNoThrow
    {
        if ((x17labMindStreamerSynchro) <= (0u))
        {x17labRWXThrow (std::invalid_argument("x17labNull:: Synchro has been nulled."));}

        return (true);
    }

    /// <summary>
    /// Check if there is an initialiizer list in this dynamically allocated array class.
    /// </summary>
    /// <param name="SuperNovaIL">Initializer list to perform the needed checks.</param> 
    /// <returns>True in case has an initializer list.</returns>
    x17labRWXInline
    bool x17labSuperNovaILOverflow(std::initializer_list<x17labMindStreamerT> SuperNovaIL)
    {
        if ((SuperNovaIL.size()) <= (0u))
        {x17labRWXThrow (std::invalid_argument("x17labSuperNovaILOverflow:: argument is out of range."));}      

        return (true);
    }

    /// <summary>
    /// Check if proveded dynamically allocated array and it's index is valid.
    /// </summary>
    /// <param name="MindStreamRaw">Dynamically allcated (raw) array to check.</param> 
    /// <param name="Synchro">Index to perform the needed checks.</param> 
    /// <returns>True in case array within the range.</returns>
    x17labRWXInline
    bool x17labFlow(x17labMindStreamerPtrT MindStreamRaw, x17labMindStreamerSizeTT Synchro)
    {
        if ((MindStreamRaw) == (x17labRWXNullPtr) ||
            (Synchro) <= (0u))
        {
            x17labRWXThrow (std::invalid_argument("x17labFlow:: error has been detected."));
        }

        return (false);
    }

    /// <summary>
    /// Check if dynamically allocated array class has items in it.
    /// </summary> 
    /// <returns>True in case has items.</returns>
    x17labRWXInline
    bool x17labIsAvailable() x17labRWXNoThrow
    {
        if ((x17labMindStreamerSynchro) <= (0u))
        {x17labRWXThrow (std::invalid_argument("x17labIsAvailable:: array has not items in it."));}

        return (true);
    }

    /// <summary>
    /// Assign item for this dynamically allocated array class to a provided one.
    /// </summary>
    /// <param name="StreamerValue">Value to set.</param>
    /// <param name="Synchro">Index to set.</param> 
    x17labRWXInline
    void x17labYield(x17labMindStreamerT StreamerValue, x17labMindStreamerSizeTT Synchro)
    {
        if (x17labOverflow(Synchro))
        {x17labRWXThrow (std::invalid_argument("x17labYield:: invalid argument."));}

        x17labMindStreamerRAWRWX[Synchro] = {StreamerValue};
    }

    /// <summary>
    /// Assign this dynamocally allocated array class to another array (raw).
    /// </summary>
    /// <param name="MindStreamerPtr">Raw array."</param>
    x17labRWXInline
    void x17labYield(x17labMindStreamerPtrT MindStreamerPtr)
    {   
        if (x17labMindStreamerRAWRWX    == (x17labRWXNullPtr) ||
            MindStreamerPtr             == (x17labRWXNullPtr))
        {
            x17labRWXThrow(std::invalid_argument("x17labYield:: invalid array."));
        }

        x17labMindStreamerRAWRWX = MindStreamerPtr;
    }

    /// <summary>
    /// Change the size of this dynamically allocated array class (raw array).
    /// Allocate new buffer, and assign the new buffer to a raw array. 
    /// </summary>
    /// <param name="New">New size."</param>
    x17labRWXInline
    void x17labShrinkify(x17labMindStreamerSizeTT New) x17labRWXNoThrow
    {
        x17labMindStreamerPtrT MindStreamPtrNew = new x17labMindStreamerT[New]();
        if (MindStreamPtrNew != (x17labRWXNullPtr))
        {
            x17labCopy((MindStreamPtrNew), x17labMindStreamerRAWRWX, (x17labMindStreamerSynchro * sizeof(x17labMindStreamerT)));
            if (MindStreamPtrNew != (x17labRWXNullPtr))
            {
                x17labMindStreamerSynchro = (New);
            }
        }

        x17labYield(MindStreamPtrNew);

        x17labEjector(MindStreamPtrNew);
        x17labNullify(MindStreamPtrNew);
    }

    /// <summary>
    /// Change the size of this dynamically allocated array class (raw array), and fill it with required data.
    /// </summary>
    /// <param name="New">New size to change."</param>
    /// <param name="Value">Value to fill."</param>
    x17labRWXInline
    void x17labShrinkifyAll(x17labMindStreamerSizeTT New, x17labMindStreamerT Value) x17labRWXNoThrow
    {
        x17labShrinkify(New);
        x17labInfuse(x17labMindStreamerRAWRWX, (x17labMindStreamerRAWRWX) + (x17labMindStreamerSynchro), Value);
    }
    
    /// <summary>
    /// Infuse the dynamically allocated array with given value (whole array).
    /// </summary>
    /// <param name="Value">Value to fill with."</param>
    void x17labInfuseAll(x17labMindStreamerT Value) x17labRWXNoThrow
    {Infuse(x17labMindStreamerRAWRWX, (x17labMindStreamerRAWRWX) + (x17labMindStreamerSynchro), Value);}

    /// <summary>
    /// Infuse the dynamically allocated array with given value.
    /// </summary>
    /// <param name="Value">Value to fill with."</param>
    void x17labInfuseAt(x17labMindStreamerSizeTT At, x17labMindStreamerT Value) x17labRWXNoThrow
    {Infuse(x17labMindStreamerRAWRWX, (x17labMindStreamerRAWRWX)+(x17labMindStreamerSynchro), Value);}

    /// <summary>
    /// Finds the summaty of all items in this dynamically allocated array class.
    /// </summary> 
    /// <returns>Summary of elements.</returns>
    x17labRWXInline
    x17labMindStreamerSizeTT x17labSummary() x17labRWXNoThrow
    {
        x17labMindStreamerSizeTT Summary = {0u};

        for (x17labMindStreamerT (Picker) : x17labMindStreamerRAWRWX)
        {(Summary += (Picker));}

        return (Summary);
    }

    /// <summary>
    /// Finds the maximal value if this dynamically allocated array class.
    /// </summary> 
    /// <returns>Maximal item.</returns>
    x17labRWXInline
    x17labMindStreamerSizeTT x17labFindMax() x17labRWXNoThrow
    {
        x17labMindStreamerSizeTT Maximal = {0u};
        for (decltype(x17labMindStreamerSynchro) QueryMaximalIt = {0u}; (QueryMaximalIt) <
            (x17labMindStreamerSynchro);
             QueryMaximalIt++)
        {
            if (x17labMindStreamerRAWRWX[QueryMaximalIt] > Maximal)
            {Maximal = (x17labMindStreamerRAWRWX[QueryMaximalIt]);}
        }

        return (Maximal);
    }

    /// <summary>
    /// Append item in a dynamically allocated array class. 
    /// </summary>
    /// <param name="Value">Value to append."</param>
    x17labRWXInline
    void x17labAppend(x17labMindStreamerT Value) x17labRWXNoThrow
    {
        x17labShrinkify(x17labMindStreamerSynchro + (1u));
        x17labMindStreamerRAWRWX[x17labMindStreamerSynchro + 1u] = Value;
    }
    
    /// <summary>
    /// Append initializer list in a dynamically allocated array class. 
    /// </summary>
    /// <param name="SuperNovaIL">Initializer list."</param>
    x17labRWXInline
    void x17labAppendIL(std::initializer_list<x17labMindStreamerT> SuperNovaIL) x17labRWXNoThrow
    {
    }

    /// <summary>
    /// Append class instance in a dynamically allocated array class.  
    /// </summary>
    /// <param name="Class">Class to add."</param>
    x17labRWXInline
    void x17labAppendClass(MindBlow<x17labMindStreamerT> Class) x17labRWXNoThrow
    {
        for (decltype(x17labMindStreamerSynchro) ClassIt = {0u};
            (ClassIt) < (x17labMindStreamerSynchro); 
             ClassIt++
            )
        {
            x17labMindStreamerPtrT[ClassIt] = (Class.x17labMindStreamerRAWRWX[ClassIt]);
        }
    }

    /// <summary>
    /// Adds item in a dynamically allocated array class. 
    /// </summary>
    /// <param name="Idx">Index to add."</param>
    x17labRWXInline
    void x17labAddByIdx(x17labMindStreamerSizeTT Idx) x17labRWXNoThrow
    {
    }

    /// <summary>
    /// Adds item in a dynamically allocated array class. 
    /// </summary>
    /// <param name="Value">Value to add."</param>
    x17labRWXInline
    void x17labRemove(x17labMindStreamerT Value) x17labRWXNoThrow
    {

    }

    // <summary>
    /// Removes item in a dynamically allocated array class by provided index. 
    // </summary>
    // <param name="Idx">Index to remove."</param>
    x17labRWXInline
    void x17labRemoveByIdx(x17labMindStreamerSizeTT Idx) x17labRWXNoThrow
    {
    }

    // <summary>
    /// Reinvert the dynamically allocated array class. 
    // </summary>
    x17labRWXInline
    void x17labReinvert() x17labRWXNoThrow
    {
    }

    // <summary>
    /// Reinvert the dynamically allocated array class. 
    // </summary>
    x17labRWXInline
    void x17labReinvert(MindBlow<x17labMindStreamerT> Reinvert) x17labRWXNoThrow
    {
    }

    // <summary>
    /// Reinvert the dynamically allocated array class by having initializer list. 
    // </summary>
    x17labRWXInline
    void x17labReinvert(std::initializer_list<x17labMindStreamerT> ReinvertIL) x17labRWXNoThrow
    {
    }

    /// <summary>
    /// Finds the exact value in this dynamically allocated array class.
    /// </summary> 
    /// <returns>True in case array class contains an item.</returns>
    x17labRWXInline
    bool x17labQuery(x17labMindStreamerT Query) x17labRWXNoThrow
    {
        for (decltype(x17labMindStreamerSynchro) (QueryIt) = {0u}; 
            (QueryIt) < (x17labMindStreamerSynchro);
             QueryIt++)
        {
            if (x17labMindStreamerRAWRWX[QueryIt] == (Query))
            {return (true);}
        }

        return (false);
    }

    /// <summary>
    /// Get the first element in this dynamically allocate array class.
    /// </summary> 
    /// <returns>First element in the array.</returns>
    x17labRWXInline
    x17labMindStreamerT First() x17labRWXNoThrow
    {return (x17labMindStreamerRAWRWX[0u]);}

    /// <summary>
    /// Get the last element in this dynamically allocate array class.
    /// </summary> 
    /// <returns>Last element in the array.</returns>
    x17labRWXInline
    x17labMindStreamerT Last() x17labRWXNoThrow
    {return (x17labMindStreamerRAWRWX[x17labMindStreamerSynchro]);}

    /// <summary>
    /// Check if this dynamically allocated array class is valid.
    /// </summary>
    /// <returns>True in case array is valid.</returns>
    x17labRWXInline
    bool x17labIntegrity() x17labRWXNoThrow
    {
        if (x17labMindStreamerRAWRWX != x17labRWXNullPtr)
        {
            x17labRWXThrow(std::invalid_argument("x17labIntegrity:: invalid intergity."));
        }

        return (false);
    }

    /// <summary>
    /// Destroy the dynamically allacated array using delete[] operator (internal).
    /// </summary>
    x17labRWXInline
    void x17labEjector() x17labRWXNoThrow
    {
        if (x17labMindStreamerRAWRWX != (x17labRWXNullPtr))
        {delete [] x17labMindStreamerRAWRWX;}
    }

    /// <summary>
    /// Destroy the dynamically allacated array using delete[] operator.
    /// </summary>
    x17labRWXInline
    void x17labEjector(x17labMindStreamerPtrT MindStreamerPtr) x17labRWXNoThrow
    {
        if (MindStreamerPtr != (x17labRWXNullPtr))
        {delete [] MindStreamerPtr;
}
    }

    /// <summary>
    /// Destroy the dynamically allacated array class (internal). 
    /// </summary>
    x17labRWXInline
    void x17labNullify() x17labRWXNoThrow
    {x17labMindStreamerRAWRWX = (x17labRWXNullPtr);}

    /// <summary>
    /// Destroy the dynamically allacated array class. 
    /// </summary>
    /// <param name="MindStreamerPtr">Raw."</param>
    x17labRWXInline
    void x17labNullify(x17labMindStreamerPtrT MindStreamerPtr) x17labRWXNoThrow
    {MindStreamerPtr = (x17labRWXNullPtr);}

    /// <summary>
    /// Print content by using console.
    /// </summary>
    x17labRWXInline
    void x17labStringlyfi() x17labRWXNoThrow
    {
        std::wstringstream WStreamStringlyfi{};
        for (decltype(x17labMindStreamerSynchro) SynchroIt {0u}; SynchroIt < x17labMindStreamerSynchro; SynchroIt++)
        {
            WStreamStringlyfi << "StreamerIdx: " << SynchroIt << " Value: " << x17labMindStreamerRAWRWX[SynchroIt] << " " << std::endl;
        }

        std::wcout << WStreamStringlyfi.str() << std::endl;
    }
};

#endif