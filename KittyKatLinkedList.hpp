///
/// KittyKatLinkedList.hpp
///

#ifndef KITTYKATLINKEDLIST_GUARD
#define KITTYKATLINKEDLIST_GUARD

#include <initializer_list>

#include "KittyKatNode.hpp"

/// <summary>
/// Macro to count the linked list size (optional).  
/// </summary>
#define QueryCache


template<typename XelorT>
class XelorLinkedList
{
	/// <summary>
	/// Pointer alias for a <see cref="KittyKatXelorNode{XelorT*}"/>.
	/// </summary>
	using MeowXelorNodeStarT = KittyKatXelorNode<XelorT>*;

	/// <summary>
	/// The node from which to start iterate items.
	/// </summary>
	MeowXelorNodeStarT		  MeowXelorNode;

	/// <summary>
	/// Meowzle of items (e.g. replace standart 
	/// "size_t" with custom alias.
	/// </summary>
	using MeowWzleT			= size_t;

#if defined (QueryCache)
	/// <summary>
	/// Contains the amount of items.
	/// </summary>
	MeowWzleT				MeowCounter;
#endif

	/// <summary>
	/// The constructor for an empty linked list, and counter to 0 (null).
	/// </summary>
	KittyForceinline
	KittyConstexpr
	XelorLinkedList() : MeowXelorNode {KittyNullptr}, MeowCounter {0u}{}

	/// <summary>
	/// The constructor for an linked list, which accepts the item.
	/// </summary>
	/// <param="Item">Item to set.</param>
	KittyForceinline
	KittyConstexpr
	explicit
	XelorLinkedList(XelorT Item) : XelorLinkedList()
	{MeowXelorNode = (Item);}

	/// <summary>
	/// The constructor for an linked list, which accepts the item and counter.
	/// </summary>
	/// <param="Item">Item to fill with.</param>
	/// <param="Counter">Counter until.</param>
	KittyForceinline
	KittyConstexpr
	explicit
	XelorLinkedList(XelorT Item, MeowWzleT Count) : XelorLinkedList()
	{
		MeowXelorNode = (Item);
		MeowCounter   = (Count);
	}

	/// <summary>
	/// The constructor for an linked list, which accepts the initializer list.
	/// </summary>
	/// <param="MeowIL">Initializer list to take items from.</param>
	KittyForceinline
	KittyConstexpr
	explicit
	XelorLinkedList(std::initializer_list<XelorT> MeowIL) : XelorLinkedList(){}

	/// <summary>
	/// The constructor for an linked list, which accepts the another
	/// instance of the linked list class.
	/// </summary>
	/// <param="MeowAnother">Another class instance.</param>
	KittyForceinline
	KittyConstexpr
	explicit
	XelorLinkedList(XelorLinkedList<XelorT>& MeowAnother) : XelorLinkedList(){}

	/// <summary>
	/// Linked list class destructor.
	/// </summary>
	~XelorLinkedList()
	{KittyClear();}

	/// <summary>
	/// Check if linked list class contains the exact item provided in argument.
	/// </summary>
	/// <param="ItemFor">The item to take a look.</param>
	/// <returns>True if has item.</returns>
	KittyForceinline
	KittyConstexpr
	KittyBoolean CheckIfHasItem(XelorT ItemFor) KittyNoexcept
	{
		for (MeowWzleT HasItemIt = (0u); (HasItemIt < MeowCounter); HasItemIt++)
		{
			KittyConst KittyConstexpr XelorT (ItemIt) = (GetItemById(HasItemIt));
			if (ItemIt == (ItemFor))
			{
				return (true);
			}
		}

		return (false);
	}

	KittyForceinline
	KittyConstexpr
	KittyBoolean CheckIfHasRawWhole(XelorT* Item) KittyNoexcept
	{
		for (MeowWzleT Iterator = 0u; Iterator < MeowCounter; Iterator++)
		{
			KittyConst KittyConstexpr XelorT(ItemIterator) = (GetItemById(Iterator));
			{
				if (CheckIfHasItem(ItemIterator))
				{
					return (true);
				}
			}
		}
		
		return (false);
	}

	/// <summary>
	/// Delete [] operation on provided item.
	/// </summary>
	/// <param="Item">Item.</param>
	KittyForceinline
	KittyConstexpr
	KittyVoid KittyClearItemByUsingDeleteOperator(XelorT Item) KittyNoexcept
	{
		if ((Item != KittyNullptr))
		{delete [] Item;}
	}

	/// <summary>
	/// Check if given linked list class contains at least one item.
	/// </summary>
	/// <returns>True in case list class has items.</returns>
	KittyForceinline
	KittyConstexpr
	KittyBoolean CheckEmpty() KittyNoexcept
	{
#if defined (QueryCache)
		/// <summary>
		/// In case counter being cached.
		/// </summary>
		if (MeowCounter <= 0u)
		{
			return (true);
		}

		return (false);
#endif

		/// <summary>
		/// Check on initial node.
		/// </summary>
		if (MeowXelorNode == (KittyNullptr))
		{
			return (true);
		}

		return (false);
	}

	/// <summary>
	/// Create a new node instance with given value.
	/// </summary>
	/// <param="Item">Item.</param>
	/// <returns>Node.</returns>
	MeowXelorNodeStarT KittyNew(XelorT Item)
	{
		KittyConst MeowXelorNodeStarT NewNode = new (std::nothrow) KittyKatXelorNode<XelorT>(Item);
		return (NewNode);
	}

	/// <summary>
	/// Clear the given class list by using cache.
	/// </summary>
	KittyForceinline
	KittyConstexpr
	KittyVoid KittyClearCache() KittyNoexcept
	{
#if defined (QueryCache)
		/// <summary>
		/// Quick check on emptiness to not traverse the whole list.
		/// </summary>
		if (MeowCounter == 0u)
		{
			return;
		}
#endif
	}

	/// <summary>
	/// Clear the given class list by walking and visiting the nodes (each node).
	/// </summary>
	KittyForceinline
	KittyConstexpr
	KittyVoid KittyClear() KittyNoexcept
	{
		KittyConst KittyConstexpr MeowXelorNodeStarT (Current) = (MeowXelorNode);
		while (Current != (KittyNullptr))
		{
			MeowXelorNodeStarT (Next) = (Current->KittyNext());
			if (Next != (KittyNullptr))
			{
				KittyClearItemByUsingDeleteOperator(Current);
				Current = (Next);
			}
		}
	}

	/// Insert a single value at the beggining of a linked list class,
	/// assumming list class doesn' has items in it.
	/// </summary>
	/// <param="Item">Item.</param>
	KittyForceinline
	KittyConstexpr
	KittyVoid KittyInsertAtFrontInCaseEmpty(XelorT Item) KittyNoexcept
	{
		KittyConst MeowXelorNodeStarT(NewNodeToInsertAtEnd) = KittyNew(Item);
		if (NewNodeToInsertAtEnd != (KittyNullptr))
		{
			MeowXelorNode = (NewNodeToInsertAtEnd);
			MeowCounter   = (1u);
		}
	}

	/// <summary>
	/// Append a single value at the end of a linked list class.
	/// </summary>
	/// <param="Item">Item.</param>
	KittyForceinline
	KittyConstexpr
	KittyVoid KittyAppendAtTheEnd(XelorT Item) KittyNoexcept
	{
		KittyConst KittyConstexpr  MeowXelorNodeStarT(NewNodeToAppend) = KittyNew(Item);
		if (NewNodeToAppend != (KittyNullptr))
		{
			if (!CheckEmpty())
			{
				KittyInsertAtFrontInCaseEmpty(Item);
			} else {
				MeowXelorNodeStarT XelorNodeIt = (MeowXelorNode);
				while (XelorNodeIt->KittyNext() != (KittyNullptr))
				{
					XelorNodeIt = XelorNodeIt->KittyNext();
				}

				XelorNodeIt->KittySetNext(NewNodeToAppend);
#if defined (QueryCache)
				MeowCounter++;
#endif
			}
		}
	}

	/// <summary>
	///
	/// </summary>
	/// <param="Item">Item to append at the end of a list class.</param>
	/// <param="Counter">Counter to iterate until.</param>
	KittyForceinline
	KittyConstexpr
	KittyVoid AppenderItemAndCounter(XelorT Item, MeowWzleT Counter)
	{
		MeowWzleT(Iterator) = (0u);
		while ((Iterator)   < (Counter))
		{
			KittyAppendAtTheEnd(Item);
			Iterator++;
		}
	}

	/// <summary>
	/// 
	/// </summary>
	/// <returns>Item at provided index.</returns>
	KittyForceinline
	KittyConstexpr
	XelorT GetItemById(MeowWzleT Id) KittyNoexcept
	{
		MeowXelorNodeStarT XelorNodeIterator = (MeowXelorNode);
		if (XelorNodeIterator != (KittyNullptr))
		{
			MeowWzleT XelorIdIterator = (0u);
			while (XelorNodeIterator  < Id)
			{
				XelorNodeIterator = (XelorNodeIterator->KittyNext());
				(XelorIdIterator++);
			}

			/// <summary>
			/// Get the item on the current linked list class iteration.
			/// </summary>
			KittyConst KittyConstexpr XelorT (Item) = (XelorNodeIterator->KittyData());
			if (Item > 0u)
			{
				return (Item);
			}
		}
		
		return (0u);
	}

	/// <summary>
	/// The string which does represents content of this linked list class.
	/// </summary>
	/// <returns>String with items.</returns>
	KittyForceinline
	KittyConstexpr
	std::wstring KittyString() KittyNoexcept
	{
		/// <summary>
		/// Node iterator used to interate throught the nodes.
		/// </summary>
		MeowXelorNodeStarT Current = (MeowXelorNode);

		/// <summary>
		/// Stream data container (contains data).
		/// </summary>
		std::wstringstream WStream{};
		
		/// <summary>
		/// Node traversal to put into a stream.
		/// </summary>
		while ((Current) != (KittyNullptr))
		{
			WStream <<  Current->KittyData();
			Current =  (Current->KittyNext());
		}

	    return (WStream.str());
	}

	/// <summary>
	/// Safely outputs textual information to the console interface
	/// for a linked list class.
	/// </summary>
	KittyForceinline
	KittyConstexpr
	KittyVoid KittyPrint() KittyNoexcept
	{
		if (!CheckEmpty())
		{
			std::wcout << L"KittyLinkedList: list class has no items!";
			return;
		}

		std::wcout << KittyString() << std::endl;
	}
};

#endif 



////
//// SingleLinkedList.h
////
//
//#ifndef SINGLELINKEDLIST_GUARD
//#define SINGLELINKEDLIST_GUARD
//
//#include "SingleLinkedListNode.h"
//
//
///**
// * \brief Сache count.
// */
//#define CPPMACRO_CACHE_COUNT
//
//namespace Structures
//{
//
//    /**
//     * @brief   Implementation of a linked list class (single linked list).
//     *
//     * @param   Type    Type of data list has.
//     */
//    template<typename Type>
//    class SingleLinkedList
//    {
//
//        /** @defgroup   STL STL-like interface for a single list class.
//         *              Used for compatibility with STL.
//         * @{
//         */
//        using this_type = SingleLinkedList<Type>;
//        using size_type = size_t;
//        using value_type = Type;
//        using reference = Type&;
//        using const_reference = const Type&;
//        using pointer = Type*;
//        using const_pointer = const Type*;
//
//    private:
//
//        /**
//         * @brief       Constant used to pass in linked list constructor's argument.
//         */
//        static CPPPREPROCESSOR_CONSTEXPR size_type kDefaultAmountOfItems = 1u;
//
//        /** @defgroup Data group.
//         *
//         * @{
//         */
//
//         /**
//          * @brief       Node from which to start tracking items from.
//          */
//        SingleLinkedList<value_type>* mNodeHead;
//
//        /**
//         * @brief       Use counter to track items count.
//         */
//#if defined (CPPMACRO_CACHE_COUNT)
//        size_type mCount;
//#endif
//
//    public:
//
//        /**
//         * @brief   Build empty linked list class, which doesn't contain any single item.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            SingleLinkedList() : mNodeHead{ CPPMACRO_INVALID_NODE }
//#if defined (CPPMACRO_CACHE_COUNT)
//            , mCount{ 0u }
//#endif
//        {
//        }
//
//        /**
//         * @brief   Build linked list, which does contain single value provided by user.
//         *
//         * @param   Value Vctrreralue to put into.
//         */
//        explicit
//            CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR SingleLinkedList(const_reference Value) : SingleLinkedList()
//        {
//            Append(Value);
//        }
//
//        /**
//         * @brief   Build linked list, which does contain set of values provided in argument.
//         *
//         * @param   Value Value to put into.
//         * @param   Count Amount of items.
//         */
//        explicit
//            CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            SingleLinkedList(const_reference Value, const size_type Count) : SingleLinkedList()
//        {
//            if (Count > 0u)
//            {
//                decltype (mCount) IdIterator = 0u;
//                while (IdIterator < Count)
//                {
//                    Append(Value);
//                    IdIterator++;
//                }
//            }
//        }
//
//        /**
//         * @brief   Build linked list, which does contains items from the raw array.
//         *
//         * @param   Raw   Dynamically allocated array.
//         * @param   Count Amount of items.
//         */
//        explicit
//            CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            SingleLinkedList(const_pointer Raw, const size_type Count) : SingleLinkedList()
//        {
//            if (Raw != nullptr &&
//                Count > 0u)
//            {
//                AppendRawArray(Raw, Count);
//            }
//        }
//
//        /**
//         * @brief Build linked list, which does contain values from the initialization list.
//         *
//         * @param InitializationList Initialization list.
//         */
//        explicit
//            CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            SingleLinkedList(const std::initializer_list<value_type>& InitializationList) : SingleLinkedList()
//        {
//            if (InitializationList.size() != 0u)
//            {
//                AppendInitializerList(InitializationList);
//            }
//        }
//
//        /**
//         * @brief   Build linked list, which does contain values from another list.
//         *
//         * @param   Other Another linked list class.
//         */
//        explicit
//            CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            SingleLinkedList(const this_type& Other) : SingleLinkedList()
//        {
//            if (Other.IsHasItems())
//            {
//                AppendList(Other);
//            }
//        }
//
//        /**
//         * @brief   Destructor.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            ~SingleLinkedList()
//        {
//            Clear();
//        }
//
//        /**
//         * @brief     Check if given linked list class contains items.
//         *
//         * @returns True in case list class has items.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            bool IsHasItems() const CPPMACRO_NOEXCEPT
//        {
//            return (mCount != 0u);
//        }
//
//        /**
//         * @brief     Check if this linked list class contains given item.
//         *
//         * @param     Value Value to lookup for.
//         *
//         * @returns True if found.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            bool IsHasItem(const_reference Value) const CPPMACRO_NOEXCEPT
//        {
//            for (decltype(mCount) Iterator = 0u; Iterator < mCount; Iterator++)
//            {
//                if (GetValueById(Iterator) == Value)
//                {
//                    return (true);
//                }
//            }
//
//            return (false);
//        }
//
//        /**
//         * @brief     Check if this linked list class contains given dynamically allocated (raw) array.
//         *
//         * @param    Raw    Dynamically allocated (raw) array.
//         * @param     Count Amount of items.
//         *
//         * @returns True if found.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            bool IsHasRawArray(const_pointer Raw, const size_type Count) const CPPMACRO_NOEXCEPT
//        {
//            if (Raw != nullptr && Count > 0u)
//            {
//                for (decltype(mCount) Iterator = 0u; Iterator < Count; Iterator++)
//                {
//                    const value_type Value = GetValueById(Iterator);
//
//                    if (IsHasItem(Value))
//                    {
//                        return (true);
//                    }
//                }
//            }
//
//            return (false);
//        }
//
//        /**
//         * @brief    Check if this linked list class contains given initialization list.
//         *
//         * @param    InitializerList Initialization list.
//         *
//         * @returns True if found.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            bool IsHasInitializerList(const std::initializer_list<value_type> InitializerList) const CPPMACRO_NOEXCEPT
//        {
//            if (InitializerList.size())
//            {
//                for (const_reference Value : InitializerList)
//                {
//                    decltype(mNodeHead) NodeIterator = Create(Value);
//                    if (NodeIterator != CPPMACRO_INVALID_NODE)
//                    {
//                        return (NodeIterator->GetData() == Value);
//                    }
//                }
//            }
//
//            return (false);
//        }
//
//        /**
//         * @brief    Check if this linked list class contains given list.
//         *
//         * @param    Other Another linked list class.
//         *
//         * @returns True if found.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            bool IsHasList(const SingleLinkedList<value_type>& Other) const CPPMACRO_NOEXCEPT
//        {
//            for (decltype(mCount) Iterator = 0u; Iterator < Other.mCount; Iterator++)
//            {
//                if (GetValueById(Iterator) != Other.GetValueById(Iterator))
//                {
//                    return (false);
//                }
//            }
//
//            return (true);
//        }
//
//        /**
//         * @brief    Check if this linked list class and it's content equals given list.
//         *
//         * @param   Other Another linked list class.
//         *
//         * @returns True if equals.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            bool IsEquals(const this_type& Other) const CPPMACRO_NOEXCEPT
//        {
//            if (Other.mCount != mCount)
//            {
//                return (false);
//            }
//
//            if (Other != *this)
//            {
//                for (decltype(mCount) Iterator = 0u; Iterator < mCount; Iterator++)
//                {
//                    if (GetValueById(Iterator) != Other.GetValueById(Iterator))
//                    {
//                        return (false);
//                    }
//                }
//            }
//
//            return (true);
//        }
//
//        /**
//         * @brief    Get value at the beggining of a linked list class.
//         *
//         * @returns Value of first item.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            value_type GetFront() CPPMACRO_NOEXCEPT
//        {
//            return (mNodeHead->GetData());
//        }
//
//        /**
//         * @brief       Get value at the end of a linked list class.
//         *
//         * @returns     Value of last item.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            value_type GetBack() CPPMACRO_NOEXCEPT
//        {
//            return (GetValueById(mCount));
//        }
//
//        /**
//         * @brief    Get the value being stored at given index in a linked list class.
//         *
//         * @param   Id Index at which to look for value.
//         *
//         * @returns Value.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            const_reference GetValueById(const size_type Id) const CPPMACRO_NOEXCEPT
//        {
//            decltype(mNodeHead) NodeIterator = mNodeHead;
//            decltype(mCount)    IdIterator = 0u;
//
//            while (IdIterator < Id)
//            {
//                NodeIterator = NodeIterator->GetNext();
//                IdIterator++;
//            }
//
//            return (NodeIterator->GetData());
//        }
//
//        /**
//         * @brief    Get the index of the first occurrence for a given value.
//         *
//         * @param   Value   Value to look up for in a linked list class.
//         *
//         * @returns Index.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            size_type GetIdByValue(const_reference Value) const CPPMACRO_NOEXCEPT
//        {
//            decltype(mNodeHead) NodeIterator = mNodeHead;
//            decltype(mCount)    IdIterator = 0u;
//
//            while (NodeIterator != CPPMACRO_INVALID_NODE)
//            {
//                if (NodeIterator->GetData() == Value)
//                {
//                    return (IdIterator);
//                }
//
//                NodeIterator = NodeIterator->GetNext();
//                IdIterator++;
//            }
//
//            return (0u);
//        }
//
//        /**
//         * @brief   Get the index of the last occurrence for a given value.
//         *
//         * @param   Value Value to look up for in a linked list class.
//         *
//         * @returns Index.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            size_type GetLastIdByValue(const_reference Value) const CPPMACRO_NOEXCEPT
//        {
//            decltype(mNodeHead) NodeIterator = mNodeHead;
//            decltype(mCount)    IdIterator = 0u,
//                IdCounter = 0u;
//
//            while (NodeIterator != CPPMACRO_INVALID_NODE)
//            {
//                if (NodeIterator->GetData() == Value)
//                {
//                    IdCounter = IdIterator;
//                }
//
//                NodeIterator = NodeIterator->GetNext();
//                IdIterator++;
//            }
//
//            return (IdCounter);
//        }
//
//        /**
//         * @brief    Get amount of items in this linked list class.
//         *
//         * @returns Size of a list.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            size_type GetSize() const CPPMACRO_NOEXCEPT
//        {
//            decltype(mNodeHead) NodeIterator = mNodeHead;
//            decltype(mCount)    ItemCounter = 0u;
//
//            while (NodeIterator != CPPMACRO_INVALID_NODE)
//            {
//                NodeIterator = NodeIterator->GetNext();
//                ItemCounter++;
//            }
//
//            return (ItemCounter);
//        }
//
//        /**
//         * @brief   Clear the list.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            void Clear() CPPMACRO_NOEXCEPT
//        {
//#if defined (CPPMACRO_CACHE_COUNT)
//            mCount = 0u;
//#endif
//        }
//
//        /**
//         * @brief       Create a new node instance with given value.
//         *
//         * @param[in]   Value   Value in node.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            SingleLinkedListNode<value_type>*
//            Create(const_reference Value) const CPPMACRO_NOEXCEPT
//        {
//            const decltype(mNodeHead) NewNode = new (std::nothrow) SingleLinkedListNode<value_type>(Value);
//            if (NewNode != CPPMACRO_INVALID_NODE)
//            {
//                return (NewNode);
//            }
//
//            return (CPPMACRO_INVALID_NODE);
//        }
//
//        /**
//         * @brief   Set a new size of a linked list class.
//         *
//         * @param   NewCount New size to set.
//         * @param   Value    Value to set in case willing size of a linked list is more then old one.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            void Resize(const size_type NewCount, const_reference Value = 0u) CPPMACRO_NOEXCEPT
//        {
//            if (NewCount != GetSize())
//            {
//                if (NewCount > GetSize())
//                {
//                    while (GetSize() != NewCount)
//                    {
//                        Append(Value);
//                    }
//                }
//
//                if (NewCount < GetSize())
//                {
//                    while (GetSize() != NewCount)
//                    {
//                        DeleteBack();
//                    }
//                }
//            }
//        }
//
//        /**
//         * @brief   Replaces the item at the specified index in this linked list class with a new one.
//         *
//         * @param   Id    Index at which to replace.
//         * @param   Value Value.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            void Set(const size_type Id, const_reference Value) CPPMACRO_NOEXCEPT
//        {
//            decltype (mNodeHead) NodeIterator = mNodeHead;
//            decltype (mCount)    IdIterator = 0u;
//
//            while (NodeIterator != CPPMACRO_INVALID_NODE)
//            {
//                if (IdIterator == Id)
//                {
//                    decltype(mNodeHead) NewNode = Create(Value);
//                    if (NewNode != CPPMACRO_INVALID_NODE)
//                    {
//                        NodeIterator->SetData(Value);
//                    }
//                }
//
//                IdIterator++;
//                NodeIterator = NodeIterator->GetNext();
//            }
//        }
//
//        /**
//         * @brief Insert the item at the specified index in this linked list class.
//         *
//         * @param Id     Index to insert in.
//         * @param Value Value.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            void Insert(const size_type Id, const_reference Value) CPPMACRO_NOEXCEPT
//        {
//            if (!IsHasItems())
//            {
//                Append(Value);
//                return;
//            }
//
//            const decltype (mNodeHead) NewNode = Create(Value);
//            if (Id == 0u)
//            {
//                NewNode->SetNext(mNodeHead);
//                mNodeHead = NewNode;
//#if defined (CPPMACRO_CACHE_COUNT)
//                mCount++;
//#endif
//            }
//            else if (Id == mCount)
//            {
//                Append(Value);
//            }
//            else {
//                decltype(mNodeHead) NodeIterator = mNodeHead, NodePrevious = CPPMACRO_INVALID_NODE;
//                if (NodeIterator != CPPMACRO_INVALID_NODE)
//                {
//                    decltype(mCount) IdIterator = 1u;
//                    while (IdIterator < Id)
//                    {
//                        NodePrevious = NodeIterator;
//                        NodeIterator = NodeIterator->GetNext();
//                        IdIterator++;
//                    }
//
//                    NewNode->SetNext(NodeIterator);
//                    NodePrevious->SetNext(NewNode);
//                }
//            }
//        }
//
//        /**
//         * @brief   Insert given raw array into given position of the linked list class.
//         *
//         * @param   Id      Id after which to insert into a raw array.
//         * @param   Raw     Dynamically allocated (raw) array.
//         * @param   Count   Amount of items.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            void InsertRawArray(const size_type Id, const_pointer Raw, const size_type Count) CPPMACRO_NOEXCEPT
//        {
//            if (Id > 0u && Raw != nullptr && Count > 0u)
//            {
//                decltype(mCount) IdIterator = Id;
//                while (IdIterator < Id)
//                {
//                    const value_type Value = GetValueById(IdIterator);
//                    Insert(IdIterator, Value);
//                    IdIterator++;
//                }
//            }
//        }
//
//        /**
//         * @brief   Insert given initialization list into given position of the linked list class.
//         *
//         * @param   Id               Id after which to insert initialization list.
//         * @param   InitializerList  Initialization list.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            void InsertInitializerList(const size_type Id, const std::initializer_list<value_type> InitializerList) CPPMACRO_NOEXCEPT
//        {
//            if (InitializerList.size())
//            {
//                decltype(mCount) IdIterator = Id;
//                for (const_reference Value : InitializerList)
//                {
//                    Insert(IdIterator, Value);
//                    IdIterator++;
//                }
//            }
//        }
//
//        /**
//         * @brief   Insert given linked list into given position of the linked list class.
//         *
//         * @param Id     Id after which to insert linked list.
//         * @param Other Linked list class.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            void InsertLinkedList(const size_type Id, const this_type& Other) const CPPMACRO_NOEXCEPT
//        {
//            if (Other.IsHasItems())
//            {
//                decltype(mCount) IdIterator = Id;
//                while (IdIterator < Id)
//                {
//                    Insert(Id, GetValueById(IdIterator));
//                    IdIterator++;
//                }
//            }
//        }
//
//        /**
//         * @brief   Append a single value at the end of a linked list class.
//         *
// 
// 
// 
// 
//         * @param   Value   Value used to append.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            void Append(const_reference Value) CPPMACRO_NOEXCEPT
//        {
//            const decltype(mNodeHead) NewNode = Create(Value);
//            if (NewNode != CPPMACRO_INVALID_NODE)
//            {
//                if (!IsHasItems())
//                {
//                    mNodeHead = NewNode;
//#if defined (CPPMACRO_CACHE_COUNT)
//                    mCount = 1u;
//#endif
//                }
//                else {
//                    decltype(mNodeHead) NodeIterator = mNodeHead;
//                    while (NodeIterator->GetNext() != CPPMACRO_INVALID_NODE)
//                    {
//                        NodeIterator = NodeIterator->GetNext();
//                    }
//
//                    NodeIterator->SetNext(NewNode);
//                    mCount++;
//
//                }
//            }
//        }
//
//        /**
//         * @brief   Append a dynamically allocated array (raw array) at the end of a linked list class.
//         *
//         * @param Raw    Dynamically allocated array (raw array).
//         * @param Count Amount of items.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            void AppendRawArray(const_pointer Raw, const size_type Count) CPPMACRO_NOEXCEPT
//        {
//            if (Raw != nullptr && Count > 0u)
//            {
//                for (decltype(mCount) Iterator = 0u; Iterator < Count; Iterator++)
//                {
//                    Append(Raw[Iterator]);
//                }
//            }
//        }
//
//        /**
//         * @brief   Append a list of values at the end of a linked list class.
//         *
//         * @param InitializerList   Initialization list.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            void AppendInitializerList(const std::initializer_list<value_type>& InitializerList) CPPMACRO_NOEXCEPT
//        {
//            if (InitializerList.size() != 0u)
//            {
//                for (const_reference Value : InitializerList)
//                {
//                    Append(Value);
//                }
//            }
//        }
//
//        /**
//         * @brief   Append a linked list class at the end of a linked list class.
//         *
//         * @param Other Another linked list class.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            void AppendList(const this_type& Other) CPPMACRO_NOEXCEPT
//        {
//            if (Other.IsHasItems())
//            {
//                decltype(mNodeHead) NodeIterator = Other.mNodeHead;
//                while (NodeIterator != CPPMACRO_INVALID_NODE)
//                {
//                    Append(NodeIterator->GetData());
//                    NodeIterator = NodeIterator->GetNext();
//                }
//            }
//        }
//
//        /**
//         * @brief Insert value at the beggining of the linked list class,
//         *
//         * @param Value Value to push at the beggining.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            void InsertFront(const_reference Value) CPPMACRO_NOEXCEPT
//        {
//            Insert(0u, Value);
//        }
//
//        /**
//         * @brief Insert value at the end of the linked list class,
//         *
//         * @param Value Value to push at the end.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            void InsertBack(const_reference Value) CPPMACRO_NOEXCEPT
//        {
//            Append(Value);
//        }
//
//        /**
//         * @brief   Delete item with given id from linked list class.
//         *
//         * @param   Id  Index to delete,
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            void DeleteById(const size_type Id) CPPMACRO_NOEXCEPT
//        {
//            if (!IsHasItems() &&
//                Id > mCount)
//            {
//                return;
//            }
//
//            decltype(mNodeHead) NodeIterator = mNodeHead;
//            if (NodeIterator != CPPMACRO_INVALID_NODE)
//            {
//                decltype(mCount) IdIterator = Id;
//                while (IdIterator < Id)
//                {
//                    NodeIterator = NodeIterator->GetNext();
//                    if (NodeIterator != CPPMACRO_INVALID_NODE)
//                    {
//                        IdIterator++;
//                    }
//                }
//
//                NodeIterator->SetNext(NodeIterator->GetNext()->GetNext());
//            }
//        }
//
//        /**
//         * @brief Delete item with given value from linked list class.
//         *
//         * @param Value Value used to delete.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            void DeleteByValue(const_reference Value) CPPMACRO_NOEXCEPT
//        {
//            if (IsHasItems())
//            {
//                const CPPPREPROCESSOR_CONSTEXPR size_type Id = GetIdByValue(Value);
//                if (Id > 0u)
//                {
//                    DeleteById(Id);
//                }
//            }
//        }
//
//        /**
//         * @brief Delete all occurances with given values from linked list class.
//         *
//         * @param Value Values used to delete.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            void DeleteByValueAllOccurances(const_reference Value) CPPMACRO_NOEXCEPT
//        {
//            if (IsHasItems())
//            {
//                decltype(mNodeHead) NodeIterator = mNodeHead;
//                decltype(mCount)    IdIterator = 0u;
//
//                while (IdIterator < mCount)
//                {
//                    NodeIterator = NodeIterator->GetNext();
//                    if (NodeIterator->GetData() == Value)
//                    {
//                        DeleteById(IdIterator);
//                    }
//
//                    IdIterator++;
//                }
//            }
//        }
//
//        /**
//         * @brief   Delete value located in from of a linked list class.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            void DeleteFront() CPPMACRO_NOEXCEPT
//        {
//            if (IsHasItems())
//            {
//                DeleteById(0u);
//            }
//        }
//
//        /**
//         * @brief   Delete value located at back of a linked list class.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            void DeleteBack() CPPMACRO_NOEXCEPT
//        {
//            if (IsHasItems())
//            {
//                DeleteById(GetSize());
//            }
//        }
//
//        /**
//         * @brief   Delete first value from a linked list and return deleted value.
//         *
//         * @return  Deleted value.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            value_type PopFront() CPPMACRO_NOEXCEPT
//        {
//            const CPPPREPROCESSOR_CONSTEXPR value_type Value = GetFront();
//            DeleteById(0u);
//
//            return (Value);
//        }
//
//        /**
//         * @brief   Delete last value from a linked list and return deleted value.
//         *
//         * @return  Deleted value.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            value_type PopBack() CPPMACRO_NOEXCEPT
//        {
//            const CPPPREPROCESSOR_CONSTEXPR value_type Value = GetBack();
//            DeleteById(mCount);
//
//            return (Value);
//        }
//
//        /**
//         * @brief   Create a new instance of a linked list class by taking initial index and last index of this class.
//         *
//         * @param  From Index used to start building linked list class.
//         * @param   To   Index to finish linked list.
//         *
//         * @return  New list.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            this_type Create(const size_type From, const size_type To) const CPPMACRO_NOEXCEPT
//        {
//            if (From > 0u && To > From && IsHasItems())
//            {
//                const CPPPREPROCESSOR_CONSTEXPR this_type CreateNewListClass;
//                decltype(mCount) IdIterator = From;
//
//                while (IdIterator < To)
//                {
//                    const CPPPREPROCESSOR_CONSTEXPR value_type Value = GetValueById(IdIterator);
//                    CreateNewListClass.Insert(IdIterator, Value);
//                    IdIterator++;
//                }
//
//                return (CreateNewListClass);
//            }
//
//            return (*this);
//        }
//
//        /**
//         * @brief    Use C++'s access operator to get a value at given index.
//         *
//         * @param    Index Index to lookup value at.
//         *
//         * @returns Value at given index.
//         */
//        CPPPREPROCESSOR_FORCEINLINE value_type       operator[](const size_type Index) { return (GetValueById(Index)); }
//        CPPPREPROCESSOR_FORCEINLINE const value_type operator[](const size_type Index) const { return (GetValueById(Index)); }
//
//        /**
//         * @brief     Overloaded comparison operators.
//         *
//         * @param     Other Another linked list class used to compare items with.
//         *
//         * @returns True if condition were met.
//         */
//        CPPPREPROCESSOR_FORCEINLINE bool operator< (this_type& Other) const CPPMACRO_NOEXCEPT { return ((mCount < Other.mCount)); }
//        CPPPREPROCESSOR_FORCEINLINE bool operator<=(this_type& Other) const CPPMACRO_NOEXCEPT { return ((mCount <= Other.mCount)); }
//        CPPPREPROCESSOR_FORCEINLINE bool operator> (this_type& Other) const CPPMACRO_NOEXCEPT { return ((mCount > Other.mCount)); }
//        CPPPREPROCESSOR_FORCEINLINE bool operator>=(this_type& Other) const CPPMACRO_NOEXCEPT { return ((mCount >= Other.mCount)); }
//
//        /**
//         * @brief     Overloaded equality operator.
//         *
//         * @param   Other Another linked list class used to check.
//         *
//         * @returns True on equality.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            bool operator==(this_type& Other) const CPPMACRO_NOEXCEPT
//        {
//            if (IsEquals(Other))
//            {
//                return (true);
//            }
//
//
//            return (false);
//        }
//
//        /**
//         * @brief     Overloaded enequality operator.
//         *
//         * @param     Other Another linked list class used to check.
//         *
//         * @returns True on enequality.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            bool operator!=(this_type& Other) const CPPMACRO_NOEXCEPT
//        {
//            if (!(operator==(Other)))
//            {
//                return (true);
//            }
//
//            return (false);
//        }
//
//        /**
//         * @brief    Overloaded assignment operator.
//         *
//         * @param    Other Instance of a linked list class to take items from.
//         *
//         * @returns Linked list class.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            this_type& operator=(const this_type& Other) const CPPMACRO_NOEXCEPT
//        {
//            if (std::addressof(Other) != this &&
//                Other.IsHasItems())
//            {
//                const CPPPREPROCESSOR_CONSTEXPR this_type LinkedList;
//
//                LinkedList.Clear();
//                LinkedList.InsertLinkedList(0u, Other);
//                return (LinkedList);
//            }
//
//            return (*this);
//        }
//
//        /**
//         * @brief    Overloaded assignment operator.
//         *
//         * @param    Other Instance of a linked list class to take items from.
//         *
//         * @returns Linked list class.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            this_type operator+=(const this_type& Other) const CPPMACRO_NOEXCEPT
//        {
//            const CPPPREPROCESSOR_CONSTEXPR this_type LinkedList;
//
//            LinkedList.operator=(this);
//            LinkedList.AppendList(Other);
//            return (*this);
//        }
//
//        /**
//         * @brief    Build a string which represents content of this forward list class.
//         *
//         * @returns String with items.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            std::string toString() const CPPMACRO_NOEXCEPT
//        {
//            decltype(mNodeHead) NodeIterator = mNodeHead;
//            std::stringstream StreamContent;
//
//            while (NodeIterator != CPPMACRO_INVALID_NODE)
//            {
//                StreamContent << NodeIterator->GetData() << " ";
//                NodeIterator = NodeIterator->GetNext();
//            }

//            StreamContent << std::endl;
//            return (StreamContent.str());
//        }
//
//        /**
//         * @brief   Output list content by using standart output device.
//         */
//        CPPPREPROCESSOR_FORCEINLINE
//            CPPPREPROCESSOR_CONSTEXPR
//            void Print() const CPPMACRO_NOEXCEPT
//        {
//            if (!IsHasItems()) {
//                std::cout << "SingleLinkedList: linked list class has no items!" << std::endl;
//                return;
//            }
//
//            std::cout << toString() << std::endl;
//        }
//    };
//}
//}
//#endif // SINGLELINKEDLIST_GUARD
