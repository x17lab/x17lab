///
/// MindFl4r3RAWRWX.hpp
///

#ifndef MINDFL4R3RAWRWX_GUARD
#define MINDFL4R3RAWRWX_GUARD

#include <initializer_list>
#include <algorithm> 
#include <random>
#include <iostream>
#include <sstream>

#include "..//CoreDefinitionsRWX//CoreDefinitionsRWX.hpp"


template<typename MindFl4r3RAWRWXKib3rneticKatzT>
class MindFl4r3RAWRWX
{
public:

    /// <summary>
    /// A wrapper class for a dynamic array that provides a flexible and efficient way to manage
    /// a collection of elements.
    /// </summary> 
    using x17LabMindFl4r3RAWRWXRealPtrT = MindFl4r3RAWRWXKib3rneticKatzT;

    /// <summary>
    /// Represents a raw pointer of a dynamic array or linker shortcut.
    /// </summary>
    using x17LabMindFl4r3RAWRWXStarT    = x17LabMindFl4r3RAWRWXRealPtrT*;

    /// <summary>
    /// Represents a size value used for linking operations. 
    /// </summary>
    using x17LabN3xusVault_QuantumStore = size_t;

    /// <summary>
    /// Represents a dynamically allocated (raw) array.
    /// </summary>
    x17LabMindFl4r3RAWRWXStarT            x17LabMindFl4r3RAWRWXRealPtr;

    /// <summary>
    /// Maintains a count of the items.
    /// </summary>   
    x17LabN3xusVault_QuantumStore         x17LabSynapticFlowwwwwwww;

    /// <summary>
    /// Capacity of items.
    /// Used to grow or shrink items.
    /// </summary>   
    x17LabN3xusVault_QuantumStore         x17LabMindFl4r3X17Capacity;

    /// <summary>
    /// A dynamically allocated array class designed to contain a single integer item.
    /// The array is initialized with a default value of 1.
    /// </summary>
    explicit
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    MindFl4r3RAWRWX()
    {
        x17LabCoreNEXUSCORERAWRWXInternal(1u);
    }

    /// <summary>
    /// Encapsulate a class for dynamically allocating an array with a specified number of elements.
    /// </summary>
    /// <param name="KiberKatzN3xora">The number of elements to initialize in the array.</param>
    explicit
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    MindFl4r3RAWRWX(x17LabN3xusVault_QuantumStore KiberKatzN3xora)
    {
        x17LabCoreNEXUSCORERAWRWXInternal(KiberKatzN3xora);
    }

    /// <summary>
    /// A newly dynamically allocated array class that supports an initializer list.
    /// </summary>
    /// <param name="NovaIL">The initializer list used to populate the array.</param>
    explicit
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    MindFl4r3RAWRWX(x17LabNE0XMindFl4r3RAWRWXC0nst_Katz std::initializer_list<x17LabMindFl4r3RAWRWXRealPtrT> NovaIL)
    {
        x17LabCoreNEXUSCORERAWRWXInternal(NovaIL.size());

        if ((NovaIL.size()) <= (0u))
        {
            x17LabMindFl4r3RAWRWXTHROW(std::invalid_argument("MindFl4r3RAWRWX:: invalid argument has been passed."));
        }

        decltype(x17LabSynapticFlowwwwwwww) ActualNovaILIterator {0u};
        for (x17LabMindFl4r3RAWRWXRealPtrT(PickerT) : (NovaIL))
        {
            x17LabMindFl4r3RAWRWXRealPtr[ActualNovaILIterator] = (PickerT);
            ActualNovaILIterator++;
        }
    }

    /// <summary>
    /// Destructor (deallocate and free memory used by this dynamically allocated array class).
    /// </summary>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    ~MindFl4r3RAWRWX()
    {
        x17LabF4TALDestroyInternal();
        x17LabF4T4LNullifyInternal();
    }

    /// <summary>
    /// Check if the provided dynamic array should grow itself.
    /// </summary>
    /// <returns>True if requires to grow.</returns>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXB00leanT x17LabGrowFactor() x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        if ((x17LabSynapticFlowwwwwwww) > (x17LabMindFl4r3X17Capacity))
        {
            return (x17LabTRUE);
        }

        return (x17LabFALSE);
    }

    /// <summary>
    /// Retrieves the total count of elements currently stored in this dynamically allocated array.
    /// </summary>
    /// <returns>The total number of elements in the array.</returns>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabN3xusVault_QuantumStore x17LabMindFl4r3RAWRWXKiberKatzN3xoraFn() x17LabNE0XMindFl4r3RAWRWXC0nst_Katz
    {
        if ((x17LabNull()) <= (0u))
        {x17LabMindFl4r3RAWRWXTHROW(std::invalid_argument("x17Lab is fully zeroed."));}

        return (x17LabSynapticFlowwwwwwww);
    }

    /// <summary>
    /// Decrease the size of the dynamically allocated array class on 1. 
    /// </summary>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXV0idT x17LabR3moveLast() x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        if (x17LabSynapticFlowwwwwwww > 0u)
        {
            x17LabSynapticFlowwwwwwww--;
        }
    }

    /// <summary>
    /// Tests if provided index is valid, i.e. equals or not equals to zero, or another case of validation.
    /// </summary>
    /// <param name="x17LabX17MindCh3ckPr0xyEntity">Index to perform checks.</param>
    /// <returns>True in case ranges valid.</returns>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXB00leanT x17LabXMindCh3ckProxy(x17LabNE0XMindFl4r3RAWRWXC0nst_Katz
        x17LabN3xusVault_QuantumStore Validity) x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        if (Validity < (x17LabSynapticFlowwwwwwww))
        {
            return (x17LabTRUE);
        }
       
        return (x17LabFALSE);
    }

    /// <summary>
    /// Check dynamically allocated array is out of bounds (internal check).
    /// </summary>
    /// <param name="KiberKatzN3xora">Index to check.</param>
    /// <returns>True if its in range.</returns>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXB00leanT x17LabOutOfRange(x17LabN3xusVault_QuantumStore KiberKatzN3xora)
    {
        if ((KiberKatzN3xora) >= (x17LabSynapticFlowwwwwwww))
        {
            x17LabMindFl4r3RAWRWXTHROW(std::invalid_argument("x17LabOutOfRange:: overflow has been detected."));
        }

        return (x17LabTRUE);
    }

    /// <summary>
    /// Create dynamically allocated aray class with given amount of items, provided in argument.
    /// </summary>
    /// <param name="KiberKatzN3xora">The number of elements to allocate in the array.</param>
    /// <returns>Pointer to an array.</returns>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXRealPtrT x17LabCoreNEXUSRAWRWX(x17LabN3xusVault_QuantumStore KiberKatzN3xora) x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        x17LabMindFl4r3RAWRWXStarT (RAWCoreX) = new (x17LabMindFl4r3RAWRWXRealPtrT[KiberKatzN3xora])();
        if ((RAWCoreX) != (x17LabRAWRAWRWXV0idPtrT))
        { 
            x17LabMindFl4r3X17Capacity = ((KiberKatzN3xora) * 2u);
            return (RAWCoreX);}
        
        x17LabMindFl4r3X17Capacity = ((KiberKatzN3xora) * 2u);
        return (x17LabRAWRAWRWXV0idPtrT);
    }

    /// <summary>
    /// Create dynamically allocated aray class with given amount of items,  provided in argument.
    /// </summary>
    /// <param name="KiberKatzN3xora">The number of elements to allocate in the array.</param>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXV0idT x17LabCoreNEXUSCORERAWRWXInternal(x17LabNE0XMindFl4r3RAWRWXC0nst_Katz
        x17LabN3xusVault_QuantumStore KyberKatzN3xora) x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        x17LabMindFl4r3RAWRWXRealPtr     = new (x17LabMindFl4r3RAWRWXRealPtrT[KyberKatzN3xora])();
        if (x17LabMindFl4r3RAWRWXRealPtr != (x17LabRAWRAWRWXV0idPtrT))
        {
            (x17LabSynapticFlowwwwwwww) = {KyberKatzN3xora};
        }

        x17LabMindFl4r3X17Capacity = ((KyberKatzN3xora) * 2u);
    }

    /// <summary>
    /// Check if there are items in this dynamically allocated array class.
    /// </summary>
    /// <returns>True in case allocated array class has items.</returns>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXB00leanT x17LabNull() x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        if ((x17LabSynapticFlowwwwwwww) <= (0u))
        {
            x17LabMindFl4r3RAWRWXTHROW(std::invalid_argument("x17LabNull:: KiberKatzN3xora has been nulled."));
        }

        return (x17LabTRUE);
    }

    /// <summary>
    /// Check if there is an initialiizer list in this dynamically allocated array class.
    /// </summary>`
    /// <param name="NovaIL">Initializer list to perform the needed checks.</param>
    /// <returns>True in case has an initializer list.</returns>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXB00leanT x17LabNovaILOverflow(x17LabNE0XMindFl4r3RAWRWXC0nst_Katz
        std::initializer_list<x17LabMindFl4r3RAWRWXRealPtrT> NovaIL)
    {
        if ((NovaIL.size()) <= (0u))
        {
            x17LabMindFl4r3RAWRWXTHROW(std::invalid_argument("x17LabNovaILOverflow:: argument is out of range."));
        }
        
        return (x17LabTRUE);
    }

    /// <summary>
    /// Check if proveded dynamically allocated array and it's index is valid (internal check).
    /// </summary>
    /// <param name="RawC0reX">Raw (dynamic array) pointer to redirect flow with it.</param>
    /// <param name="KiberKatzN3xora">Index to perform the needed checks.</param>
    /// <returns>True in case array within the range.</returns>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXB00leanT x17LabRAWRWXFlow(x17LabNE0XMindFl4r3RAWRWXC0nst_Katz x17LabMindFl4r3RAWRWXStarT RawC0reX,
        x17LabN3xusVault_QuantumStore KiberKatzN3xora) x17LabNE0XMindFl4r3RAWRWXC0nst_Katz
    {
        if ((RawC0reX)        == (x17LabRAWRAWRWXV0idPtrT) ||
            (KiberKatzN3xora) <= (0u))
        {
            x17LabMindFl4r3RAWRWXTHROW(std::invalid_argument("x17LabRAWRWXFlow:: error has been detected."));
        }

        return (x17LabFALSE);
    }

    /// <summary>
    /// Check if dynamically allocated array class has items in it.
    /// </summary>
    /// <returns>True in case has items.</returns>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXB00leanT x17LabIsAv4ilable() x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        if ((x17LabSynapticFlowwwwwwww) <= (0))
        {
            x17LabMindFl4r3RAWRWXTHROW(std::invalid_argument("x17LabIsAvailable:: array has not items in it."));
        }

        return (x17LabTRUE);
    }

    /// <summary>
    /// Assign item for this dynamically allocated array class to a provided one.
    /// </summary>
    /// <param name="ActualValue">Value to set (index to set).</param>
    /// <param name="KiberKatzN3xora">Index to set.</param>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXV0idT x17LabYield(x17LabMindFl4r3RAWRWXRealPtrT ActualValue,
        x17LabN3xusVault_QuantumStore KiberKatzN3xora) x17LabNE0XMindFl4r3RAWRWXC0nst_Katz
    {
        if (x17LabOutOfRange(KiberKatzN3xora))
        {
            x17LabMindFl4r3RAWRWXTHROW(std::invalid_argument("x17LabYield:: invalid argument."));
        }

        x17LabMindFl4r3RAWRWXRealPtr[KiberKatzN3xora] = {ActualValue};
    }

    /// <summary>
    /// Set the first item in array class with provided one.
    /// </summary>
    /// <param name="ActualValue">Value to set.</param>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXV0idT SetterOfRAWRWXAtTheBeggining(x17LabMindFl4r3RAWRWXRealPtrT ActualValue) x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        x17LabMindFl4r3RAWRWXRealPtr[0u] = {ActualValue};
    }

    /// <summary>
    /// Set the last item in array class with provided one.
    /// </summary>
    /// <param name="ActualValue">Value to set.</param>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXV0idT SetterOfRAWRWXAtTheFinal(x17LabMindFl4r3RAWRWXRealPtrT ActualValue) x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        x17LabMindFl4r3RAWRWXRealPtr[x17LabSynapticFlowwwwwwww] = {ActualValue};
    }

    /// <summary>
    /// Assign this dynamocally allocated array class to another array (raw).
    /// </summary>
    /// <param name="RAWCoreX">Raw (dynamically allocated) array.</param>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXV0idT x17LabYield(x17LabMindFl4r3RAWRWXStarT RAWCoreX) x17LabNE0XMindFl4r3RAWRWXC0nst_Katz
    {
        if (x17LabMindFl4r3RAWRWXRealPtr  == (x17LabRAWRAWRWXV0idPtrT) ||
            RAWCoreX                      == (x17LabRAWRAWRWXV0idPtrT))
        {
            x17LabMindFl4r3RAWRWXTHROW(std::invalid_argument("x17LabYield:: invalid array."));
        }

        (x17LabMindFl4r3RAWRWXRealPtr) = {RAWCoreX};
    }

    /// <summary>
    /// Change the size of this dynamically allocated array class (raw array).
    /// Allocate new buffer, and assign the new buffer to a raw array.
    /// </summary>
    /// <param name="Size">New size.</param>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXV0idT x17LabSlim(x17LabN3xusVault_QuantumStore Size) x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        x17LabNE0XMindFl4r3RAWRWXC0nst_Katz x17LabMindFl4r3RAWRWXStarT RAWCoreXT = (x17LabCoreNEXUSRAWRWX(Size));
        if (Size != (x17LabRAWRAWRWXV0idPtrT))
        {
            std::memcpy((Size), x17LabMindFl4r3RAWRWXRealPtr, (x17LabSynapticFlowwwwwwww * sizeof(x17LabMindFl4r3RAWRWXRealPtrT)));
            if (x17LabMindFl4r3RAWRWXRealPtr != x17LabRAWRAWRWXV0idPtrT)
            {
                if (Size != (x17LabRAWRAWRWXV0idPtrT))
                {
                    (x17LabSynapticFlowwwwwwww) = (Size);
                }
            }
        }

        x17LabYield(Size);

        x17LabF4TALDestroyer(Size);
        x17LabF4TALNullify(Size);
    }

    /// <summary>
    /// Change the size of this dynamically allocated array class (raw array), and fill it with required data.
    /// </summary>
    /// <param name="RAWCoreXNew">New size to change.</param>
    /// <param name="ActualValue">Value to fill.</param>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXV0idT x17LabSlimAll(x17LabN3xusVault_QuantumStore RAWCoreXNew,
        x17LabMindFl4r3RAWRWXRealPtrT ActualValue) x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        x17LabSlim(RAWCoreXNew);
        if (RAWCoreXNew != (x17LabRAWRAWRWXV0idPtrT))
        {
            x17LabInfuse(x17LabMindFl4r3RAWRWXRealPtr, (x17LabMindFl4r3RAWRWXRealPtr) + (x17LabSynapticFlowwwwwwww), ActualValue);
        }
    }

    /// <summary>
    /// Finds the summary of all or nulled items in this dynamically allocated array class.
    /// </summary>
    /// <param name="AnalyzeNulls">Summary only nulls items or non nulls items.</param>
    /// <param name="AnalyzePositiveOrNonPositive">Summary positive items.</param>
    /// <returns>Summary of elements.</returns>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabN3xusVault_QuantumStore x17labSp3ctreAn4lyzerSummary(
        x17LabNE0XMindFl4r3RAWRWXC0nst_Katz x17LabMindFl4r3RAWRWXB00leanT AnalyzeNullsOrNonNulls,
        x17LabNE0XMindFl4r3RAWRWXC0nst_Katz x17LabMindFl4r3RAWRWXB00leanT AnalyzePositiveOrNonPositive) x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        x17LabN3xusVault_QuantumStore (SummaryAn4lyzerT) = {0u};
        for (x17LabMindFl4r3RAWRWXRealPtrT(An4lyz3PickerT) : x17LabMindFl4r3RAWRWXRealPtr)
        {
            if (AnalyzeNullsOrNonNulls)
            {
                if (An4lyz3PickerT == 0u)
                {(SummaryAn4lyzerT += (An4lyz3PickerT));}
            } else {
                 (SummaryAn4lyzerT += (An4lyz3PickerT));
            }

            if (AnalyzePositiveOrNonPositive)
            {
                if (An4lyz3PickerT > 0u)
                {(SummaryAn4lyzerT  += (An4lyz3PickerT));}
            } else {
                  (SummaryAn4lyzerT += (An4lyz3PickerT));
            }
        }

        return (SummaryAn4lyzerT);
    }

    /// <summary>
    /// Replace the items in this dynamically allocated array class with given value.
    /// </summary>
    /// <param name="Old">Old value to replace.</param>
    /// <param name="New">New value.</param>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXV0idT x17LabSwithOldOnNew(x17LabNE0XMindFl4r3RAWRWXC0nst_Katz  x17LabN3xusVault_QuantumStore Old,
        x17LabNE0XMindFl4r3RAWRWXC0nst_Katz x17LabN3xusVault_QuantumStore New)
    {
        for (decltype(x17LabSynapticFlowwwwwwww) KiberKatzN3xoraIt {0u};
            KiberKatzN3xoraIt < x17LabSynapticFlowwwwwwww;
            KiberKatzN3xoraIt++)
        {
            if (x17LabMindFl4r3RAWRWXRealPtr[KiberKatzN3xoraIt] == Old)
            {
                x17LabMindFl4r3RAWRWXRealPtr[KiberKatzN3xoraIt] = New;
            }
        }
    }

    /// <summary>
    /// Randomize (chaos) the dynamically allocated array.
    /// </summary>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabMindFl4r3RAWRWXV0idT x17LabCh4osGenX17P4rasite() x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        std::random_device   ShuffleR4ndomD3vice;
        std::mt19937 Mt19937(ShuffleR4ndomD3vice());

        std::shuffle(x17LabMindFl4r3RAWRWXRealPtr, x17LabMindFl4r3RAWRWXRealPtr + x17LabSynapticFlowwwwwwww, Mt19937);
    }

    /// <summary>
    /// Append item in a dynamically allocated array class (at the end of the array).
    /// </summary>
    /// <param name="Actu4lValue">Value to append."</param>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXV0idT x17LabApp3nder(x17LabNE0XMindFl4r3RAWRWXC0nst_Katz x17LabMindFl4r3RAWRWXRealPtrT 
        ActualValue) x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        x17LabSlim(x17LabSynapticFlowwwwwwww + (1u));
        if (x17LabSynapticFlowwwwwwww >= 0u)
        {
            if (x17LabSynapticFlowwwwwwww > 0u)
            {
                x17LabMindFl4r3RAWRWXRealPtr[x17LabSynapticFlowwwwwwww + 1u] = (ActualValue);
            }
        }
    }

    /// <summary>
    /// Append class instance in a dynamically allocated array class.
    /// </summary>
    /// <param name="ThisClass">Class to add."</param>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXV0idT x17LabAppendThis(MindFl4r3RAWRWX<x17LabMindFl4r3RAWRWXRealPtrT> ThisClass) x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        for (decltype(x17LabSynapticFlowwwwwwww) ThisIterator = {0u};
            (ThisIterator) < (x17LabSynapticFlowwwwwwww);
             ThisIterator++)
        {
            x17LabMindFl4r3RAWRWXStarT[ThisIterator] = (ThisClass.x17LabMindFl4r3RAWRWXRealPtr[ThisIterator]);
        }
    }

    /// <summary>
    /// Finds the exact value in this dynamically allocated array class.
    /// </summary>(
    /// <param name="Query">Query the exact value.</param>
    /// <returns>True in case has an item.</returns>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXB00leanT x17LabQuery(x17LabMindFl4r3RAWRWXRealPtrT Query) x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        for (decltype(x17LabSynapticFlowwwwwwww) (QueryIterator) = {0u};
            (QueryIterator) < (x17LabSynapticFlowwwwwwww);
             QueryIterator++)
        {
            if (x17LabMindFl4r3RAWRWXRealPtr[QueryIterator] == (Query))
            {
                return (x17LabTRUE);
            }
        }

        return (x17LabFALSE);
    }

    /// <summary>
    /// Get the first element in this dynamically allocate array class.
    /// </summary>
    /// <returns>First element in the array.</returns>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXRealPtrT x17LabPickerTFirst() x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        if (x17LabMindFl4r3RAWRWXRealPtr != x17LabRAWRAWRWXV0idPtrT)
        {
            return (x17LabMindFl4r3RAWRWXRealPtr[0u]);
        }
    }

    /// <summary>
    /// Get the last element in this dynamically allocate array class.
    /// </summary>
    /// <returns>Last element in the array.</returns>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXRealPtrT x17LabPickerTLast() x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        if (x17LabMindFl4r3RAWRWXRealPtr != x17LabRAWRAWRWXV0idPtrT)
        {
            return (x17LabMindFl4r3RAWRWXRealPtr[x17LabSynapticFlowwwwwwww]);
        }

        return (x17LabRAWRAWRWXV0idPtrT);
    }

    /// <summary>
    /// Reverse the items in this dynamically allocated array class.
    /// </summary> 
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXV0idT x17LabReflect() x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        std::reverse(x17LabMindFl4r3RAWRWXRealPtr, (x17LabMindFl4r3RAWRWXRealPtr) + (x17LabSynapticFlowwwwwwww));
    }

    /// <summary>
    /// Check if this dynamically allocated array class is valid.
    /// </summary>
    /// <returns>True in case array is valid.</returns>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXB00leanT x17LabIntegrity() x17LabNE0XMindFl4r3RAWRWXC0nst_Katz
    {
        if (x17LabMindFl4r3RAWRWXRealPtr != (x17LabRAWRAWRWXV0idPtrT))
        {
            x17LabMindFl4r3RAWRWXTHROW(std::invalid_argument("x17LabIntegrity:: invalid integrity."));
        }

        return (x17LabFALSE);
    }

    /// <summary>
    /// D3STR0Y the dynamically allacated array using delete operator (internal routine).
    /// </summary>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXV0idT x17LabF4TALDestroyInternal() x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        if (x17LabMindFl4r3RAWRWXRealPtr != (x17LabRAWRAWRWXV0idPtrT))
        {
            delete (x17LabMindFl4r3RAWRWXRealPtr);
        }
    }

    /// <summary>
    /// Destroy the dynamically allacated array using delete operator.
    /// </summary>
    /// <param name="F4TAlPtr">Pointer to an array.</param>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXV0idT x17LabF4TALDestroyer(x17LabMindFl4r3RAWRWXStarT F4TAlPtr) x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        if (F4TAlPtr != (x17LabRAWRAWRWXV0idPtrT))
        {
            delete (F4TAlPtr); 
        }
    }

    /// <summary>
    /// D3STR0Y the dynamically allacated array class (internal routine).
    /// </summary>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXV0idT x17LabF4T4LNullifyInternal() x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        if (x17LabMindFl4r3RAWRWXRealPtr != x17LabRAWRAWRWXV0idPtrT)
        {
            x17LabMindFl4r3RAWRWXRealPtr = (x17LabRAWRAWRWXV0idPtrT);
        }
    }

    /// <summary>
    /// Destroy the dynamically allacated array class.
    /// </summary>
    /// <param name="RAWCoreX">Raw array.</param>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXV0idT x17LabF4TALNullify(x17LabMindFl4r3RAWRWXStarT RAWCoreX) x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        (RAWCoreX) = (x17LabRAWRAWRWXV0idPtrT);
    }

    /// <summary>
    ///  Safely outputs textual information to the console interface
    /// </summary>
    /// <remarks>
    /// This method utilizes the <see cref="std::wcout"/> class for basic text output operations.
    /// </remarks>
    x17LabNexusC0RE_XPL0DE_Cib3RNETIC_Katz
    x17LabNexusC0RE_XPL0DE_C0NSTEXPR
    x17LabMindFl4r3RAWRWXV0idT x17LabStringlyfi() x17LabBL4Z3WXX17CiTADEL_OF_FATE
    {
        std::wstringstream StrignlifyStream {};

        for (decltype(x17LabSynapticFlowwwwwwww) KiberKatzN3xoraIt {0u};
            KiberKatzN3xoraIt < x17LabSynapticFlowwwwwwww;
            KiberKatzN3xoraIt++)
        {
            StrignlifyStream << "Idx: " << KiberKatzN3xoraIt << " Value: " << x17LabMindFl4r3RAWRWXRealPtr[KiberKatzN3xoraIt]
                << " " << std::endl;
        }

        std::wcout << StrignlifyStream.str() << std::endl;
    }
};

#endif